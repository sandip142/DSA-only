#include<iostream>
using namespace std;


int squareRoot(int n)
{
    int s=0,e=n,ans;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
      int square=mid*mid;
      if(square==n)
      {
        return mid;
      }  
      else if(square < n)
      {
        ans=mid;
        s=mid+1;
      }
      else{
        e=mid-1;
      }
      mid=s+(e-s)/2;
    }
    return ans;
}

int main()
{
    
    cout<<squareRoot(36)<<endl;
    cout<<squareRoot(8)<<endl;
    cout<<squareRoot(65)<<endl;
    cout<<squareRoot(42)<<endl;

    return 0;
}