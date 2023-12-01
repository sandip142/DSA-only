#include<iostream>
using namespace std;

int SingleCount(int arr[],int n)
{
    int count =1;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1]){
           count ++;
        }
    }
    return count;
}

int main(){
    int arr[10]={1,2,3};
    cout<<SingleCount(arr,3);
    return 0;
}