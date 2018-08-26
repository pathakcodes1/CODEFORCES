#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int h[4]={0},a[n],ind1[n],x=0,c=0,v=0,ind2[n],ind3[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }for(int i=0;i<n;i++)
         h[a[i]]++;
    sort(h,h+4);
    cout<<h[1]<<endl;
    for(int i=0;i<n;i++){
        if(a[i]==1){ind1[x]=i+1;x++;}
        if(a[i]==2){ind2[c]=i+1;c++;}
        if(a[i]==3){ind3[v]=i+1;v++;}

    }
    for(int i=0;i<h[1];i++){
    cout<<ind1[i]<<" "<<ind2[i]<<" "<<ind3[i]<<endl;}
    return 0;
}
