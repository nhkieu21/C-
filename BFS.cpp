#include <bits/stdc++.h>
using namespace std;

int a[101][101];
queue <int> q;

int n,m,Free[101], u,v,s;

void BFS(int s)
{
     q.push(s);
     Free[s]=0;
     while (!q.empty())
     {
        int u = q.front();
        q.pop();

        cout << u << endl;

        for (int v=1; v<=n; v++)
            if (Free[v] && a[u][v]==1)
            {
                Free[v] = 0;
                q.push(v);
            }
     }
}

int main()
{
 cin >> n >> m>> s;
 for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
            a[i][j]=0;

 for (int i=1; i<=m; i++)
    {
        cin >> u>> v;
        a[u][v]=1;
        a[v][u]=1;
    }

    for (int i=1; i<=n; i++)
        Free[i]=1;

    BFS(s);

 return 0;
}









vector<int> g[maxn]; // vector lưu trữ đỉnh kề
queue<int> s; // hàng đợi
int visited[maxn]; // mảng đánh dấu

void bfs(int u) // u là đỉnh xuất phát
{
    s.clear(); // dọn sạch hàng đợi
    s.push(u); // bỏ đỉnh xuất phát vào
    visited[u] = 1; // đánh dấu đỉnh xuất phát
    while(!s.empty()) // chừng nào hàng đợi còn chưa rỗng
    {
        int u = s.front(); // lấy ra đỉnh ở đầu queue
        s.pop(); // bỏ đỉnh ở đầu queue ra khỏi queue
        for(int v : g[u]) // với mỗi đỉnh v kề với đỉnh u
        {
            if(visited[v]==0) // nếu đỉnh v chưa được đánh dấu
            {
                s.push_back(v); // bỏ đỉnh v vào queue
                visited[v]=1; // đánh dấu đỉnh v
            }
        }
    }
}
