// modified kapnekar numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//In the future, to open this project again, go to File > Open > Project and select the .sln file
#include <bits/stdc++.h>
#include<iostream>
#include<math>
using namespace std;

// Complete the kaprekarNumbers function below.
void kaprekarNumbers(int p, int q)
{
	for (int num = p; num <= q; num++)
	{
		int sqr = num * num;
		int count = 0;
		while (sqr)
		{
			count++;
			sqr = sqr / 10;
		}
		sq = num * num;
		int r = count - (count / 2);
		int x = sq(10, r);
		int sum = (sqr / x) + (sqr % x);
		int c = 0;
		if (sum == sqr)
		{
			c++;
			cout << num << " ";
		}

	}
	if (c == 0)
	{
		cout << "INVALID RANGE";
	}

}

int main()
{
	int p;
	cin >> p;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	int q;
	cin >> q;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	kaprekarNumbers(p, q);

	return 0;
}
