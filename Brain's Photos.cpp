#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int flag=0;
char array[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>array[i][j];
      if(array[i][j]=='C'||array[i][j]=='Y'||array[i][j]=='M')
      {flag++;
      break;}

    }
}
if(flag>0)
    cout<<"#Color";
else cout<<"#Black&White";
return 0;
}
