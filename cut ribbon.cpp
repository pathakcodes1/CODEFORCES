#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int a[3];
    for(int i=0;i<3;i++)
        cin>>a[i];
    sort(a,a+3);
    while(n>a[1]){
        n-=a[0];
        count++;
    }
    cout<<count+1;
    return 0;
}
