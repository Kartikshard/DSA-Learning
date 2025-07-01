
// Online IDE - Code Editor, Compiler, Interpreter
// left rotating every element uin a aray by one
#include<iostream>
#include<vector>
using namespace std;
void leftRotateBy_Places(vector<int> &arr,int n, int k){
    // storing values till k
    vector<int>temp(k);
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }
    // Shifting elements left
    for(int i =0;i<n-k;i++){
     arr[i]=arr[k+i];
    }
    
    //putting k elements at last
    for(int i =0;i<k;i++){
        arr[n-k+i]= temp[i];
    }
}
int main()
{
   vector<int> arr ={6,1,2,3,4,5};
   int n = arr.size();
   std::cout<<"Before rotating the arrray \n";
   for(int i=0;i<n;i++){
       std::cout<<arr[i]<<" ";
   }
   std::cout<<"\nAfter Rotating\n";
   leftRotateBy_Places(arr,n,2);
   for(int i=0;i<n;i++){
       std::cout<<arr[i]<<" ";
   }
    return 0;
}
