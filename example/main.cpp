#include <iostream>
#include "calculator.hpp"

using namespace std;

int main()
{
	double a,b;
	int c;
	while (1)
	{
		try
		{
			cin >> a;
			cin >> b;
			cin >> c;
			if (b == 0)
				throw b;

			cout << sum(a, b) << endl;
			cout << sub(a, b) << endl;
			cout << multip(a, b) << endl;
			cout << di(a, b) << endl;
			cout << power(a, c) << endl;
			cout << squareroot(a) << endl;
		}
		catch (double b)
		{
			cout << "Enable value for b\n";
		}
	}
 	system("pause");
	return 0;
}
