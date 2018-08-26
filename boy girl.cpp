#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int count=0,array[26]={0};
for(int i=0;i<s.length();i++){
    array[s[i]-'a']++;
}
for(int i=0;i<26;i++){
    if(array[i]>0){
        count++;
    }
    else
        continue;
}

if(count%2==0){
    cout<<"CHAT WITH HER!";
}
else{
    cout<<"IGNORE HIM!";
}
return 0;
}
