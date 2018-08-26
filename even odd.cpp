#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
if(n%2==0){
    if(m<=n/2){
        cout<<1+2*(m-1);
    }
    else{
        cout<<2*(m-(n/2));
    }
}
else{
    if(m<(n/2)+1){
    cout<<1+2*(m-1);
    }
    else{
        cout<<2*(m-((n/2)+1));
    }
}
return 0;
}
