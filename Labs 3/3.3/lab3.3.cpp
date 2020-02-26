

#include <iostream>
#include <math.h>
using namespace std;


int main()
{
	double left = 1.0;
	double right = 10.0;
	double m = (right + left) / 2.0;
	while (m != left && m != right)
	{
		if ((m * m * m + m + 1) < 5) left = m;
		else right = m;
		m = (right + left) / 2;
	}
	cout << left;
}
