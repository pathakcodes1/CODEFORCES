#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int array[n],count=0;
for(int i=0;i<n;i++){
    cin>>array[i];
    if(5-array[i]-m>=0)
        count++;
}
cout<<count/3;
return 0;
}
