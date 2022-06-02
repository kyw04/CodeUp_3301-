#include <iostream>
using namespace std;

int main()
{
	int n, cnt;
	
	cin >> n;

	cnt = n / 50000;
	n %= 50000;
	cnt += n / 10000;
	n %= 10000;
	cnt += n / 5000;
	n %= 5000;
	cnt += n / 1000;
	n %= 1000;
	cnt += n / 500;
	n %= 500;
	cnt += n / 100;
	n %= 100;
	cnt += n / 50;
	n %= 50;
	cnt += n / 10;
	n %= 10;

	if (n)
		cout << -1;
	else
		cout << cnt;
	return 0;
}