
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>
#include<vector>

using namespace std;
// Insertion sort Ascening Order
void insertionSortAscending(int n , vector<int> &arr){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
}

// Insertion Sort Descending Order
void insertionSortDescending(int n , vector<int> &arr){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]<arr[j]){
            int temp = arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
}

int main()
{
    vector<int> arr = {9, 5, 2, 7, 1};
     int n = arr.size();
     std::cout<<"Before sorting \n";
     for(int i=0;i<n;i++){
         std::cout<<arr[i];
     }
     std::cout<<"\n";
    insertionSortDescending(n,arr);
     std::cout<<"After Sorting \n";
      for(int i=0;i<n;i++){
         std::cout<<arr[i];
     }
    
}
