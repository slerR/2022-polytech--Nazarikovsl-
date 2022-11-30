#include <iostream>
using namespace std;

class String {
private:
  unsigned int length;
  char *data;

public:
  String(const char *s);
  unsigned int get_length();
  const char *c_str();
  String operator+(String rv);
  friend ostream &operator<<(ostream &out, String &S);
  ~String();
};