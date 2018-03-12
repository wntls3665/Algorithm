#include<iostream>
using namespace std;


long long decToBin(long long dec)
{
	long long result=0;

	for (long long i = 1; dec > 0; i *= 10)
	{
		int bin = dec % 2;
		result = result + bin*i;
		dec = dec / 2;
	}

	return result;

}

long long binToDec(long long bin)
{
	int result = 0;

	for (int i = 0; bin > 0; i++)
	{
		result = result + (bin%10*pow(2, i));
		bin = bin / 10;

	}

	return result;

}



int main()
{
	int menu = 1;
	long long input=0;

	cout << "1. Decimal to binary" << endl;
	cout << "2. Binary to decimal" << endl;
	cout << "0. exit" << endl;

	while (cin>>menu && menu)
	{

		if (menu == 1)
		{
			cout << "input Decimal number  :  ";
			cin >> input;
			cout << endl << input << "  =  " << decToBin(input) << endl;
		}
	
		if (menu == 2)
		{
			cout << "input Binary number  :  ";
			cin >> input;
			cout << endl << input << "  =  " << binToDec(input) << endl;
		}
		
		cout << "1. Decimal to binary" << endl;
		cout << "2. Binary to decimal" << endl;
		cout << "0. exit" << endl;
		
	}

	return 0;

}