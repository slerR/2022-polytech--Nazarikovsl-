#include <iostream>
#include "linear_f.cpp"
using namespace std;

int main()
{

int arr[] = {0, 3, 3, 6 ,-1 ,-1 , -1 , 0 , 3};
int result[] = {0,0,0,0,0,0,0,0,0};
int n = 8;
int x;
cout << " Enter desirable element ";
cin >> x;

int num = search(arr,n,x,result);
if (num ==-1)
   {
     cout << "There is no such element" << endl;
   }

else
{
   cout <<" There are "<< num << "elements" << endl;
   cout <<"Their indexes are: ";
   for(int j = 0; j<num; j++)
      {
      cout << result[j] <<";"<< endl;
      }
} 

system("pause 0");
return 0;
}