#include <chrono>
#include <fstream>
#include <iostream>
#include <thread>
#include <cmath>

void get_cpuinfo(unsigned long long int fields[]) {
  char line[3];
  std::ifstream in("/proc/stat", std::ios_base::in);
  in >> line;
  for (int i = 0; i != 10; ++i) {
    if (in.is_open()) {
      in >> fields[i];
    } else {
      exit(0);
    }
  }
}

int main() {
  unsigned long long int fields[10], total_tick, total_tick_old, idle, idle_old,
      d_total_tick, d_idle;
  double usage;
  int percent_usage;

  get_cpuinfo(fields);

  total_tick = 0;
  for (int i = 0; i < 10; i++) {
    total_tick += fields[i];
  }
  idle = fields[3];

  while (true) {
    std::chrono::milliseconds timespan(1000);
    std::this_thread::sleep_for(timespan);

    total_tick_old = total_tick;
    idle_old = idle;

    get_cpuinfo(fields);

    total_tick = 0;
    for (int i = 0; i < 10; i++) {
      total_tick += fields[i];
    }
    idle = fields[3];

    d_total_tick = total_tick - total_tick_old;
    d_idle = idle - idle_old;

    usage =
    ((d_total_tick - d_idle) / (double)d_total_tick) * 100;
    percent_usage = round(usage);
    std::cout << "Total CPU Usage: " << percent_usage << "%" << std::endl;
  }
  system("pause 0");
  return 0;
}