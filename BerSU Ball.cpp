#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
        cin>>array[i];
        sort(array,array+n);
    int m;
    cin>>m;
    int a[m];
    for(int i=0;i<m;i++)
        cin>>a[i];
   sort(a,a+m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(array[i]-a[j]==0||abs(array[i]-a[j])==1)
                {count++;
                a[j]=-1;
                break;}

        }
    }
    cout<<count;
    return 0;
}
