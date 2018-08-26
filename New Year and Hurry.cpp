#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c,flag=0;
    cin>>n>>m;
    int l=240-m;
    int k=l/5;

    if (n*(n+1)<k*2)
    cout<<n;

else{
    for(int i=1;i<=n;i++)
        {if(i*(i+1)>k*2)
        {flag++;
        c=i-1;
        break;}
        else if(i*(i+1)==k*2)
            {c=i;
            flag++;
        break;}
         }}

if(flag>0)
    cout<<c;
    return 0;
}
