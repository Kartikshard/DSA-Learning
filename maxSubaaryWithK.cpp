
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubstringWithK(vector<int> arr , int n , int k){
   int left , right , max_len , sum;
   left = right = max_len = sum=0;
   while(right<n){
       sum += arr[right];
       if(sum>k){
           sum -= arr[left];
           left++;
       }
       if(sum<=k){
           max_len = std::max(max_len,right-left+1);
           right++;
       }
   }
    return max_len;
    
}
int main()
{
  vector<int> arr ={2,5,1,10,10};
  int n = arr.size();
 int  maxlength = maxSubstringWithK(arr,n,14);
  std::cout<<maxlength;
}
