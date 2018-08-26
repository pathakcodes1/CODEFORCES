#include<bits/stdc++.h>
using namespace std;
int main(){
int n,c1=0,c2=0,c3=0;
cin>>n;
int array[n][3];
for(int i=0;i<n;i++){
for(int j=0;j<3;j++){
    cin>>array[i][j];

}
  c1+=array[i][0];
  c2+=array[i][1];
  c3+=array[i][2];
}
if(c1==0&&c2==0&&c3==0){
    cout<<"YES";
}
else cout<<"NO";
return 0;}
