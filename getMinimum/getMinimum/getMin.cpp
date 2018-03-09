#include<iostream>

#include<vector>
using namespace std;

int getMinSum(vector<int> A, vector<int> B)
{
	int answer = 0;
	int size = A.size();

	for (int i = 0; i < size-1; i++) //sort vector A by ascending order
	{
		for (int j = i+1; j < size; j++)
		{
			if (A[i] > A[j])
			{
				int temp;
				temp = A[j];
				A[j] = A[i];
				A[i] = temp;

			}
			if (B[i] < B[j])
			{
				int temp;
				temp =B[j];
				B[j] = B[i];
				B[i] = temp;

			}

		}
	}

	for (int i = 0; i < size; i++)
	{
		answer = answer + A[i]*B[i];
	}


	return answer;
}
int main()
{
	vector<int> tA{ 7660,126, 387, 4452, 8847, 6481, 8605, 4292, 8843, 1055}, tB{ 6812, 9507, 4740, 564, 457, 1585, 4382, 3962, 3711, 2048};

	//아래는 테스트 출력을 위한 코드입니다.
	cout << getMinSum(tA, tB);
}