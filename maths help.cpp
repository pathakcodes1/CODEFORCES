#include<bits/stdc++.h>
 using namespace std;
 int main(){
 string s;
 cin>>s;
 int z=0,x=0,c=0;
 for(int i=0;i<s.length();i+=2){
    if(s[i]=='1')
        z++;
    if(s[i]=='2')
        x++;
    if(s[i]=='3')
        c++;
 }if(z!=0){
 cout<<"1";}
 else if (z==0&&x!=0){
    cout<<"2";
 }
 else if(z==0&&x==0&&c!=0){
    cout<<"3";
 }
 for(int i=2;i<2*z;i+=2){

    cout<<"+1";
 }
 for(int i=0;i<2*x;i+=2){
    cout<<"+2";
 }
 for(int i=0;i<2*c;i+=2){
    cout<<"+3";
 }
 return 0;
 }
