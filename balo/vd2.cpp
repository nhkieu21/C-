//Phuong phap tham an
#include<bits/stdc++.h>
#include<malloc.h>
#include<string.h>
#include<utility>
using namespace std;
int n;
typedef struct
{
    float w, v, a;
    int So_DV_Duoc_Chon;
} DoVat;
DoVat *dsdv;
DoVat * ReadFromFile(float *W, int *n)
{
    FILE *f;
    f= fopen("Thaman.INP", "r");
    fscanf(f, "%f", W); // trong luong cua balo
    DoVat *dsdv; // mang dong, boi vi chua biet co bao nhieu do vat
    dsdv=(DoVat*)malloc(sizeof(DoVat)); // ban dau cho luu tru dung 1 do vat
    int i=0;
    while(!feof(f))
    {
        fscanf(f, "%f%f", &dsdv[i].w, &dsdv[i].v, &dsdv[i].a);
        dsdv[i].a = dsdv[i].v / dsdv[i].w;
        dsdv[i].So_DV_Duoc_Chon=0;
        i++;
        realloc(dsdv, sizeof(DoVat)*(i+1));
        // quay lai, doc them 1 phan tu nua vao phan tu 1
        // => cap phat 1 o, so luong o = i+1
    }
    *n=i; // so luong do vat
    fclose(f);
    return dsdv; //mang cac do vat
}
void sort1(DoVat *x, DoVat *y)
{
    DoVat Temp;
    Temp=*x;
    *x=*y;
    *y=Temp;
}
void swap(int *x, int *y)
{
    int temp ;
    temp = *x;
    *x = *y;
    *y = temp;
}
void BubbleSort() //DoVat *dsdv, int n){
{
    int i, j;
    for(i=0; i<=n-2; i++)
        for(j=n-1; j>=i+1; j--)
        {
            if(dsdv[j].a > dsdv[j-1].a)
            {
                swap(dsdv[j].w, dsdv[j-1].w);
                swap(dsdv[j].v, dsdv[j-1].v);
                swap(dsdv[j].a, dsdv[j-1].a);
            }
        }
}

void Output(DoVat *dsdv, int n, float W)
{
    int i;
    float TongW=0.0, TongV = 0.0;
    for(i=0; i<n; i++)
    {
        printf("%3d %3f %3f %3f %3d \n", i+1, dsdv[i].w,
               dsdv[i].v, dsdv[i].a,
               dsdv[i].So_DV_Duoc_Chon);
        TongW = TongW +dsdv[i].So_DV_Duoc_Chon * dsdv[i].w;
        TongV = TongV +dsdv[i].So_DV_Duoc_Chon * dsdv[i].v;
    }
    printf("\n Trong luong cua balo: %f \n", W);
    printf("\n Trong luong cua cac vat duoc chon: %3f \n\n Tong gia tri= %3f \n", TongW, TongV);
}
void Greedy(DoVat *dsdv, int n, float W)
{
    int i;
    for(i=0; i<n; i++)
    {
        dsdv[i].So_DV_Duoc_Chon = W/dsdv[i].w;
        W = W - dsdv[i].So_DV_Duoc_Chon * dsdv[i].w;
    }
}
int main()
{
    int n;
    float W;

    dsdv=ReadFromFile(&W, &n);
    BubbleSort();
    Greedy(dsdv, n,W);
    Output(dsdv, n, W);
    free(dsdv);
    return 0;
}

