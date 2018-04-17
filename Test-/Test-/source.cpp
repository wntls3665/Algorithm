#include<vector>
#include<iostream>
using namespace std;

vector<int> bestSet(int no, int sum)
{
	vector<int> answer;

	int a = sum / no;

	while (no!=0)
	{
		sum -= a;
		answer.push_back(a);
		no--;
	}

	int size = answer.size();
	cout << sum<<" "<<size << endl;
	int i = 1;
	
	while (sum != 0)
	{
		answer[size-i] += 1;
		sum--;
		i++;
	}

	return answer;
}
int main()
{
	int n = 20, s = 43;
	vector<int> test = bestSet(n, s);

	// 아래는 테스트로 출력해 보기 위한 코드입니다.
	for (int i = 0; i<test.size(); i++)
		cout << test[i] << " ";

	return 0;
}
