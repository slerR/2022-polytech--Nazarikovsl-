#include <cassert>
#include <cstring>

bool palindrome(const char* str){

int j = 0;

int n = strlen(str) -1;

for(int i = 0; j = n; i <= j, i++, j--)
{
    if(str[i] != str[j])
       return false;
}

    return true;

}

int main(){

assert(palindrome("a") == true);
assert(palindrome("hochuspat") == false);
assert(palindrome("pipi") == false);
assert(palindrome(nullptr) == true);
assert(palindrome(" ") == true);

return 0;
}