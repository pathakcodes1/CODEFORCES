#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,d;
cin>>a>>b>>c>>d;
int min1,min2,count=0;
min1=min(a,c);
min1=min(min1,d);
count+=256*min1;
if(a-min1>0){
    min2=min(a-min1,b);
    count+=min2*32;
}
cout<<count;
return 0;
}
