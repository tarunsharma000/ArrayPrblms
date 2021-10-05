int MinimumNofOperation(int arr[],int n)
{
  int low=0;
  int high=n-1;
  int cost=0;
  while(low<high)
  {
     if(arr[low]==arr[high])
     {
        low++; high++;
     }
     else if(arr[low]<arr[high])
     {
        low++;
        arr[low]+=arr[low-1];
        cost++;
     }
     else
     { 
        high--;
        arr[high]-=arr[high+1]
        cost++;
     }
  }
  return cost; //COST IS THE MINIMUM NO OPERATION.
}
