#include <iostream>
using namespace std;
int main()
{
	int n, h, sum1 = 0, sum2 = 0;
	cin >> n >> h;
	for (int i = 1; i <= n; i++)
	{
		int a;
		cin >> a;
		if (a > h)
		{
			a = 2;
			sum1 += a;

		}
		else
		{
			a = 1;
			sum2 += a;
		}
	}
	cout << sum1 + sum2 << endl;
}