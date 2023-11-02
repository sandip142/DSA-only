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

double realRoot(int n,int presiocion){
  double fact=1;
  double result;
  int ans=squareRoot(n);
  for(double i=0;i<=presiocion;i++)
  {
    fact =fact/10;
    for(double j=ans;j*j<n;j=j+fact)
    {
      result=j;
    }
  }
  return result;
}

int main()
{
    
    cout<<squareRoot(36)<<endl;
    cout<<squareRoot(8)<<endl;
    cout<<squareRoot(65)<<endl;
    cout<<squareRoot(42)<<endl;
    cout<<realRoot(2,3)<<endl;


    return 0;
}