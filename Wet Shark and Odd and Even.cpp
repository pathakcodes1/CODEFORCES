#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sum=0,min=1000000000,num;
    cin>>n;
    while(n--){
        cin>>num;
        sum+=num;
        if(num%2!=0){
            if(num<min)
                min=num;
        }
    }
    if(sum%2==0)
        cout<<sum;
    else cout<<sum-min;
    return 0;

}
