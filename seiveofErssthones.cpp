/*
coded by - PATHAKCODES
AIT PUNE , INDIA 

"The Key is not will to win ......everybody has that "
"It is will to prepare that is important"


*/


#include <bits/stdc++.h>

using namespace std ;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define pb push_back
const ll n  = 1000000 ;




int main ()
{
	IOS
	#ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
    #endif

ll prime[n+1] ;
 for(int i = 0 ; i <= n;i++)
 {
 	prime[i] = 1 ;

 }

 prime[0] = 0 ;
 prime[1] = 0 ;

for(int j = 2 ; j<= sqrt(n) ; j++)
{
	if(prime[j] == 1)
	{
		for(int i = 2 ; i*j < n ; i++)
			prime[i*j] = 0 ;
	}
}


for (int i = 0; i < 22; ++i)
{
	cout << i << " " << prime[i] << endl ;
}

}