#include<bits/stdc++.h>
using namespace std;
const int N=1<<10;
long long int visit[N][N];
long long int n,m;
char a[1000][1000];
void dfs(int x,int y){

    if(x<0||x>n-1||y<0||y>n-1||a[x][y]=='#'||visit[x][y]==1)
        return;
    visit[x][y]=1;

    dfs(x+1,y);
    dfs(x-1,y);
    dfs(x,y+1);
    dfs(x,y-1);

}
int main(){
   int count=0;
    cin>> n>> m;
    for(long long int i=0;i<n;i++){
        for(long long int j=0;j<m;j++){
            cin>>a[i][j];

        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(visit[i][j]==0&&a[i][j]=='.')
            {
                dfs(i,j);
                count++;
            }
        }
    }
    cout<<count;

return 0;}
