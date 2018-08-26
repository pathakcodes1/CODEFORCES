#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int array[m];
for(int i=0;i<m;i++){
    cin>>array[i];
}
sort(array,array+m,greater<int>());
int array1[m-n]={0};
for(int i=0,j=n-1;i<m-n+1,j<m;i++,j++){
    array1[i]=array[i]-array[j];
   cout<<array1[i];
}
int min=array1[0];
for(int i=0;i<m-n+1;i++){
    if(array1[i]<min)
    min=array1[i];
}
cout<<min;
return 0;
}
