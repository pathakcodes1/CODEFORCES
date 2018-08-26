#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,steps=0;
cin>>n>>m;
if(n==m)
    steps=n;
else if (n!=m)
    steps=min(n,m);
if(steps%2==0){
    cout<<"Malvika";
}
else{
    cout<<"Akshat";
}
return 0;
}
