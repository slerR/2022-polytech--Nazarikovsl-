#include <iostream>
#include "insert_sorted_f.cpp"
using namespace std;

int main(){

int arr[] = {1,2,3,4,5,6,7,8,9};

int const size1 = 9;

int const size2 = 10;

int n_arr[size2];

int x;

cout << "Enter the number ";

cin >> x;

insert_sorted(arr, n_arr, size1, x);

for(int i=0; i < size2; i++){

  cout << n_arr[i] << " ";

  }

  cout << endl << endl;


system("pause 0");

return 0;

}