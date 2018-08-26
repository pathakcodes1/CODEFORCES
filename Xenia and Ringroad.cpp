#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,prev=1,curr;
long long count=0;
cin>>n>>m;
while(m--){
    cin>>curr;
    if(curr>=prev)
        {count=count+curr-prev;}
        else if(curr<prev)
            {count=count+n-(prev-curr);
            }
        prev=curr;
}
cout<<count;
return 0;
}
