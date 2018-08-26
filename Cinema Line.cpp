#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,val,a=0,b=0,c=0,flag=0;
    cin>>n;
    while(n--){
        cin>>val;
       if(val==25){
        a++;
       }
       else if(val==50){
        b++;
        a--;
       }
       else if(val==100){
        if(b>0){
            b--;
            a--;
        }
        else
            a-=3;
       }
       if(a<0||b<0)
flag++;
       }
if(flag>0) cout<<"NO";
   else cout<<"YES";

    return 0;
}
