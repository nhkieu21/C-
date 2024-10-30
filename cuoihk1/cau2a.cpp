#include <bits/stdc++.h>
using namespace std;
#define Max 20

void Try(int i);//Hàm chứa công thức đệ quy

int n;// n là số đồ vật
int m;//khả năng chứa của ba lô
int x[Max+1]; //lưu phương án hiện hành
int y[Max+1]; //lưu phương án tốt nhất
int w[Max+1];//w[i] là trọng lượng vật i
int v[Max+1];//v[i] là giá trị vật i
int vmax;//lưu giá trị tối ưu
int wsel;//tổng trọng lượng đồ vật được chọn
int vsel;//tổng giá trị đồ vật được chọn

int init()
{
    int i;
    vmax = 0;
    vsel = 0;
    wsel = 0;//nhập dữ liệu từ file
    scanf(  "%d %d \n", &n, &m);
    for (i = 1; i <= n; i++)
        scanf(  "%d", &v[i]);
    scanf("\n");
    for (i = 1; i <= n; i++)scanf(  "%d", &w[i]);

    for (i = 1; i <= n; i++)
    {
        x[i]=0;
        y[i]=0;
    }

}
void GhiNhan()
{
    int i;
    if (vmax < vsel)
    {
        vmax = vsel;
        for (i = 1; i <= n; i++) y[i] = x[i];
    }
}
void output()
{
    int i;


    printf(  "Gia tri lon nhat: %4d \n", vmax);
    printf(  "Do vat duoc chon: ");
    for (i = 1; i <= n; i++)if (y[i]==1) printf(  "%3d  ", i);


}
void Try(int i)
{
    int j;
    for (j = 0; j <= 1; j++)if ((j == 0) || ((j == 1) && (wsel + w[i] <= m)))
        {
            x[i] = j;
            if (j == 1)
            {
                vsel = vsel+v[i];
                wsel = wsel+w[i];
            }
            if (i == n) GhiNhan();
            else  Try(i+1);
            if (j == 1)
            {
                vsel = vsel-v[i];
                wsel = wsel-w[i];
            }
        }
}

int main()
{
    init();
    Try(1);
    output();
}
