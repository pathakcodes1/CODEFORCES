#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,d=0,e=0;
cin>>a>>b>>c;
d=a+b+c;
if(a==b&&b==c)
    e=(3*a);
else{
if(a>b&&a>c)
    e=(2*(b+c));
else if(b>a&&b>c)
    e=(2*(c+a));
else if(c>b&&c>a)
    e=(2*(a+b));
}
if(e>d)
    cout<<d;
    else cout<<e;
return 0;
}
