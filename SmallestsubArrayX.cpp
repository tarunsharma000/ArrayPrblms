int smallestSubWithSum(int arr[], int n, int x)
    {
          int currsum=0;
          int minlen=n+1;
          int start=0;
          int end=0;
          while(end<n)
          {
              while(currsum<x && end<n)
              {
                  currsum+=arr[end];
                  end++;
              }
              while(currsum>x && start<end)
              {
                  if(end-start<minlen)
                      minlen=end-start;
                      
                   currsum-=arr[start++];
              }
          }
          return minlen;
    }
