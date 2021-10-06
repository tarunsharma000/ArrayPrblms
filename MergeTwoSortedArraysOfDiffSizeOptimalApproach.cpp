#include<bits/stdc++.h>
using namespace std;
int getMedian(int a[],int b[],int n,int m)
{
    int low=0;
    int high=n;
    int total=(n+m+1)/2;
    while(low<=high)
    {
        int cut1=(low+high)/2;
        int cut2=total-cut1;
        int l1=(cut1>0)?a[cut1-1]:INT_MIN;
        int l2=(cut2>0)?b[cut2-1]:INT_MIN;
        int r1=(cut1<n)?a[cut1]:INT_MAX;
        int r2=(cut2<m)?b[cut2]:INT_MAX;
        if(l1>r2) high=cut1-1;
        if(l2>r1) low=cut1+1;
        if(l1<=r2 and l2<=r1)
        {
            if((n+m)%2==0)
            {
               int ans=(max(l1,l2)+min(r1,r2))/2;
               return ans;
            }
            else
           {
             return max(l1,l2);
           }
        }
    }
    return 0;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    cout<<getMedian(a,b,n,m);
    return 0;
}
