#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int c=0,c1=0,b,a;
while(n--){
    cin>>a>>b;
    if(a>b)
        c++;
    else if(a<b)
        c1++;
}
if(c>c1) cout<<"Mishka";
else if(c1>c) cout<<"Chris";
else if (c==c1) cout<<"Friendship is magic!^^";
return 0;
}
