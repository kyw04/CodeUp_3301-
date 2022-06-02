#include <iostream>
#define N 8
using namespace std;

int main()
{
	int money[N] = { 50000, 10000, 5000, 1000, 500, 100, 50, 10 };
	int n, cnt = 0;

	cin >> n;

	for (int i = 0; i < N; i++)
	{
		cnt += n / money[i];
		n %= money[i];
	}

	cout << cnt;
	return 0;
}

//int main()
//{
//	int n, cnt;
//	
//	cin >> n;
//
//	cnt = n / 50000;
//	n %= 50000;
//	cnt += n / 10000;
//	n %= 10000;
//	cnt += n / 5000;
//	n %= 5000;
//	cnt += n / 1000;
//	n %= 1000;
//	cnt += n / 500;
//	n %= 500;
//	cnt += n / 100;
//	n %= 100;
//	cnt += n / 50;
//	n %= 50;
//	cnt += n / 10;
//	n %= 10;
//
//	if (n)
//		cout << -1;
//	else
//		cout << cnt;
//	return 0;
//}