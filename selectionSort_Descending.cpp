#include<iostream>
#include<vector>
using namespace std;
void selectionSortDescending(int n , vector<int> &arr){
    for( int i=0;i<n-1;i++){
        int largest=i;
        for(int j=i;j<n;j++){
            if(arr[j]>arr[largest]){
                largest=j;
            }
        }
        int temp = arr[largest];
        arr[largest]= arr[i];
        arr[i]=temp;
    }
}
int main(){
    vector <int> arr ={1,2,3,4,5,6,7,8,9,10};
    int n = arr.size();
    std::cout<<"Before sorting"<<"\n";
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
    std::cout<<"After Sorting"<<"\n";
    selectionSortDescending(n,arr);
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
}