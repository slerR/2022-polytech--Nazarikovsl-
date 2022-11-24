#include <iostream>
#include <cassert>
#include <cstring>

const char arr[] = "0123456789";

int str_to_int(const char* a) //переводим строку в целое число
{

int number = 0;

for(int i = 0; i < strlen(a); i++){

 for(int j = 0; j < 10; j++){
     
    if(a[i]==arr[j])
    {
        number *=10;
        number +=j;
    }
  }
 }
if(a[0]=='-') //если строка представляет отрицательное число, то результат домножаем на -1
{
    number *=-1; 
}

 return number;
}



const char* int_to_str(int a) // переводим строку в целое число
{

int count = 1; // смотрим количество цифр в искомом числе
int b = a;

while(b/10 !=0)
{
    b /= 10;
    count++;
}

b=a;

const int arr1[] = {0,1,2,3,4,5,6,7,8,9};
char *string = new char[count +2]; //объявляем динамический массив для записи нашего числа как строки

if(a >= 0) // для положительных чисел
{

 for(int i = count-1; i > -1; i--)
 {
    for(int j = 0; j < 10; j++)
    {
        if((a%10)==arr1[j]) // смотрим на остаток от деления по модулю, и записываем его в конец массива
        {
           string[i]=arr[j];
           break;
        }
    }
    a /= 10;
 }
 string[count] = '\0';
}

a=b;

if(a<=0) // для отрицательных чисел 
{
a *= -1;
string[0] = '-';

for(int i = count; i > 0; i--)
 {
    for(int j = 0; j < 10; j++)
    {
        if((a%10)==arr1[j]) // смотрим на остаток от деления по модулю, и записываем его в конец массива
        {
           string[i]=arr[j];
           break;
        }
    }
    a /= 10;
 }
 string[count+1] = '\0';
}
return string;
}


int number_mul(const char* a, const char* b) // результат умножения строк ввиде целого числа
{
    int result = str_to_int(a)*str_to_int(b);
    return result;
}

const char* char_mul(const char* a, const char* b) // результат умножения строк ввиде строки
{
   return int_to_str(number_mul(a,b));
}
int main()
{
    std::cout << "2*6 = " << char_mul("2","6") << std::endl << std::endl;
    std::cout << "-1*100 = " << char_mul("-1","100") << std::endl << std::endl;
    assert(char_mul("1","2") == "2"); // проверяем работоспособность программы
    assert(char_mul("3","4") == "12");
    assert(char_mul("0","5") == "0");
    assert(char_mul("-2","0") == "0");
    assert(char_mul("13","13") == "169");
    assert(char_mul("100","100") == "10000");
    system("pause 0");
    return 0;
}







