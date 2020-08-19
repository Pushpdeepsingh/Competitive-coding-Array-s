
#include <bits/stdc++.h>
#include<math.h>
#include<string.h>
using namespace std;

// Complete the encryption function below.
void encryption(string s) 
{
   int size= s.length();
  //cout<<size<<endl;   //
float a=sqrt(size);
//cout<<a;               //

int r=0;
int c=0;

    if((r*c)<8)
    {
        r=c=ceil(a);
    }
    else
    {
        r=floor(a);
c=ceil(a);
    }

//cout<<"the rows"<<r<<endl;
//cout<<"the column is as"<<c<<endl;

char x[r][c];
int k=0;
int n=size;
// function
for(int j=0;j<r;j++)
{
for(int i=0;i<c;i++)
{
if(k<=n)
{
    x[j][i] = s[k++];
}
else
{
 x[j][i]='\0';
}
}
}
// display
//cout<<"display"<<endl;
for(int i=0;i<c;i++)
{
    for(int j=0;j<r;j++)
    {

           if (x[j][i] == '\0')
            {
                break;
            }
            else
            {
                cout << x[j][i];
            }
        
    }
    cout<<" ";
}

}

int main()
{
    string s;
    getline(cin, s);
    encryption(s);
    return 0;
}
