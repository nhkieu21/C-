#include<bits/stdc++.h>
#include<stack>
#include<vector>
using namespace std;
bool visited[50001]= {false};
long long a[5001][5001]= {0},n,k,u,v,dem=0;
void reinit()
{
    for(int i=1; i<=n; i++)
    {
        visited[i]=false;
    }
}

int dfs(int u )
{
    vector<int>vt;
    stack<int>st;
    st.push(u);
    visited[u]=true;
    vt.push_back(u);
    while(!st.empty())
    {
        int v=st.top();
        st.pop();
        for(int t=1; t<=n; t++)
        {
            if(visited[t]==false && a[v][t]==1)
            {
                visited[t]=true;
                vt.push_back(t);
                st.push(v);
                st.push(t);
                break;
            }
        }
    }
    for(int i=1; i<vt.size(); i++)
    {
        if(abs(vt[0]-vt[i])<=k) dem++;
    }
    return dem;
}
int main()
{
    freopen("PAIR.INP","r",stdin);
    freopen("PAIR.OUT","w",stdout);
    cin>>n;
    cin>>k;
    for(int i=1; i<n; i++)
    {
        cin>>u>>v;
        a[u][v]=true;
    }
    for(int i=1; i<=n; i++)
    {
        dfs(i);
        reinit();
    }
    //dfs(3);
    cout<<dem;
    return 0;
}
