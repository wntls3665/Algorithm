#include<iostream>
#include<vector>
using namespace std;

long long getGCD(long long a, long long b) // get GCD. Euclidean Algorithm
{
	long long temp = 0;

	if (a < b) //a has to be bigger.
	{
		temp = a;
		a = b;
		b = temp;
	}

	while (b != 0)
	{
		temp = a;
		a = b;
		b = temp%b;
	}

	return a;

}


long long getLCM(long long a, long long b, long long gcd)
{

	return (a*b) / gcd;

}


long long nlcm(vector<int> num)
{
	long long answer = 1;
	int size = num.size();

	long long gcd = getGCD(num[0], num[1]);
	long long lcm = getLCM(num[0], num[1],gcd);  // GCD and LCM of 1st,2nd digit.

	for (int i = 2; i < size; i++)  
	{
		gcd = getGCD(lcm,num[i]); 
		lcm = getLCM(lcm, num[i], gcd); //get LCM in regular order.

	}

	answer = lcm;

	return answer;
	
	
}

int main()
{
	vector<int> test{5,4,8};

	// 아래는 테스트로 출력해 보기 위한 코드입니다.
	cout << nlcm(test);
}
