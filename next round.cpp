 #include<bits/stdc++.h>
 using namespace std;
 int main(){
 int n,m,count=0;
 cin>>n>>m;
 int array[n];
 for(int i=0;i<n;i++){

    cin>>array[i];
 }
 for(int i=0;i<n;i++){
    if(array[i]>=array[m-1]&&array[i]>0)
        count++;
 }
 cout<<count<<endl;
 return 0;
 }
