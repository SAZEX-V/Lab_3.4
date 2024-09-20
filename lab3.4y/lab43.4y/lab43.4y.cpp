// Lab_03_4.cpp
// < Парфенюк Єгор Максимович >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 9
#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний аргумент
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі
	if ((y <= pow((x - 1), 2) && R >= pow((x - 0), 2) - pow((y - 0), 2) && y >= 0 && x >= 0) ||
		(R >= pow((x - 0), 2) - pow((y - 0), 2) && y <= 0 && x <= 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}