#include<iostream>
using namespace std;

int BinarySearch(int arr[], int l,int r,int target){
    
    while(l <= r){
        
        int mid = (l + r)/2;
        
        if(arr[mid] == target){
            return 1;
            break;
        }
        else if(arr[mid] < target){
            l = mid + 1;
        }
        else {
             r = mid - 1;
        }
    }
    return 0;
}

int main(){
    
    int arr[] = {10,20,30,40,50,60,70,80,100};
    // int n = arr.size();
    cout<<BinarySearch(arr,0,9,85);
    return 0;
}
