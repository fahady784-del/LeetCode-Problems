//Find Numbers With Even Number Of Digits
#include<iostream>
using namespace std;

int main(){

    int nums[] = {12, 345, 2, 6, 7896};

    int size = sizeof(nums) / sizeof(nums[0]);

    int evenCount = 0;

    for(int i = 0; i < size; i++){

        int count = 0;
        int number = nums[i];

        while(number > 0){
            number = number / 10;
            count++;
        }

        if(count % 2 == 0){
            evenCount++;
        }
    }

    cout << "Numbers with even digits: " << evenCount;

    return 0;
}
