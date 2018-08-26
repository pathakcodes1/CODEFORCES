#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int count=0,sum=0;

for(int i=1;i<=n;i++){
    sum+=i;
    count+=((n-i)*(i-1));
}
cout<<sum+count;
return 0;
}
