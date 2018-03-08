#include<vector>
#include<iostream>
using namespace std;
vector<int> gcdlcm(int a, int b)
{
	vector<int> answer;
	if (a<b)
	{
		int temp;
		temp = a;
		a = b;
		b = temp;
	}
	int origin_a = a;
	int origin_b = b;

	int gcd = 1;

	while (b != 0)
	{
		int temp = b;
		b = a%b;
		a = temp;
	}
	gcd = a;
	answer.push_back(gcd);

	int lcm = origin_a*origin_b / gcd;
	answer.push_back(lcm);

	return answer;
}

int main()
{
	int a = 3, b = 12;
	vector<int> testAnswer = gcdlcm(a, b);

	cout << testAnswer[0] << " " << testAnswer[1];
}