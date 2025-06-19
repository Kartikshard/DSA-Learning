
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>
#include<vector>

using namespace std;
int selectionswap=0;
int bubleSwap=0;
//comparing bubble and selectio sortin

//selection sort
void selectionSort(int n , vector<int> &arr){
    
    for(int i=0;i<n-1;i++){
        int smallest=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallest]){
                smallest=j;
            }
        }
        if(smallest!=i){
            int temp = arr[smallest];
            arr[smallest]= arr[i];
            arr[i]= temp;
             selectionswap++;
            
        }
    }
  
}

// Bubble sort
void bubleSort(int n , vector<int> &arr){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
                bubleSwap++;
            }
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
    bubleSort(n,arr);
     std::cout<<"After Sorting \n";
      for(int i=0;i<n;i++){
         std::cout<<arr[i];
     }
     std::cout<<"\nBubble Sort Swaps: "<< bubleSwap;
}
