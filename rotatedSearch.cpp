#include<iostream>
using namespace std;

int Binarysearch(int arr[],int s,int e,int k)
{
    int start=s,end=e;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==k)
        {
            return mid;
        }
        else if(k>arr[mid]){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int pivot(int arr[],int n)
{
    int s=0,e=n-1,mid;
    mid=s+(e-s)/2;

    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

int rotatedSearch(int arr[],int n,int key)
{

   int ans=-1;
   int pivot1=pivot(arr,n);
    if(arr[pivot1]<=key && key<=arr[n-1])
    {
       ans= Binarysearch(arr,pivot1,n-1,key);
    }
    else{
        ans=Binarysearch(arr,0,pivot1-1,key);
    }
    return ans;
}

int main()
{
    int arr[]={7,8,9,1,2,3};
    cout<<"Element: "<<rotatedSearch(arr,6,9);
    return 0;
}