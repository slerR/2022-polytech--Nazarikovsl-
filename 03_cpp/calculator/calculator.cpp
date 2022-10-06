#include <iostream>
#include <cmath>
int main()
{
    using namespace std;
    
    double a;
   
    double b;
    
    char c;
   
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
        
        cout << "Dear, here is the result of the operation\n " << a/b << endl;

        break;
    
       
        case '^':
        cout << "Dear, here is the result of the operation\n " << pow(a,b) << endl;
        break;

        default:
        cout << "Dear, such an operation is impossible to calculate\n";
        break;

    }


system("Pause");

return 0;

}

