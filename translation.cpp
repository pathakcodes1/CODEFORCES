#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	string s2;
	cin>>s2;
	reverse(s.begin(),s.end());
	if(s==s2)
	cout<<"YES";
	else cout<<"NO";
	return 0;
}
