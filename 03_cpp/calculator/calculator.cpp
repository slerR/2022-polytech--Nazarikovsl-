#include <iostream>
#include <cmath>
int main()
{
    using namespace std;
    
    double a;
   
    double b;
    
    char c;
   
    while (true)

    { 
        cout <<"Dear, enter the desired mathematical operation\n";
    
    cin >> a;
    
    cin >> c;
    
    cin >> b;
    
   switch(c)
    {
        case '+':
        cout << "Dear, here is the result of the operation\n " << a+b << endl;
        break;
        
        case '-':
        cout << "Dear, here is the result of the operation\n" << a-b << endl;
        break;
        
        case '*':
        cout << "Dear, here is the result of the operation\n " << a*b << endl;
        break;
        
        case '/':

        if (b==0)
        {
            cout <<"Dear, chose another number" << endl;
        }
        else
        {
        cout << "Dear, here is the result of the operation\n " << a/b << endl;
        }

        break;
    
       
        case '^':
        cout << "Dear, here is the result of the operation\n " << pow(a,b) << endl;
        break;

        default:
        return 0;
        break;
        system(0);

    }
  }
}

