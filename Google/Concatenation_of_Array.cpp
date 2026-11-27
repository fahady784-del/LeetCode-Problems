// Concatenation_of_Array.cpp


#include <iostream>
using namespace std;

int main(){
    int n = 3;
    int nums[n] = {1, 2, 1};

    int size = n+n;
    int nums2[size] = {};
    
    for(int i = 0;i<n;i++){
        nums2[i] += nums[i];
    }

    for(int i = 0;i<n;i++){
        nums2[i+n] += nums[i];
    }

    for(int i = 0;i<size;i++){
        cout<<nums2[i]; 
    }


    return 0;
}