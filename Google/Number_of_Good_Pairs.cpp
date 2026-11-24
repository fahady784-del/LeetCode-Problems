// Number of Good Pairs

#include<iostream>
using namespace std;

int main(){

    int nums[] = {1, 2, 3, 1, 1, 3};

    int size = sizeof(nums) / sizeof(nums[0]);

    int count = 0;

    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){

            if(nums[i] == nums[j]){
                count++;
                cout <<"Indexes: "<< "( " << i << " , " << j << " )" << endl;
                cout <<"Values: "<< "( " << nums[i] << " , " << nums[j] << " )" << endl;
                cout<<"Good Pairs";
                cout<<"\n\n";
            }
        }
    }

    cout << "Total Good Pairs: " << count;

    return 0;
}
