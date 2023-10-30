#include<iostream>
using namespace std;

int Repeated(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];
    }
    for(int i=1;i<n;i++)
    {
        ans=ans^i;
    }
    return ans;
}

int  main(){
    int n,arr[10];
  cout<<"enter the size of an array:"<<endl;
  cin>>n;
  cout<<"enter the Array Element:";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"Repeated element is:"<<Repeated(arr,n)<<endl;
}
