#include <iostream>
#include <cmath>
using namespace std;

class Complex {
public:
	int r_part;
	int i_part; 
	Complex(int r, int i) : r_part(r), i_part(i) {}; 
	const Complex operator+(const Complex rv) const; 
	const Complex operator-(const Complex rv) const; 
	const bool operator==(const Complex rv) const; 
	const double abs() const; 
};

const Complex Complex::operator+(const Complex rv) const { 
	return Complex(r_part + rv.r_part, i_part + rv.i_part);
}
const Complex Complex::operator-(const Complex rv) const { 
	return Complex(r_part - rv.r_part, i_part - rv.i_part);
}

const bool Complex::operator==(const Complex rv) const { 
	return r_part == rv.r_part && i_part == rv.i_part;
}

const double Complex::abs() const {
	return sqrt(r_part * r_part + i_part * i_part); 
}

int main()
{
    Complex a(1,0);
    Complex b(2,-1);
    
    Complex c =  a.operator-(b);
    Complex d =  a.operator+(b);
    double e =  a.abs();
    bool k =  a.operator==(b);
    
    cout << "a - b = " << "r part: " << c.r_part << "; i part: " <<c.i_part << endl;
    cout << "a + b = " << "r part: " << d.r_part << "; i part: " <<d.i_part << endl;
    cout << "a = b? " << k << endl;
    cout << "|a| = " << e << endl;
    
    system("pause 0");
    return 0;
}