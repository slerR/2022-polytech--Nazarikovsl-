#include <iostream>
#include <cassert>
using namespace std;

unsigned int length(const char* str)
{
int length = 0;

const char* parr = str;

for(int i = 0; parr[i] != '\0'; i++ ){
    length++;
}

return length;

delete[] parr;

}

int main()
{
    assert(length("a") == 1);
    assert(length("ab") == 2);
    assert(length("") == 0);
    assert(length("hello world") == 11);
    assert(length(nullptr) == 0);
    system("pause 0");
    return 0;
}