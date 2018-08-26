#include<bits/stdc++.h>
using namespace std;
int main(){
int n=64,count=0,count1=0;
char c;
while(n--){
    cin>>c;
    switch(c){
    case 'Q':count+=9;break;
    case 'R':count+=5;break;
    case 'B':count+=3;break;
    case 'N':count+=3;break;
    case 'P':count+=1;break;
    case 'q':count1+=9;break;
    case 'r':count1+=5;break;
    case 'b':count1+=3;break;
    case 'n':count1+=3;break;
    case 'p':count1+=1;break;
    }
}
if(count>count1)
    cout<<"White";
else if(count<count1)
    cout<<"Black";
else
    cout<<"Draw";
return 0;
}
