#include<bits/stdc++.h>
using namespace std;
int main(){
int n,count=0;
cin>>n;
for(int j=0;j<n;j++){
    int array[3],sum=0;
    for(int i=0;i<3;i++){
        cin>>array[i];
       sum+=array[i];

    }
if(sum>1)
    count++;

}
cout<<count;
return 0;
}
