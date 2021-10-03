bool find3Numbers(int arr[], int n, int X)
    {
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        int psum=X-arr[i];
        int left=i+1;
        int right=n-1;
        while(left<right)
        {
            if(arr[left]+arr[right]==psum)
            {
                return true;
            }
            else if(arr[left]+arr[right]<psum)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }
    return false;
    }
