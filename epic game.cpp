#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,c,d,f=0;
    cin>>a>>b>>n;
    while(1){
            if(f%2==0){
        c=__gcd(a,n);
        if(c>n)
            {cout<<"1";            break;}
        else
            n-=c;}
        else{
        d=__gcd(b,n);
        if(d>n)
            {cout<<"0";
            break;}
        else
        n-=d;
    }
    f++;
    }
    return 0;
}
