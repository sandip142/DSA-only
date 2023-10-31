//find pivot element in Rotated Sorted Array

#include<iostream>
using namespace std;

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
    return arr[s];
}


//big pivot
int pivotBig(int arr[],int n)
{
    int s=0,e=n-1,mid;
    mid=s+(e-s)/2;

    while(s<e)
    {
        if(arr[mid]<=arr[n-1])
        {
            e=mid-1;
        }else{
            s=mid;
        }
        mid=s+(e-s)/2;
    }
    return arr[e];
}

int main()
{
    int arr[]={7,8,9,1,2,3};
    cout<<"sandip"<<endl;
    cout<<"pivot:"<<pivot(arr,6)<<endl;
    cout<<"pivot:"<<pivotBig(arr,6);
    
    return 0;
}