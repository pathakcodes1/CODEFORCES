#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
float sum=0;
cin>>n;
int array[n];
for(int i=0;i<n;i++){
    cin>>array[i];
    sum+=array[i];
}cout.precision(12);
cout<<fixed<<sum/n;
return 0;
}
