#include "String.h"
#include <cstring>
#include <iostream>

String::String(const char *s) {
  length = strlen(s);
  data = new char[length+1];
  strcpy(data, s);
}

unsigned int String::get_length() { return length; }

const char *String::c_str() { return data; }

String String::operator+(String rv) {
  auto dest = (char *)malloc(length);
  strcpy(dest, data);
  strcpy(dest + rv.get_length(), rv.c_str()); 
  return String(dest);
}

ostream &operator<<(std::ostream &out, String &S) {
  out << S.c_str();
  return out;
}

String::~String()
{
    delete[] data;
}