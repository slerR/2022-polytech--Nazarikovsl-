#include <iostream>
#include "binary_f.cpp"
using namespace std;

int main()
{
int arr[] = {-10,-2,0,4,32,55,100,234};

int n =sizeof(arr)/sizeof(arr[0]);

int x;

cout << "Enter the element ";

cin >> x;

int num = binary_search(arr,0,n-1,x);

if(num == -1)
{
    cout<<"There is no such element"<< endl;
}

else
{
cout << "Your element index is " << num << endl;
}

system("pause 0");
return 0;
}
