#include<bits/stdc++.h>
using namespace std;
int main()
{  int flag=0;
   string s;
   cin>>s;
   for (int i = 0; i < s.length(); i++){
	    if(i==0){
	        if(s[i]>'4' && s[i]!='9')
	        s[i]='9'-(s[i]-48);
	        else s[i]=s[i];
	    }
	    else
	        if(s[i]>'4')
	        s[i]='9'-(s[i]-48);

	}
       cout<<s;
    return 0;
}
