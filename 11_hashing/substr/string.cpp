#include "str.h"
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



int* String::search( String understr, String str){

// создаем массив, заполненный числами p в соответствующей степени
const int n = str.get_length();
int *pow = new int[n];
pow[0] = 1;
int p = 31;
for (int i = 1; i <= n; i++) {
	pow[i] = pow[i - 1] * p;
}

// считаем хеши префиксов строки s
int* hs = new int[n];
hs[0] = str.data[0];
for (int i = 1; i < n; i++) {
	hs[i] = hs[i - 1] + pow[i] * str.data[i];
}

//считаем хеш подстроки
long ht = understr.data[0];
for (int i = 1; i < understr.get_length(); i++) {
	ht += pow[i] * str.data[i];
}


//высчитываем хеш подстрок с шагом в длину заданной подстроки для поиска
/*
long result;
int* arr =  new int[n];
int k = 0;
int i = 0;
for(int j = i + understr.get_length(); j < n; j++)
{
    result = hs[j];
	result -= i == 0 ? 0 : hs[i - 1];
    arr[k] = result;
    ++k;
    ++j;
}
*/

// проверяем все позиции
int* count = new int[n/understr.get_length()+1];
int j = 0;
for (int i = 0; i + understr.get_length() <= n; i++) {
	if (hs[i] == ht) {
		count [j] = i;
        cout << "There is the index of the beggining of the understr: " << i << endl;
        j++;
	}
}
return count;
delete[] count;
delete[] hs;
delete[] pow;
//delete[] arr;
}


