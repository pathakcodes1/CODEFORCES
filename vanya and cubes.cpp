#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int sum=0,i=0,s=0;
while(sum<=n){
    i++;
    s+=i;
    sum+=s;
}
cout<<i-1;
return 0;
}
