#include <random>
#include <iostream>
using namespace std;

void fill_array_random(int arr[], int n, int a, int b)
{
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist(a,b);
    
    for(int i=0; i<n; ++i)
    {
        arr[i] = dist(rng);
    }
}

void swap(int arr[], int idx_a, int idx_b)
{
    int temp = arr[idx_a];
    arr[idx_a] = arr[idx_b];
    arr[idx_b] = temp; 
}

void print_array(int arr[], int n, bool show_index = false)
{
cout << "{";
  
if (show_index = true){
   
   for(int i = 0; i < n; i++){

    if(i != n - 1){

    cout << i << ": " << arr[i] << ", ";

    }

    else {

    cout << i << ": " << arr[i];

    }
   }
}

else{

for(int i = 0; i < n; i++){

    if(i != n - 1){

    cout << arr[i] << ", ";

    }

    else {

    cout << arr[i];
    }
  }
}  

cout << "}" << endl;

}

int main()
{
    int arr[10];
    int n = sizeof(arr) / sizeof(arr[0]);
    fill_array_random(arr, n, 0, 100);
    print_array(arr, n);
    system("pause 0");
    return 0;
}