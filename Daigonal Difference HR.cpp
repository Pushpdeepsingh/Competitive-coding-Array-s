
#include <iostream>
using namespace std;
int main()
{
    int n;
    //cout << "enter the size of the array" << endl;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
        
    }
    
{
    int x =0,y = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                x = x + arr[i][j];
            }
            if (i + j == (n - 1))
            {
                y = y + arr[i][j];
            }
        }
    }
    if ((x - y) >= 0)
    {
        cout << x - y;
    }
    else
    {
        cout << y - x;
    }

}}
