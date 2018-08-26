#include<bits/stdc++.h>
using namespace std;
int main(){
int d,e,f,a,b,c;
cin>>d>>e>>f;
a=abs(d);
b=abs(e);
c=abs(f);
if(a+b>c)
    cout<<"NO";
else if((c-(a+b))%2==0)
    cout<<"YES";
else cout<<"NO";
return 0;
}
