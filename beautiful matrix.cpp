#include<bits/stdc++.h>
using namespace std;
int main(){
int array[5][5],z,x,count;
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cin>>array[i][j];

    }
}
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(array[i][j]==1){
            cout<<abs(i-2)+abs(j-2);
        }
    }
}
return 0;
}
