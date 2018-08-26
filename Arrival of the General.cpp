#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a=0,b=0,count=0;
cin>>n;
int array[n];
for(int i=0;i<n;i++){
    cin>>array[i];
}
int max=array[0],min=array[0];
for(int i=1;i<n;i++){
    if(array[i]>max)
        {max=array[i];
        a=i;}
    if(array[i]<=min)
        {min=array[i];
        b=i;}
}
if(a>b)
    count=a-b+n-2;
else
    count=a-b+n-1;

    cout<<count;
    return 0;

}
