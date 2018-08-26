#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
if(n%4==0){
    cout<<n/2<<" "<<n/2;
}
else if(n%2!=0) {
    cout<<9<<" "<<n-9;
}
else if(n%4!=0&&n%2==0){
    cout<<6<<" "<<n-6;
}
return 0;
}
