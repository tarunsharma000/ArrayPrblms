#include<bits/stdc++.h>
using namespace std;
int kmin(vector<int> v,int k,int n)
{
    priority_queue<int> pq;
    for(int i=0;i<k;i++)
    {
        pq.push(v[i]);
    }
    for(int i=k;i<n;i++)
    {
        if(v[i]<pq.top())
        {
            pq.pop();
            pq.push(v[i]);
        }
    }
    return pq.top();
}
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int k;
    cin>>k;
    cout<<kmin(v,k,n);
    return 0;
}