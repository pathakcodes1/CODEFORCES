#include<bits/stdc++.h>
using namespace std;
int main(){
int n,count=0;
cin>>n;
while(n>0){
    if(n%2!=0){
        count++;
        n--;
    }
    else
        n/=2;
}
cout<<count;
return 0;
}
