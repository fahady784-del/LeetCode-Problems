//Running Sum of 1D Array


#include<iostream>
using namespace std;

int main(){

    int nums[4] = {1, 2, 3, 4};
    int answer[4] = {};

    answer[0] = nums[0];

    for (int i = 1; i < sizeof(nums) / sizeof(nums[0]); i++){
        answer[i] = answer[i-1] + nums[i];
    }

    cout << "Running Sum: ";

    for (int i = 0; i < sizeof(answer) / sizeof(answer[0]); i++){
        cout << answer[i] << " ";
    }

    return 0;
}
