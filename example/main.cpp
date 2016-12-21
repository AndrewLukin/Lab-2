#include <iostream>
#include "calculator.hpp"

using namespace std;

int main()
{
    	double a = 0.0;
	double b = 0.0;
	int* c = (int*)malloc(sizeof(int));
	int* extent = (int*)malloc(sizeof(int));
	*c = 0;
	*extent = 0;
	cin >> a;
	cin >> b;
	cout << endl << sum(a,b) << endl;
	cout << sub(a,b) << endl;
	cout << mult(a,b) << endl;
	div(a,b,c);
	if ( *c == 0 ) cout << "a / b = " << div(a,b,c) << endl;
		else cout << "Invalid value for b" << endl;
	cout << "a^e, print e = ";
	cin >> *extent;
	pow(a, extent, c);
	if ( *c == 0 ) cout << "a^e = " << pow(a, extent, c) << endl;
	squareroot(a,c);
	if ( *c == 0 ) cout << "sqrt(a) = " << squareroot(a,c) << endl;
		else cout << "Invalid value for a" << endl;
	return 0;
}
