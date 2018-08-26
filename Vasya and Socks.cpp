#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y,count=0,q;
	cin >> x>>y;
	count  = x;

	while (1){
		q = x / y;
		if (q == 0)
			break;
		count += q;
		x = q+(x%y);
	}

	cout << count << endl;

	return 0;

}
