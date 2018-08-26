#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int max=1,max1,pos=0,flag=0,z;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U'||s[i]=='Y')
            {max1=i+1-pos;
            z=i+1;
             pos=i+1;
             flag++;}
             if(max1>max)
                max=max1;

    }if(flag>0){
        z=s.length()-z+1;
        if(max>z)
            cout<<max;
        else cout<<z;
    }

    else cout<<s.length()+1;
    return 0;
}
