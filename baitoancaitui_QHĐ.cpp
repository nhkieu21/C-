#include <bits/stdc++.h>
using namespace std;
#include <time.h>
int F[100][200];
int w[100];
int v [100];
void TaoBang(int F[100][200], int n, int M)
{
    for(int L =0; L<=M; L++) F[0][L] =0;
    for(int i=0; i<=n; i++) F[i][0] =0;
    for(int i = 1; i<= n; i++)
    {
        for(int L=1; L<=M; L++)
        {
            F[i][L] = F[i-1][L];
            if(w[i] <=L && F[i][L]< ( (F[i-1][L - w[i]]) + v[i]))
            {
                F[i][L] = (F[i-1][L - w[i]]) + v [i];
            }
        }
    }
}
void TruyVet(int F[100][200], int n, int M)
{
    int L = M;
    cout << "do vat thu : ";
    for (int i=n; i>0; i--)
    {
        if(F[i][L]!=F[i-1][L])
        {
            cout << i << " ";
            L =L - w[i];
        }
    }
}
int main ()
{
    int n, M;
    cout << "Nhap n: " ;
    cin >> n;
    cout << "Nhap M: " ;
    cin >> M;
    for(int i=1; i<=n; i++)
    {
        cout << "w[" << i << "] ";
        cin >> w[i];
    }
    for(int i=1; i<=n; i++)
    {
        cout << "v[" << i << "] ";
        cin >> v[i];
    }
    TaoBang(F, n, M);
    for(int i=0; i<=n; i++)
    {
        for(int L =0; L<=M; L++)
        {
            if(F[i][L]<10)
            {
                cout << F[i][L] << "  ";
            }
            else cout << F[i][L] << " ";
        }
        cout << endl;
    }
    TruyVet(F, n, M);
    cout << " duoc chon";
    cout << endl << "tong gia tri = " << F[n][M];

}
