#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
int count=0,flag=0;
cin>>s;
for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]){
            count++;
        if(count==6)
					{
						flag++;
						break;
					}}
					else
                        count=0;


}
if(flag==1)
    cout<<"YES";
else
    cout<<"NO";
return 0;
}
