#include<bits/stdc++.h>
using namespace std;
int main(){
    int a1,a2,a3,b1,b2,b3>>n;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
    int x,y;
    x=((a1+a2+a3)%5==0)?(a1+a2+a3)/5:(a1+a2+a3)/5+1;
     y=((b1+b2+b3)%10==0)?(b1+b2+b3)/10:(b1+b2+b3)/10+1;
     if(x+y>n)cout<<"NO";
     else cout<<"YES";
return 0;}
