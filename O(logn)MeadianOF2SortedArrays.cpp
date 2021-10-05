#include<bits/stdc++.h>
using namespace std;
int getMedian(int arr[],int n)
{
    if(n%2==0)
    {
        int mid=n/2;
        return (arr[mid]+arr[mid-1])/2;
    }
    else
    {
        int mid=n/2;
        return arr[mid];
    }
}
int MedianOfTwoSortedArrays(int arr1[],int arr2[],int n)
{
    if(n==1)
    {
        return (arr1[0]+arr2[0])/2;
    }
    if(n==2)
    {
        return (max(arr1[0],arr2[0])+min(arr1[1]+arr2[1]))/2;
    }
    int m1=getMedian(arr1,n);
    int m2=getMedian(arr2,n);
    if(m1==m2)
    {
        return m1;
    }
    if(m1>m2)
    {
        if(n%2==0)
        {
            return MedianOfTwoSortedArrays(arr1+n/2-1,arr2,n-n/2-1);
        }
        else
        {
            return MedianOfTwoSortedArrays(arr1+n/2,arr2,n-n/2);
        }
    }
    else
    {
         if(n%2==0)
        {
            return MedianOfTwoSortedArrays(arr2+n/2-1,arr1,n-n/2-1);
        }
        else
        {
            return MedianOfTwoSortedArrays(arr2+n/2,arr1,n-n/2);
        }
    }
}
int main()
{
    int arr1[]={1,2,3,6};
    int arr2[]={4,6,8,10};
    cout<<MedianOfTwoSortedArrays(arr1,arr2,);
    return 0; 
}
