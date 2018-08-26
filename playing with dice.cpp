#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
int x,y,z;
if(b>a){
if((b-a)%2==1)
    y=0;
else y=1;
x=a+(b-a-1)/2;
z=6-b+(b-a-1)/2+1;}
else if(a>b) {
    if((a-b)%2==1)
    y=0;
else y=1;
z=b+(a-b-1)/2;
x=6-a+(a-b-1)/2+1;}
else
{x=0;y=6;z=0;}

cout<<x<<" "<<y<<" "<<z;
return 0;}
