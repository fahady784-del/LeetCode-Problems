// Shuffle_the_Array.cpp

#include <iostream>
using namespace std;

int main(){
    int nums[6] = {2, 5, 1, 3, 4, 7};
    int n = 3;

    int half = n;
    int index = 0;

    int new_array[6] = {};

    for(int i = 0; i < n; i++){
        new_array[index] = nums[i];
        index++;

        new_array[index] = nums[half];
        index++;

        half++;
    }

    for(int i = 0; i < 6; i++){
        cout << new_array[i] << " ";
    }

    return 0;
}