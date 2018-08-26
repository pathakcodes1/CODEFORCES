#include<bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin>>n;
  int a,b,array[n];
  for(int i=0;i<n;i++){
    cin>>a>>b;
    if(i==0)
      array[i] = b-a;
    else
      array[i]=array[i-1]-a+b;
  }
  int max = array[0];
  for(int j=1;j<n;j++){
    if(array[j]>max)
      max=array[j];
  }
  cout<<max<<endl;
  return 0;
}
