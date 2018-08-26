#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int array[n],index=0,count=0;
for(int i=0;i<n;i++){
    cin>>array[i];

}for(int i=0;i<3;i++){
if(array[i]%2==0)
    count++;

}
if(count>1){
      for(int i=0;i<n;i++){
        if(array[i]%2!=0)
            index=i+1;

      }
}
else{
          for(int i=0;i<n;i++){
        if(array[i]%2==0)
            index=i+1;
}}
cout<<index;
return 0;
}
