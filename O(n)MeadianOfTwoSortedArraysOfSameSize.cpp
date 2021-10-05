#include<bits/stdc++.h>
using namespace std;
int MedianOfTwoSortedArrays(int arr1[],int arr2[],int n1,int n2)
{
    int i=0;
    int j=0;
    int count=0;
    int m1=-1;
    int m2=-1;
    while(count<=n1)
    {
        if(i==n1){
          m1=m2;
          m2=arr2[0];
          break;}
        else if(j==n1){
          m1=m2;
          m2=arr1[0];
          break;}
        else if(arr1[i]<arr2[j]){
          m1=m2;
          m2=arr1[i++];}
        else{
          m1=m2;
          m2=arr2[j++];
        count++;}
    }
    return (m1+m2)/2;
}
int main()
{
    int arr1[]={1,2,3,6};
    int arr2[]={4,6,8,10};
    cout<<MedianOfTwoSortedArrays(arr1,arr2,4,4);
    return 0; 
}
