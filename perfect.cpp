#include<iostream>
using namespace std;

 bool IsPerfect(int a[],int n)
    {
        // Complete the function
        bool ans;
        int i=0,j=n-1;
        while(i<=j){
            if(a[i]==a[j]){
                ans=1;
                i++;
                j--;
            }
            else{
                ans=0;
                break;
            }
        }
        return ans;
    }

    int main(){
        int arr[]={1,2,3,2,1};
        cout<<IsPerfect(arr,5);
        return 0;
    }