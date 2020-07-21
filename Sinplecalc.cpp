#include <iostream>
using namespace std;

class Calculator
{
public:
	double Calculate(double x, char oper, double y)
	{
		switch (oper)
		{
		case '+':
			return x + y;
		case '-':
			return x - y;
		case '*':
			return x * y;
		case '/':
			return x / y;
		default:
			return 0;
		}
	}
};

int main()
{
	double x = 0.0;
	double y = 0.0;
	double result = 0.0;
	char oper = '+';
	Calculator c;
	while (true)
	{
		cin >> x >> oper >> y;
		result = c.Calculate(x, oper, y);
		cout << "Result is: " << result << endl;
	}
	return 0;
}
