#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n,m,count=0;
cin>>n>>m;
for(int i=1;i<=n;i++){
 if(m%i==0&&m/i<=n)
    count++;

}
cout<<count;
return 0;
}
