#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n],count=0,max,min,value;
cin>>value;
max=value;
min=value;
n-=1;
while(n--){
    cin>>value;
    if(value>max)
    {
        count++;
        max=value;
    }
    else if(value<min){
        count++;
        min=value;
    }
}
cout<<count;
return 0;
}
