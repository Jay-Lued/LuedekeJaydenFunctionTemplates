//Jayden Luedeke
//CIS 1202
//May 7, 2023

#include <iostream>
#include <cmath>

using namespace std;

template <typename number>
number half(number num)
{
	if (is_integral<number>::value)
	{
		//created double and assignes it value of num
		double d = (double)num;

		d = d / 2;
		d = round(d);

		return d;
	}
	else
	{
		num = num / 2;
		return num;
	}
}

int main()
{
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;
}

