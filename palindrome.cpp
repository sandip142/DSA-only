 #include<iostream>
 using namespace std;
 
 int PalinArray(int a[], int n)
    {
       
       int ans=0,rem,flag;    
       for(int i=0;i<n;i++)
       {
           
         int store = 0;
         store=a[i];
         while(store!=0)
         {
             rem=store%10;
             ans=ans*10+rem;
             store=store/10;
            
         }
        
         if(ans==a[i])
         {
             flag=1;
         }
         else{
             flag=0;
             break;
         }
         ans=0;
       }
 return flag;
       
    }   

int main(){
    int arr[]={111,222,334,444};
    cout<<PalinArray(arr,4);
    PalinArray(arr,4);
    return 0;
}