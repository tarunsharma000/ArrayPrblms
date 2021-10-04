long long findMinDiff(vector<long long> a, long long n, long long m){
       long long ans=INT_MAX;
       sort(a.begin(),a.end());
       for(long long i=0;i+m-1<n;i++)
       {
           long long mini=a[i];
           long long maxi=a[i+m-1];
           if((maxi-mini)<ans) ans=maxi-mini;
       }
    return ans;
    }   
