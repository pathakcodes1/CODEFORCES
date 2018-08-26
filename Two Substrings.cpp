#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int flag=0,flag1=0,flag2=0,flag3=0;
for(int i=0;i<s.length();i++)
{
    if(s[i]=='A'&&s[i+1]=='B')
        flag++;

    else if(s[i]=='B'&&s[i+1]=='A')
        flag1++;
    if(s[i]=='A'&&s[i+1]=='B'&&s[i+2]=='A')
        flag2++;

    else if(s[i]=='B'&&s[i+1]=='A'&&s[i+2]=='B')
      flag3++;
}
if((flag>0&&flag1>0&&flag2==0&&flag3==0)||flag2>1||flag3>1||flag2==1&&flag3==0&&(flag>1||flag1>1)||flag3==1&&flag2==0&&(flag>1||flag1>1)||flag2==1&&flag3==1&&(flag>=2&&flag1>=2||flag>2||flag1>2))
    cout<<"YES";
else cout<<"NO";

return 0;}
