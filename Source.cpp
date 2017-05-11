#include <iostream>
using namespace std;

class Complex {
	double a;
	double b;
public:
	double real() {return a;}
	double imaginary() {return b;}
	Complex()
	{
		a =	b = 0;
	}
	Complex(double x, double y)
	{
		a = x; b = y;
	}

	void sum(Complex number)
	{
		a += number.real();
		b += number.imaginary();
	}

	void sub(Complex number)
	{
		a -= number.real();
		b -= number.imaginary();
	}

	void mult(int number)
	{
		a *= number;
		b *= number;
	}

	void div(int number)
	{
		if (number) 
		{
			a /= number;
			b /= number;
		}
		else cout << "You can't divide by zero !" << endl;
	}

	void mult_complex(Complex number)
	{
		double temp = a;
		a = a*number.real() - b*number.imaginary();
		b = temp*number.imaginary() + b*number.real();
	}
	void print()
	{
		cout << a << " + i*(" << b << ')' << endl;
	}
	~Complex() {}
};
int main() {
	Complex num1(15, 25);
	Complex num2(5, 2);
	cout << "Complex numbers: " << endl;
	num1.print(); num2.print();
	cout << "Sum: " << endl;
	num1.sum(num2); num1.print();
	cout << "Sub: " << endl;
	num1.sub(num2); num1.print();
	cout << "Mult: " << endl;
	num1.mult(5); num1.print();
	cout << "Complex mult :" << endl;
	num1.mult_complex(num2); num1.print();
	cout << "Div: " << endl;
	num1.div(5); num1.print();
	cout << "Div(0) :" << endl;
	num1.div(0);
	system("pause");
	return 0;
}
