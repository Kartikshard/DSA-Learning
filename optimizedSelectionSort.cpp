// Count the number of swaps made by Selection Sort while sorting.
// → Implement this and return both the sorted array and total number of swaps.
#include<iostream>
#include<vector>
using namespace std;
int count =0;
void selectionSort(int n, vector<int> &arr){
    
    for(int i=0;i<n-1;i++){
        int smallest =i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[smallest]){
                smallest=j;
                
            }
        }
        if(smallest!=i){
            int temp = arr[smallest];
        arr[smallest]= arr[i];
        arr[i]= temp;
        count++;
        }
        
    }
}
int main()
{
   vector<int> arr={1,2,3,5,4,6};
   int n = arr.size();
   std::cout<<"Before Sorting \n";
   for (int i=0;i<n;i++){
       std::cout<<arr[i]<<" ";
   }
   std::cout<<"\n";
    std::cout<<"After Sorting \n";
   selectionSort(n,arr);
     for (int k=0;k<n;k++){
       std::cout<<arr[k]<<" ";
   }
   std::cout<<"\n"<<"Total Swaps:"<<count;
}
