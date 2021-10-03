#include<bits/stdc++.h>
using namespace std;
int count(int arr[],int n,int k)
{
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    unordered_map<int,int> :: iterator it;
    int c=0;
    for(it=mp.begin();it!=mp.end();it++)
    {
        if(it->second>(n/k))
        {
            c++;
        }
    }
    return c;
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
    int k; cin>>k;
    cout<<count(arr,n,k);
    return 0;
}