
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>
#include<vector>

using namespace std;
 int k =4;
int findKthSmallestElement(int n , vector<int> &arr){
    int kSmallest=0;
    for(int i =0;i<k;i++){
        int smallest = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallest]){
                smallest=j;
            }
        }
        if(smallest!=i){
            int temp = arr[i];
            arr[i]=arr[smallest];
            arr[smallest]=temp;
        }
        kSmallest=arr[i];
    }
    return kSmallest;
}

int main()
{
   
 vector<int> arr ={7, 2, 1, 6, 8, 5, 3, 4};
 int n = arr.size();
 int ksmall = findKthSmallestElement(n,arr);
 std::cout<<"The "<<k<<" smallest element is :"<<ksmall;
    return 0;
}
