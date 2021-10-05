#include <bits/stdc++.h>
using namespace std;
int cal_mex(unordered_set<int> st)
{
    int mex=0;
    while(st.find(mex)!=st.end())
    {
        mex++;
    }
    return mex;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        ios_base::sync_with_stdio(false);
	    cin.tie(NULL);
        int n,k;
        cin>>n;
        cin>>k;
        int arr[n];
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;++i)
        {
            
            for(int j=i+1;j<=n;++j)
            {
                unordered_set<int> st;
                for(int k=i;k<j;++k)
                {
                    st.insert(arr[k]);
                }
                v.push_back(cal_mex(st));
            }
        }
        
        sort(v.begin(),v.end());
        int ans=v[k-1];
        cout<<ans<<"\n";
    }
    return 0;
}
//**************************BRUTE FORCE APPROACH******************
