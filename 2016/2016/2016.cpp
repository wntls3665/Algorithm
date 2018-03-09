#include<iostream>
#include<string>
using namespace std;

string getDayName(int a, int b)
{
	string answer = "";
	int monthDates[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	string day[7] = { "FRI","SAT","SUN","MON","TUE","WED","THU" };

	int days = 0;
	int mod = 0;

	for (int i = 0; i<a-1; i++)
	{
		days += monthDates[i];
	}
	days = days + b-1;
	mod = days % 7;
	answer = day[mod];

	return answer;
}
int main()
{
	int a = 5, b = 24;

	//아래는 테스트 출력을 위한 코드입니다.
	cout << getDayName(a, b);
}
