#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, value,flag=0;
	cin>>n;
	int h[n]={0};
	int p;
	cin>>p;
	while(p--)
	{
		cin>>value;
		h[value-1]++;
	}
	int q;
	cin>>q;
	while(q--)
	{
		cin>>value;
		h[value-1]++;
	}
	for(int i=0;i<n;i++)
	{
		if(h[i]==0)
		flag++;
	}
	if(flag==0)
    cout<<"I become the guy.";
else cout<<"Oh, my keyboard!";
return 0;
}
