#include<bits/stdc++.h>
using namespace std;
int maxmProfit(int arr[],int n)
{
    int mini=arr[0];
    int psf=0;
    int dp[n];
    dp[0]=0;
    for(int i=1;i<n;i++)
    {
        if(mini>arr[i])
        {
            mini=arr[i];
        }
        psf=arr[i]-mini;
        if(psf>dp[i-1])
        {
            dp[i]=psf;
        }
        else{
            dp[i]=dp[i-1];
        }
    }
    int maxi=arr[n-1];
    int psfr=0;
    int dpr[n];
    dpr[n-1]=0;
    for(int i=n-2;i>=0;i--)
    {
        if(maxi<arr[i])
        {
            maxi=arr[i];
        }
        psfr=maxi-arr[i];
        if(psfr>dp[i+1])
        {
            dpr[i]=psf;
        }
        else{
            dpr[i]=dpr[i+1];
        }
    }
    int overp=0;
    for(int i=0;i<n;i++)
    {
        if(overp<dp[i]+dpr[i])
        {
            overp=dp[i]+dpr[i];
        }
    }
    return overp;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<maxmProfit(arr,n);
    return 0;
}