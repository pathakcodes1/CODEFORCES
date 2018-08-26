#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int a[n][2];
    int count=1,max=1;

    for(int i=0 ;i<n;i++)
        {
            for(int j=0 ;j<2;j++)
            cin>>a[i][j];
            }

    for(int i=1 ;i<n;i++)
    {if(a[i][1]==a[i-1][1]&&a[i][0]==a[i-1][0])
        {
            count++;
        if(count>max){max=count;}
        }
        else{count=1;}
        }
cout <<max;
return 0;
}
