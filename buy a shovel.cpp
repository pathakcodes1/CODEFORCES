#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int flag=0,a;
for(int i=1;i<10;i++){
    if((n*i)%10==m||(n*i)%10==0){
        flag++;
        a=i;
        break;
    }
}
if(flag>0)
    cout<<a;
    else cout<<"10";
return 0;
}
