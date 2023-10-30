#include<iostream>
using namespace std;

void PrintArray(char arr[],int n){
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void sortArray(char arr[],int n){
  int i=0,j=n-1;
  while(i<j){
    while(arr[i]=='a' && i<j){
        i++;
    }
    while(arr[j]=='b' && i<j)
    {
        j--;
    }

    if(arr[i]=='b' && arr[j]=='a' && i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    

  }
  PrintArray(arr,n);
}

int main(){
    char arr[]={'a','b','a','b','a','a','b','a','b','b'}; 
    //int arr[]={1,1,0,0,1,0,1,0,1};
    cout<<"sorted Array is:"<<endl;
    sortArray(arr,9);
}