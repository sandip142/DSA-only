#include<iostream>
using namespace std;

int Intersection(int arr1[],int n,int arr2[],int m)
{
    int ans=-1;
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(arr1[i]==arr2[j]){
            ans=arr1[i];
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}

int main(){
    int arr1[10],arr2[10],m,n;
    cout<<"Enter the size of first set:"<<endl;
    cin>>n;
    cout<<"Enter the Element of an set:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the size of second set:"<<endl;
    cin>>m;
    cout<<"Enter the Element of an set:"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }

    cout<<"Intersecting element is :"<<Intersection(arr1,n,arr2,m)<<endl;
    return  0;
}