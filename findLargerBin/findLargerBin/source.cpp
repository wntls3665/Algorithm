#include<iostream>
using namespace std;

int findNext(int num, int count)
{
	int numofOne = 0;
	int n = num;
	int origin = num;

	while (count != numofOne)
	{
		origin++;
		numofOne = 0;
		n = origin;

		for (long long i = 1; n > 0; i *= 10)
		{
			int bin = n % 2;
			if (bin == 1)
				numofOne++;
			n = n / 2;

		}


	}

	return origin;

}

int nextBigNumber(int n)
{
	int answer = 0;
	int origin = n;
	
	int numofOne = 0;

	for (long long i = 1; n > 0; i *= 10)
	{
		int bin = n % 2;
		if (bin == 1)
			numofOne++;
		n = n / 2;
	}
	answer=findNext(origin, numofOne);

	return answer;
}
int main()
{
	int n = 1011;

	//아래는 테스트 출력을 위한 코드입니다.
	cout << nextBigNumber(n);
}
