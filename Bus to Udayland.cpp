#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s[1001];
    int t=0;
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {cin>>s[i];
    if(!t)
    if(s[i][0]=='O'&&s[i][1]=='O')
    {cout<<"YES"<<endl;
    s[i][0]='+'; s[i][1]='+';t=1;}
    if(!t)
    if(s[i][3]=='O'&&s[i][4]=='O')
    {cout<<"YES"<<endl;
    s[i][3]='+'; s[i][4]='+';t=1;}
    }
    if(t)
    for(i=1;i<=n;i++)
    cout<<s[i]<<endl;
    else cout<<"NO";

    return 0;
}
