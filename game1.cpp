#include <bits/stdc++.h>
using namespace std;
int n, m, b, Min=300001, Max;
int mi[1001][1001], ma[1001][1001], a[1001][1001];

int main() {
    freopen("game.inp", "r", stdin);
    freopen("game.inp", "w", stdout);
    scanf("%d %d", &n, &m);
    scanf("%d", &b);
    for (int i=1; i<=n; i++)
        for (int j=1; j<=m; j++)
            scanf("%d", &a[i][j]);
    for (int i=0; i<=n; i++) {mi[i][0]=mi[i][n+1]=30001; ma[i][0]=ma[i][m+1]=0;}
    for (int i=0; i<=m; i++) mi[0][i]=30001, ma[0][i]=0;

    for (int i=1; i<=n; i++)
        for (int j=1; j<=m; j++){
            ma[i][j]=max(b, max( ma[i-1][j-1], max( ma[i-1][j], ma[i-1][j+1])));
            mi[i][j]=min(b, min( mi[i-1][j-1], min( mi[i-1][j], mi[i-1][j+1])));

            if (a[i][j] == 0) {

                int x=ma[i][j];
                ma[i][j]=x-ma[i][j]/2;
                x=mi[i][j];
                mi[i][j]=x-mi[i][j]/2;
            }
            else {ma[i][j]+=a[i][j]; mi[i][j]+=a[i][j];}

            Max=max(Max, ma[i][j]);
            Min=min(Min, mi[i][j]);

    }
    printf("%d \n%d", Min, Max);
}
