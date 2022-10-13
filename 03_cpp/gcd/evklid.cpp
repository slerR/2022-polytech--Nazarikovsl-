#include <iostream>
#include <cassert>
using namespace std;
int gcd(int a, int b) {
  
  if (a < 0) a *= -1;
  if (b < 0) b *= -1;

  if (b == 0)
        return a;
    return gcd(b, a % b);
    
}


int main()
{
    int a, b;
    cout<<"Please, enter your numbers"<<endl;
    cin>>a;
    cin>>b;
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a, b);
    cout<<endl<<endl;
    
  assert(gcd(0, 5) == 5);
  assert(gcd(9, 0) == 9);
  assert(gcd(48, 64) == 16);
  assert(gcd(-64, 48) == 16);
  assert(gcd(30, 18) == 6);
  assert(gcd(-30, -18) == 6);
  assert(gcd(270, 192) == 6);
    system("pause");
    return(0);
    
   

}


  



