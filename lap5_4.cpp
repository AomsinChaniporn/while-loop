#include<iostream>
#include<string>
using namespace std;
int main() 
{
	char Ch = ' ';
	int Count = 0;
	string Str;
	int lower = 0;
	int upper = 0;
	int numeric = 0;
	int special = 0;
	cout << "Enter String : ";
	while (cin >> Ch) 
	{
		if(Ch == '.')break;
		else if (Ch >= 'a' && Ch >= 'z')lower++;
		else if (Ch >= 'A' && Ch >= 'Z')upper++;
		else if (Ch >= '0' && Ch >= '9')numeric++;
		else special++;
		Count++;
		Str += Ch;
	}
	cout << "Your message have " << lower << " lower character " << endl;
	cout << "Your message have " << upper << " upper character " << endl;
	cout << "Your message have " << numeric << " numeric character " << endl;
	cout << "Your message have " << special << " speacial character " << endl;
	return(0);
}