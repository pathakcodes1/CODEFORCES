#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,flag=0;
    cin>>n>>m;
    int a[m+1]={0},val,val1;
    int k=n*m;
    while(n--){
        cin>>val;
        for(int i=0;i<val;i++)
        {cin>>val1;
        a[val1]++;}
    }
    for(int i=1;i<=m;i++){
        if(a[i]==0)
            flag++;
    }
    if(flag==0)
        cout<<"YES";
    else cout<<"NO";
    return 0;
}
