#include<iostream>
using namespace std;
int main()
{
    int s=0,t=0,a=0,b=0,k=0,m,n;
    
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    int apple[m],orange[n];
    int count1=0,count2=0;
    for(int i=0;i<m;i++)
    {
        cin>>apple[i];
        k=a+apple[i];
        if(k>=s && k<=t)
        {
            count1++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cin>>orange[i];
        k=b+orange[i];
        if(k>=s && k<=t)
        {
            count2++;
        }
    }
    cout<<count1<<endl<<count2;
    return 0;
}
