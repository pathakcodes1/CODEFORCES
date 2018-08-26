#include<bits/stdc++.h>
using namespace std;
int main(){
long int n,x=1,y=1,z=1,i;
cin>>n;
int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    z=a[n-1]-a[0];
    cout<<z<<" ";
    for(i=1;i<n-1;i++)
    {
        if(a[i]==a[0])
            x++;
        if(a[i]==a[n-1])
            y++;
    }
    if(a[0]==a[n-1])
        return cout<<(n*(n-1))/2 , 0;
    cout<<x*y;
    return 0;
}
