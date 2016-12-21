#include <iostream>
#include "calculator.hpp"

using namespace std;

int main()
{
	double a, b;
	int c;
	cin >> a;
	cin >> b;
	cin >> c;
	cout << sum(a, b) << endl;
	cout << sub(a, b) << endl;
	cout << multip(a, b) << endl;
	long double result = di(a, b);
	if (result != NULL)
		cout << result << endl;
	else
		cout << "Invalid value for b" << endl;
	cout << power(a, c) << endl;
	long double result1 = squareroot(a);
	if (result1) cout << squareroot(a) << endl;
	else cout << "Invalid value for a" << endl;
	system("pause");
	return 0;
}
