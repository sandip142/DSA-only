#include<iostream>
using namespace std;

int nonDuplicate(int arr[],int n){
    int result=0;
   for(int i=0;i<n;i++){
      result=result^arr[i];
   }
   return result;
}

int  main(){
    int n,arr[10];
  cout<<"enter the size of an array:"<<endl;
  cin>>n;
  cout<<"enter the Array Element:";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"non Repeated element is:"<<nonDuplicate(arr,n)<<endl;
}