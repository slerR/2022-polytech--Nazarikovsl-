#include <iostream>
#include <chrono>
#include <Windows.h>
#include "choice_sort.cpp"
#include "fill_array_random.cpp"
#include "quick_sort.cpp"
using namespace std;


int main()
{
        while (true)
    {
        int size = 0;
        cout << "Enter array size" << endl;
        cin >> size;
        int *arr = new int[size];
        fill_array_random(arr, size, 0, 100);
        auto begin = chrono::steady_clock::now();
        quick_sort(arr, 0, size - 1);
        auto end = chrono::steady_clock::now();
        auto elapsed_ms = chrono::duration_cast <chrono::nanoseconds> (end - begin);
        fill_array_random(arr, size, 0, 100);
        begin = chrono::steady_clock::now();
        ch_sort(arr, size);
        end = chrono::steady_clock::now();
        auto elapsed_ms2 = chrono::duration_cast <chrono::nanoseconds> (end - begin);
        cout << "Array size: " << size << endl << elapsed_ms2.count() * 0.000000001 << " (ss), "
            << elapsed_ms.count() * 0.000000001 << " (qs)" << endl;
        delete[] arr;
		system("pause 0");
		return 0;
    }
}