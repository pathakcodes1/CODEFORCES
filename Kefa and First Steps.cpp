#include<bits/stdc++.h>
using namespace std;
int main(){
int n,curr,prev,max=1,count=1;
cin>>n;
cin>>prev;
n-=1;
while(n--){
  cin>>curr;
  if(curr>=prev){
    count++;
    prev=curr;
  }
  else{
    count=1;
    prev=curr;
  }
  if(count>max){
    max=count;

  }
}
cout<<max;
return 0;
}
