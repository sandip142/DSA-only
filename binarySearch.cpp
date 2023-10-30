#include<iostream>
using namespace std;

int Binarysearch(int arr[],int n,int k)
{
    int start=0,end=n-1;
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

int main()
{
    int a[]={2,3,5,7,8,9};
    cout<<"location: "<<Binarysearch(a,6,8)<<endl;
    cout<<"location: "<<Binarysearch(a,6,3)<<endl;
    return 0;
}