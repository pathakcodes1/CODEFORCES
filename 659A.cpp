#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,d;
cin>>a>>b>>c;
d=(b+c)%a;
if(b==1&&c==-1) cout<<a;
else{ if(d==0)
    cout<<a;
    else{
        if(c>0)
            cout<<d;
        else if(c<0) cout<<((c+b-1)%a+a)%a+1;
        else cout<<b;

    }
}
return 0;
}
