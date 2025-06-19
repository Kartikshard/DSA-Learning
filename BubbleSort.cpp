
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>
#include<vector>

using namespace std;
//Bubble Sorting In descending order
void BubbleSort(int n, vector<int> &arr){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main()
{
    vector<int> arr = {1,2,3,4,5};
     int n = arr.size();
     std::cout<<"Before sorting \n";
     for(int i=0;i<n;i++){
         std::cout<<arr[i];
     }
     std::cout<<"\n";
     BubbleSort(n,arr);
     std::cout<<"After Sorting \n";
      for(int i=0;i<n;i++){
         std::cout<<arr[i];
     }
}
