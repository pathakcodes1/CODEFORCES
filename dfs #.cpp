#include<bits/stdc++.h>
using namespace std;
const int N=1<<10;
long long int visit[N][N];
long long int flag,n,m,sx,sy,tx,ty;
char a[1000][1000];
void dfs(int x,int y){

    if(x<0||x>n-1||y<0||y>n-1||a[x][y]=='#'||visit[x][y]==1)
        return;
    visit[x][y]=1;
    if(x==tx&&y==ty)
    {
        flag=1;
        return;
    }
    dfs(x+1,y);
    dfs(x-1,y);
    dfs(x,y+1);
    dfs(x,y-1);

}
int main(){

    cin>> n>> m;
    for(long long int i=0;i<n;i++){
        for(long long int j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]=='S')
            {
                sx=i;
                sy=j;
            }
            if(a[i][j]=='T')
            {
                tx=i;
                ty=j;
            }

        }
    }
    dfs(sx,sy);
    if(flag==1)
        cout<<"FOUND";
    else cout<<"NOT FOUND";
return 0;}
