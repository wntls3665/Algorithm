#include<iostream>
#include<vector>
using namespace std;

vector<vector<int> >productMatrix(vector<vector<int> >A, vector<vector<int> >B)
{
	int rowA = A.size();
	int columnA = A[0].size();
	int rowB = B.size();
	int columnB = B[0].size();

	vector<vector<int> >answer(rowA, vector<int>(columnB,0)); // size of Matrix

	int product = 0;

	for (int i = 0; i < rowA; i++) // triple for state O(abc)
	{
		for (int j = 0; j < columnB; j++)
		{
			product = 0;
			for (int k = 0; k < rowB; k++)
			{
				product += A[i][k] * B[k][j];
			}
			answer[i][j] = product;
		}
	}

	return answer;
}

int main()
{
	vector<vector<int> >A{ { 1,2 },{ 2,3 } };
	vector<vector<int> >B{ { 2,3 },{ 3,4 } };
	vector<vector<int> > testAnswer = productMatrix(A, B);

	for (int i = 0; i<testAnswer.size(); i++)
	{
		for (int j = 0; j<testAnswer[i].size(); j++)
			cout << testAnswer[i][j] << " ";
		cout << "\n";
	}
}