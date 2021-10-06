#include<bits/stdc++.h>
using namespace std;
int getMedian(int a[],int b[],int n,int m)
{
    int i=0;
    int j=0;
    int count=0;
    int m1=-1;
    int m2=-1;
    
        for(int count=0;count<=(n+m)/2;count++)
        {
            if(i<n && a[i]<b[j])
            {
                m1=m2;
                m2=a[i++];
            }
            else if(j<m && a[i]>b[j])
            {
                m1=m2;
                m2=b[j++];
            }
            else if(i<n)
            {
                m1=m2;
                m2=a[i++];
            }
            else
            {
                m1=m2;
                m2=b[j++];
            }
        }
        int ans=((n+m)%2==0)?(m1+m2)/2:m2;
        return ans;
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
