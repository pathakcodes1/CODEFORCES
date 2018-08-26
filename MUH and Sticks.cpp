#include<bits/stdc++.h>
using namespace std;
int main()
{
    int array[6],has[10]={0},count=0,flag=0,flag1=0;
    for(int i=0;i<6;i++){
        cin>>array[i];
        has[array[i]]++;
    }
    for(int i=0;i<10;i++){
        if(has[i]>0)
            count++;
            if(has[i]==5)
                flag++;
            if(has[i]==4)
                flag1++;
    }
    if((count==2&&flag==0&&flag1>0)||count==1)
        cout<<"Elephant";
    else if((count==3&&flag1>0)||(count==2&&flag>0))
        cout<<"Bear";
        else cout<<"Alien";
        return 0;
}
