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
        catch (double b)
		{
			cout << "Enable value for b\n";
		}
			cout << sum(a, b) << endl;
			cout << sub(a, b) << endl;
			cout << multip(a, b) << endl;
			cout << di(a, b) << endl;
			cout << power(a, c) << endl;
			if (a < 0)
				throw a;
        catch (double a)
		{
			cout << "Enable value for a\n";
		}			
			cout << squareroot(a) << endl;
		}
		
	}
 	system("pause");
	return 0;
}
