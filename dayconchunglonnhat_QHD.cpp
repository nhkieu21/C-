#include<bits/stdc++.h>
using namespace std;
int f[100][100];
//char z[10];
void TaoBang(int m,int n,char x[10], char y[10])
{
    int i, j;
    for (i=1; i<= m; i++)f[i][0] = 0;
    for (j=1; j<=n; j++) f[0][j] = 0;
    for (i=1; i<=m; i++)
        for (j=1; j<=n; j++)
        {
            if (x[i]==y[j]) f[i][j] = f[i-1][j-1] + 1;      //Nếu 2 kí tự của 2 xâu giống nhau thì độ dài dãy con chung thêm 1 phần tử chung
            else f[i][j] = max(f[i][j-1],f[i-1][j]);        //Nếu 2 kí tự của 2 xâu khác nhau thì chọn dãy dài hơn trong 2 bài toán con F(i,j) và F(i-1,j)
        }

}
void tracking(int m, int n,char x[10],char y[10])
{
    int row, col, k;
    char z[10];                 //xâu cần tìm
    row = m, col = n;            //chiều dài và chiều rộng của bảng
    k=f[m][n]-1;                //độ dài của xâu chung
    while ((row>0)&&(col>0))
    {
        if (x[row]==y[col])     //nếu ký tự của 2 xâu giống nhau
        {
            z[k] = x[row];      //gán ký tự đó cho xâu z
            k--;                //lùi về để tìm ký tự giống nhau tiếp theo
            row--;              //lùi về ký tự sau để xét
            col--;              //lùi về ký tự sau để xét
        }
        else
        {
            if (f[row][col]==f[row-1][col]) row = row -1;   //nếu ký tự của 2 xâu khác nhau thì truy về hàng phía trên hoặc cột phía trước nó
            else col = col -1;
        }
    }
    cout<<z;
}
int main ()
{
    int n,m;
    char x[10]=" ABCB";
    char y[10]=" BDCAB";
    m=strlen(x)-1;  //Độ dài chuỗi x
    n=strlen(y)-1;  //Độ dài chuỗi y
    TaoBang(m,n,x,y);   //Tạo bảng
    tracking(m,n,x,y);  //Truy xuất bảng
}
