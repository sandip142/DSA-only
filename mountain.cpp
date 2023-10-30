//to find peak element inside a mountained array

#include<iostream>
using namespace std;

int mountain(int arr[],int n)
{
    int s=0,e=n-1,mid;
    mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
    mid=s+(e-s)/2;
    }
    return arr[s];
}


int main(){
    int arr[]={0,1,4,5,2,0};
    cout<<"peak is:"<<mountain(arr,5);
    return 0;
}