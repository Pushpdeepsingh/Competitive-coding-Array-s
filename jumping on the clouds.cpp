#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int c[n];
    for(int i=0;i<n;i++)
    {
cin>>c[i];
    }

    int i=0;int jump=0;
    do{
        if(c[i+2]==0)
        {
            jump=jump+1;
            i=i+2;
        }
        else 
        {
            jump=jump+1;
            i++;
        }
    }
    while(i!=n-1);
    cout<<jump;
}
