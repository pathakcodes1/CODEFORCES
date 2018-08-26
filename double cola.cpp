#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
string s[]={"Sheldon", "Leonard", "Penny", "Rajesh","Howard"};
n-=1;
while(n>=5){
    n-=5;
    n/=2;
}
cout<<s[n];
return 0;
}
