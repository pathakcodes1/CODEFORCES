#include<bits/stdc++.h>
using namespace std;
int main(){
int n,count=0;
cin>>n;
int array[n];
for(int i=0;i<n;i++){
    cin>>array[i];
}
sort(array,array+n,greater<int>());
for(int i=1;i<n;i++){
    count+=(array[0]-array[i]);
}
cout<<count;
return 0;
}
