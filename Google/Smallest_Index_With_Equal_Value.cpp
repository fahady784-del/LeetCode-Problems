
// Smallest Index With Equal Value

#include<iostream>
using namespace std;

int main(){

    int nums[] = {4, 3, 2, 1};

    int size = sizeof(nums) / sizeof(nums[0]);

    int answer = -1;

    for(int i = 0; i < size; i++){

        if(nums[i] % 10 == i){
            answer = i;
            break;
        }
    }

    cout << "Answer: " << answer;

    return 0;
}
