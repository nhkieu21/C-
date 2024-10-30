#include<bits/stdc++.h>
#include<vector>
using namespace std;
int n,a[100001];
vector <vector<int>> res;
bool ok[100001];
void Try (int i)
{
    for (int j=1;j<=n;j++)
    {
        if (!ok[j])
        {
            a[i]=j;
            ok[j]=true;
            if (i==n)
            {
                vector<int>b;
                for (int l=1;l<=n;l++)
                {
                    b.push_back(a[l]);
                }
                res.push_back(b);
            } else {Try (i+1);}
            ok[j]=false;
        }
    }
}
void in()
{
    for (int i=res.size()-1;i>=0;i--)
    {
        for (int j=0;j<res[i].size();j++)
        {
            cout<<res[i][j];
        }
        cout<<" ";
    }
    cout<<"\n";
}
int main ()
{
    cin>>n;
    res.clear();
    memset(ok,false,sizeof(ok));
    Try(1);
    in();
}
