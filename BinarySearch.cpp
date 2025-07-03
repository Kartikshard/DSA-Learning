
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int> arr , int n , int target){
    int low =0;
    int high=n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(target==arr[mid]) return mid;
        else if(target<arr[mid]) high = mid-1;
        else low=mid+1;
       
    }
    return -1;
}

int main()
{
  vector<int> arr ={1,3,4,5,6,7,8,9,10,15,32,64};
  int n = arr.size();
  int result =BinarySearch(arr,n,7);
  std::cout<<"Element found at index : "<<result;
}
