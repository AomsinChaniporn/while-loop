#include<iostream>
using namespace std;
int main() 
{
	int round;
	int Num;
	cout << "Display square of number 1 to 10.\n";
	cout << "=================================\n";
	cout << "\tX\tX^2\n";
	cout << "=================================\n";
	cout << "Input round : ";
	cin >> round;
	cout << "Input start number : ";
	cin >> Num;
	int X = 1;
	int Sum = 0;
	while (X <= round)
	{
	cout << "\t" << Num << "\t" << Num*Num << endl;
	Sum = Sum + (Num*Num);
	X++;
	Num++;
	}
	cout << "Sum = " << Sum << endl;
	return(0);
}