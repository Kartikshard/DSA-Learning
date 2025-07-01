
// Online IDE - Code Editor, Compiler, Interpreter
// left rotating every element uin a aray by one
#include<iostream>
#include<vector>
using namespace std;
void leftRotate(vector<int> &arr,int n){
    int temp = arr[0];
    for(int i =0;i<n-1;i++){
     arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    
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
   leftRotate(arr,n);
   for(int i=0;i<n;i++){
       std::cout<<arr[i]<<" ";
   }
    return 0;
}
