#include <iostream>
#include <math.h>
using namespace std;
static long long k;
int main() {
	int t;

	cin >> t;

	while (t--)
	{
		int m;
		long long ip8 = 0;
		long long a[8][8] = { 0,0 };
		long long z[8] = { 0 };
		long long sum = 0;
		long long sum2 = 0;

		cin >> m;
		if (m == 1) {

			scanf_s("%d.%d.%d.%d.%d.%d.%d.%d", &z[0], &z[1], &z[2], &z[3], &z[4], &z[5], &z[6], &z[7]);
			cout << z[0] << " " << z[1] << " " << z[2] << " " << z[3] << " " << z[4] << " " << z[5]<< " " << z[6] << " " << z[7]<<endl;
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					//int k = pow(2, 7 - j);
					a[i][j] = z[i] % 2;
					z[i] = z[i] / 2;
					

				}


			}

			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					cout << a[i][j] << " ";
				}
				cout << endl;
			}
			sum = 0;

			for (int i = 7; i >= 0; i--)
				for (int j = 0; j< 8; j++)
				{
					{
						long long k= a[i][j] * pow(2.0, j + ((7 - i) * 8));
						sum += k;

					}
				}
			


			cout << sum << endl;

		}
		else {
			cin >> ip8;

			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					a[i][j] = ip8 % 2;
					ip8 = ip8 / 2;
				}

			}
			for (int i = 7; i >= 0; i--)
			{
				sum = 0;
				for (int j = 0; j < 8; j++)
				{

					double jj = 0;
					jj = (double)j;
					sum += a[i][j] * pow(2.0, j);

				}
				cout << sum;
				if (i != 0)
					cout << ".";


			}
			cout << endl;
		}


	}
	cin >> t;

	return 0;

}
