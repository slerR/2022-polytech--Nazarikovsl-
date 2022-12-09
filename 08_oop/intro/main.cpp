#include "String.cpp"
#include <iostream>

int main() {
  String biba = "ABO";
  String boba = biba + "BA";
  std::cout << boba << '\n' << boba.get_length();
  system("pause 0");
  return 0;
}
