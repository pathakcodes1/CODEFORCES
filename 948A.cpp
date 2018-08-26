#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,flag=0;
    cin>>n>>m;
    char a[n+2][m+2];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];

        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
                if(a[i][j]=='S'&&(a[i][j+1]=='W'||a[i][j-1]=='W'||a[i+1][j]=='W'||a[i-1][j]=='W'))
                {flag++;break;}
        }
        }

        if(flag>0)
            cout<<"NO";
        else {
                cout<<"YES"<<endl;
            for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]=='.')
                cout<<'D';

            else cout<<a[i][j];
        }
        cout<<endl;
    }
        }
        return 0;}
