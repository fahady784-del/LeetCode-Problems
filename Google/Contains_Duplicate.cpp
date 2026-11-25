// Contains_Duplicate.cpp

#include<iostream>
using namespace std;

bool contains_duplicate(int arr[],int size){
    for(int i = 0;i<size;i++){
        for(int j = i+1;j<size;j++){
            if(arr[i] == arr[j]){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int nums[] = {1, 2, 3, 1};

    int size = sizeof(nums)/sizeof(nums[0]);

    if(contains_duplicate(nums,size) == true) cout<<"True";
    else cout<<"False";

    return 0;
}