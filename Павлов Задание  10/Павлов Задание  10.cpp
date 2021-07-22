#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;
bool LeapYear(int);

int main()
{
	setlocale(LC_CTYPE, "rus");
	cout << "===Задание 10=========\n";
	int N[11] = { 1, 4, 101, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2018 };
	for (int i=0; i<11; i++)
		LeapYear(N[i]);
	system("pause");
	return 0;
}
bool LeapYear (int N)
{
	if (N % 4 == 0)
		if (N < 1600)
			cout <<setw(4)<<right<< N << setw(2) << right << " - " << setw(3) << right << "Високосный год" << endl;
		else 
			if (N%100==0 && !(N%400==0))
			cout << setw(4) << right << N << setw(2) << right << " - " << setw(3) << right << "Невисокосный год" << endl;
			else cout << setw(4) << right << N << setw(2) << right << " - " << setw(3) << right << "Високосный год" << endl;


	else cout << setw(4) << right << N << setw(2) << right << " - " << setw(3) << right << "Невисокосный год" << endl;
	return N;
	

}
