#include <iostream>
#include "str.h"

int main()
{
    String str = "aboba";
    String under = "abo";

    String s = "";
    s.search(under,str);
    system("pause 0");
    return 0;
}
