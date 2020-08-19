// reversing a number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream>
using namespace std;
int reverse(int k);
int main()
{
	cout << "enter";
	int n;
	cin>> n;
	int x = reverse(n);
	cout << x;
}
int reverse(int k)
{
	int  y = 0;
	while (k > 0)
	{
		y = y * 10 + k % 10;
		k = k / 10;
	}
	return y;

}
// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
