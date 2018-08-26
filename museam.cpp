#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int sum=0,prev=97,curr,a,b;
    for(int i=0;i<s.length();i++)
    {
        curr=s[i];
        a=abs(prev-curr);
        b=26-a;

        sum+=min(a,b);

        prev=curr;
    }
    cout<<sum;
    return 0;
}
