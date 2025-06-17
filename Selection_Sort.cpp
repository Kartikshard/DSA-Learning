
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>
#include<vector>

using namespace std;
void selection_sort(int n, vector<int> &arr){
    for(int i=0;i<n-1;i++){
       int smallest=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[smallest]){
                smallest=j;
            }
        }
        int temp = arr[smallest];
        arr[smallest]=arr[i];
        arr[i]=temp;
    }
}
int main()
{
   vector<int> arr={89,9,6,12,0,4,3,2,1};
   int n = arr.size();
   std::cout<<"Before Sorting"<<"\n";
   for(int i=0;i<n;i++){
       std::cout<<arr[i]<<" ";
   }
   std::cout<<"\n";
   selection_sort(n,arr);
   std::cout<<"After Sorting with Selection Sort"<<"\n";
    for(int i=0;i<n;i++){
       std::cout<<arr[i]<<" ";
   }
   
   
}
