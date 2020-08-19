#include<iostream>
#include<math.h>
using namespace std;
int func(int aa,int bb);
int main ()
{
    int q;
    cin>>q;
    int a,b;
    for(int i=0;i<q;i++)
    {
        cin>>a>>b;
     int v=func(a,b);
     cout<<v<<endl;
    }
}
    int func(int aa,int bb)
    {
    int c=0;
    for(long int i=0;i<10000000;i++)
    {
        if(((i*i)>=aa)&&((i*i)<=bb))
        {
         c++;
        }
    }
    return c;
    }


