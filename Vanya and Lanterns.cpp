#include<bits/stdc++.h>
using namespace std;
int main(){
int n,l;
cin>>n>>l;
int array[n]={0},r,s;
for(int i=0;i<n;i++){
    cin>>array[i];
}
sort(array,array+n);
r=2*max(array[0],l-array[n-1]);
for(int i=0;i<n;i++){
    r=max(r,array[i+1]-array[i]);
}
cout<<r<<endl;
cout.precision(9);
cout<<fixed<<r/2.0<<endl;
return 0;
}
