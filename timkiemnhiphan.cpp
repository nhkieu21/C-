#include<bits/stdc++.h>
using namespace std;
int binary_search(int A[], int sizeA, int target)
{
    int lo = 1, hi = sizeA;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo)/2;
        if (A[mid] == target)
            return mid;
        else if (A[mid] < target)
            lo = mid+1;
        else
            hi = mid-1;
    }
    // không tìm thấy giá trị target trong mảng A
    return -1;
}
int main()
{
    int n,A[1001],x;
    cin>>n>>x;
    for (int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    cout<<binary_search(A,n,x);
}
