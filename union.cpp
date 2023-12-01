#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr{1,2,3,4,5};
    vector<int> brr{2,7,8};
    vector<int> ans;

//here we check the number is repeating in another array if it is then assign marjk to it 
    for(int i=0;i<arr.size();i++){
        int element=arr[i];
        ans.push_back(arr[i]); // pushing the element of arr
        for(int j=0;j<arr.size();j++)
        {
            if(element==brr[j]){
                brr[j]=INT8_MIN; //assingn mark 
            }
        }
    }

    for(int j=0;j<brr.size();j++)
    {
        if(brr[j]!=INT8_MIN)
        ans.push_back(brr[j]);
    }

     for(int j=0;j<ans.size();j++)
    {
          cout<<ans[j]<<" ";
    }
    return 0;
}