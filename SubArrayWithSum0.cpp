#include<bits/stdc++.h>
using namespace std;
bool subArrayExists(int arr[], int n)
    {
        set<int> st;
        int currSum=0;
        for(int i=0;i<n;i++)
        {
            currSum+=arr[i];
            if(st.find(currSum)!=st.end() || arr[i]==0 || currSum==0)
            {
                return true;
            }
            st.insert(currSum);
        }
        return false;
    }
int main()
{
    int arr[]={4,2,-3,1,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<subArrayExists(arr,n);
    return 0;
}