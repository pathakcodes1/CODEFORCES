#include<bits/stdc++.h>
using namespace std;
int main(){
int n,sum=0;
cin>>n;
int array[n];
for(int i=0;i<n;i++){
    cin>>array[i];
    sum+=array[i];
}
int count=0;
sort(array, array+n, greater<int>());
for(int i=0;i<n;i++){
count+=array[i];
if(count>sum/2){
    cout<<i+1;
    break;
}
}
return 0;
}
