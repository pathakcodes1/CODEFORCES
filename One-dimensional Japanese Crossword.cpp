#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0,j=0;
    cin>>n;
    char curr,prev;
    int array[n],i=0;
    cin>>prev;
    if(prev=='B')
        flag++;
    n-=1;
    int count=0,c=0;
    while(n--)
    {
        cin>>curr;

         if(curr==prev){{count++;}
         if(count==n+1)
            cout<<count;
         }
            else if(curr!=prev)
            {c++;
            if(count>0&&prev=='B')
            {array[i]=count;i++;j++;}
            count=1;}
        prev=curr;
    }
   if(flag==0)
    cout<<c/2<<endl;
    else cout<<(c/2)+1<<endl;
   for(int i=0;i<j;i++)
    cout<<array[i]<<" ";
    return 0;
}
