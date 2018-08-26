#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(n==1&&arr[n-1]!=15)
        cout<<"-1";
  else if (n==1&&arr[n-1==15])
     cout<<"DOWN";
    else if(arr[n-1]!=15&&(arr[n-1]>arr[n-2]))
        cout<<"UP";
    else
        cout<<"DOWN";

    return 0;
}
