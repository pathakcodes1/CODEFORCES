#include<bits/stdc++.h>
using namespace std;
int main(){
int array[4],count=0;
for(int i=0;i<4;i++){
    cin>>array[i];
}
for(int i=0;i<3;i++){
    for(int j=i+1;j<4;j++){
        if(array[i]==array[j])
            count++;
    }
}
if(count==6)
    cout<<"3";
else if(count==3)
    cout<<"2";
else
cout<<count;

return 0;
}
