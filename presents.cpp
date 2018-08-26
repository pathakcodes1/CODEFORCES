#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int array[n],h[n]={0};
for(int i=1;i<=n;i++){
    cin>>array[i];

}
for(int i=1;i<=n;i++){
        h[array[i]]=i;

}
for(int i=1;i<=n;i++){
    cout<<h[i]<<" ";
}

return 0;
}
