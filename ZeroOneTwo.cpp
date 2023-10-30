#include<iostream>
using namespace std;

void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


void SortedArray(int arr[],int n)
{

    int j;

    int ac=0,bc=0,cc=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            ac++;
        }
        if(arr[i]==1){
         bc++;
        }
        if(arr[i]==2){
            cc++;
        }
    } 
        for(j=0;j<ac;j++){
            arr[j]=0;
        }
        for(j=ac;j<ac+bc;j++)
        {
            arr[j]=1;
        }

        for(j=ac+bc;j<ac+bc+cc;j++)
        {
            arr[j]=2;
        }
    PrintArray(arr,n);
}

int main(){
    int arr[]={0,1,2,1,2,1,2};
    cout<<"sorted array is:"<<endl;
    SortedArray(arr,7);
}