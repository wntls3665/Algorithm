#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int findLargestSquare(vector<vector<char>> board)
{
	int answer = 0;

	vector<vector<int>>square(board.size());

	for (int i = 0; i < square.size(); i++)
	{
		for (int j = 0; square.size(); j++)
		{
			cout<<square[i][j]<<" ";
		}
		cout << endl;
	}





	return answer;
}
int main()
{

	vector<vector<char>> board{
		{ 'X','O','O','O','X' },
		{ 'X','O','O','O','O' },
		{ 'X','X','O','O','O' },
		{ 'X','X','O','O','O' },
		{ 'X','X','X','X','X' } };

	//아래는 테스트 출력을 위한 코드입니다.
	cout << findLargestSquare(board);
}
