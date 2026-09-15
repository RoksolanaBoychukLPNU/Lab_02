// Lab_02.cpp
// Бойчук Роксолана
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 2

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double Pi = 4 * atan(1);   
    double a;               
    double z1;                  
    double z2;                  

    cout << "a = "; 
    cin >> a;

    z1 = cos(a) + sin(a) + cos(3 * a) + sin(3 * a);
    z2 = 2 * sqrt(2) * cos(a) * sin(2 * a + Pi / 4);

	cout << "---------------------------------" << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;
	cout << "---------------------------------" << endl;

	cout << "bla bla bla" << endl;
    cin.get();
    return 0;
}
