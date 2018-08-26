#include<bits/stdc++.h>
using namespace std;
    int main(){
   int n;
   cin >> n;
   int flag=1,arr[1000000],b,x,i,j,val;

   for (i=1; i<=n; i++) {
       cin >> x;
       for (j=flag; j<=x+flag; j++) {
        arr[j]=i;
       }
       flag += x;
   }
   cin >> b;
  while(b--){
       cin >> val;
       cout << arr[val] << endl;
   }
return 0;
}
