#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],h[1001]={0},max=0,count=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        h[a[i]]++;
    }
    for(int i=0;i<1001;i++){
        if(h[i]>0)
        {count++;
        if(h[i]>max)
            max=h[i];
        }
    }
    cout<<max<<" "<<count;
    return 0;
}
