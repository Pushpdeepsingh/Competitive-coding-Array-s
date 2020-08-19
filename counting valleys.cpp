#include<iostream>
using namespace std;
int main()
{
    long int n;
    cin >> n;
    char x[n];
    for (long int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    int c = 0;
    int f = 0;

    int s[n];

    if (x[0] == 'D')
    {
        c--;
        s[0] = c;
    }
    else if (x[0] == 'U')
    {
        c++;
        s[0] = c;
    }


    for (long int i = 1; i < n; i++)
    {
        if (x[i] == 'D')
        {
            c--;
            s[i] = c;
        }
        if (x[i] == 'U')
        {
            c++;
            s[i] =c;
        }
       
    }
    
    int count = 0;
    
        for (int i = 0; i < n; i++)
        {
            if (s[i + 1] == 0 && s[i] == -1)
            {
                count++;
            }
         }
        cout << count;
}

