#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=1;i<10;i++){
        if(a*pow(3,i)>b*pow(2,i))
            {cout<<i;
        break;}
    }return 0;
}
