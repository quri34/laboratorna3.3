// Lab_03_3.cpp
// < Бихнюка Сергія >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 0.1
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент

	double R; // вхідний параметр
	double y; // результат обчислення виразу

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= -8)
		y = -R;
	else
		if (-8 < x && x <= -R)
			y = -R + (R / (-R + 8)) * (x + 8);
		else
			if (-R < x && x <= R)
				y = -sqrt((R * R) * (x * x));
			else
				if (R < x && x <= 5)
					y = 2 / (5 - R) * (x - R);
				else
					if (5 < x)
						y = 3;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}