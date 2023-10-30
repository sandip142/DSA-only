#include<iostream>
using namespace std;
// where  m is total sum we have to equat with this
void SumOfThree(int arr[],int n,int m){ 
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==m){
                    cout<<"Positions are:"<<i<<" "<<j<<" "<<k<<endl;
                    cout<<"Elements are:"<<arr[i]<<"+"<<arr[j]<<"+"<<arr[k]<<"= "<<m;
                }
            }
        }
    }
}

int main(){
    int arr[10],n,k=12;
    cout<<"enter the size of an Array:"<<endl;
    cin>>n;
    cout<<"enter the Array Elements:"<<endl;
    for(int i=0;i<n;i++)
    {
         cin>>arr[i];
    }

    
    SumOfThree(arr,n,k);
    return 0;
}

