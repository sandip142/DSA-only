#include<iostream>
using namespace std;

int firstLarge(int arr[],int n,int key)

{
  int s=0,e=n-1,mid,ans;
  mid=s+(e-s)/2;
  while(s<=e)
  {
    if(arr[mid]==key)
    {
        ans=mid;
        e=mid-1;
    }
    else if(arr[mid]<key){
        s=mid+1;
    }
    else{
        e=mid-1;
    }
    mid=s+(e-s)/2;
  }
  return ans;
}

int LastLarge(int arr[],int n,int key)

{
  int s=0,e=n-1,mid,ans=-1;
  mid=s+(e-s)/2;
  while(s<=e)
  {
    if(arr[mid]==key)
    {
        ans=mid;
        s=mid+1;
    }
    else if(arr[mid]<key){
        s=mid+1;
    }
    else{
        e=mid-1;
    }
    mid=s+(e-s)/2;
  }
  return ans;
}

int  main()
{
    int a[10]={1,2,3,3,3,3,3,5,6,7};
    cout<<"first large: "<<firstLarge(a,10,3)<<endl;
    cout<<"last large: "<<LastLarge(a,10,3)<<endl;

    // total number of occurence:
    int totalOccu = LastLarge(a,10,3)-firstLarge(a,10,3)+1;
    cout<<"Total occurances: "<<totalOccu<<endl;
    return 0;
};
