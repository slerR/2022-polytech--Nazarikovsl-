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


/*
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
/*
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
*/

int* String::search (String str, String str2)
{ 
    int sum  = 0;
    int sum2 = 0;
    int i = 0;
    int k = 0;
    int a = 0;
    int* arr = new int [a];
    
    char str2_02[264] = {};
    
    char temp [264] = {};
    
    //считаем хеш исходной подстроки
    for (int i = 0; str2.data[i] != 0; i++) 
    {
        sum += str2.data[i];
    }
    
    //считаем хеш подстроки, длины как переданная параметром в функцию подстрока, в исходной строке 
    for (int k = 0; str2.data[k] != 0; k++)
    {
        sum2 += str.data[k];
    }
    
    //записываем данные строки класса String в инициализированную строку
    for (int  i = 0; i < str2.get_length(); i++)
    {
        str2_02[i] = str2.data[i];     
    }
    
    //идем по всей строке, сравниваем хеш суммы всех подстрок строки и хеш заданной подстроки, а также сравниваем сами подстроки
    for (int p = 0; str.data[p] != 0; p++)
    {
        int l = p;     
        
        for (int t = 0; str2.data[t] != 0; t++)
        {
            temp [t] = str.data[l];
            l++;
        }
       
        if (sum = sum2 && strcmp (str2_02, temp) == 0) {arr[a] = p; ++a;}
        
        else sum2 - str.data[p] + str.data[p + i];
    }
    return arr;
}
