// standard deviation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<math.h>
using namespace std;

int main()
{
	cout << "enter the number of the elements" << endl;
	int n;
	cin >> n;
	float x[25];
	cout << "ENTER YOUR" <<n<<" NUMBERS" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << i + 1<<":";
		cin >> x[i];
	}
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + x[i];
	}
	float mean = sum / n;
	cout << "MEAN IS AS FOLLOWS" << mean << endl;
	//(x-xi)
	float y[25];
	for (int i = 0; i < n; i++)
	{
		y[i] = x[i] - mean;
	}
	cout << "(x-xi) TABLE IS AS FOLLOWS" << endl;
	for(int i=0;i<n;i++)
	{
		cout << i+1<<"::" << y[i] << endl;
	}

	//(x-xi) square
	float z[25];
	cout << "(xi-x) square table is as follows:" << endl;
	for (int i = 0; i < n; i++)
	{
		z[i] = (y[i] * y[i]);
		cout << i + 1 << "::" << z[i] << endl;
	}
	float sum2 = 0;
	for (int i = 0; i < n; i++)
	{
		sum2 = sum2 + z[i];
	}
	cout << "(xi-x) square table sum of squares is as follows:" << endl;
	cout << sum2;
	cout << endl;
	float var, SD;
	var = sum2 / n;
	cout << "VARIANCE IS AS FOLLOWS" << var << endl;
	cout << " standard deviation is asfolows" << sqrt(var);


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
