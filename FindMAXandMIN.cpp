#include<bits/stdc++.h>
using namespace std;
struct Pair
{
    int min;
    int max;
};
struct Pair getMinMax(int arr[],int low,int high)
{
    struct Pair minmax,mml,mmr;
    int mid;
    if(low==high)
    {
        minmax.min=arr[low];
        minmax.max=arr[low];
        return minmax;
    }
    if(high==low+1)
    {
        if(arr[low]<arr[high])
        {
            minmax.min=arr[low];
            minmax.max=arr[high];
            return minmax;
        }
        else
        {
            minmax.max=arr[low];
            minmax.min=arr[high];
            return minmax;
        }
    }
    mid=(low+high)/2;
    mml=getMinMax(arr,low,mid);
    mmr=getMinMax(arr,mid+1,high);
    if(mml.min<mmr.min)
    {
        minmax.min=mml.min;
    }
    else{
        minmax.min=mmr.min;
    }
    if(mml.max>mmr.max)
    {
        minmax.max=mml.max;
    }
    else{
        minmax.max=mmr.max;
    }
    return minmax;
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
    struct Pair minmax=getMinMax(arr,0,n-1);
    cout<<"MINIMIM VALUE"<<" "<<minmax.min<<endl;
    cout<<"Maximum VALUE"<<" "<<minmax.max<<endl;
     return 0;
}
//TOURNAMENT SORT TO GET MINIMUM AND MAXIMUM ELEMENT..