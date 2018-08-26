#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,c1=0,c2=0,c3=0,c4=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a;
		if(a==1){
			c1++;
		}
		if(a==2){
			c2++;
		}
		if(a==3){
			c3++;
		}
		if(a==4){
			c4++;
		}
    }
    int count=0;
    count+=c4;
    c4=0;
    count+=c3;
    c1-=c3;
    c1=max(c1,0);
    count+=c2/2;
    c2%=2;
    count+=c1/4;
    c1%=4;
    if(c2==1){
    	count++;
    	c1-=2;
    	c2=0;
	}
	if(c1>0){
		count++;
	}
	cout<<count;
	return 0;
}
