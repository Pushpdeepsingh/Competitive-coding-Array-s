// peak element problem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "enter the size of the array" << endl;
	int n;
	cin >> n;
	int arr[10];
	cout << "enter the elements" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 1; i < n-1; i++)
	{
		if (arr[i - 1]<arr[i] && arr[i]>arr[i + 2])
		{
			cout << arr[i];
		}
	}
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
