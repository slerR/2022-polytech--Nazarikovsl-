
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
	char parameter[20];   
	int value;   
	char unit[3];   
	double memory[2];

	ifstream in("/proc/meminfo", std::ios_base::in);  
	for(int i = 0; i < 2; i++) 
	{
		in >> parameter >> value >> unit;
		memory[i] = value;
	}
	double p = memory[1] / memory[0];
	int percentage = p * 100;
  int count_bars = round(percentage/10);
	for (int i = 0; i < count_bars; i++)
	{
		cout << "| ";
	}
	for (int i = 0; i < (10 - count_bars); i++)
	{
		cout << ". ";
	}
	cout << " " << percentage << "%" << endl;
	system("pause 0");
  return 0;

}