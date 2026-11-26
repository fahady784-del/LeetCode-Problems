// Richest_Customer_Wealth.cpp

#include <iostream>

int main(){
    int accounts[3][3] = {
    {1, 2, 3},
    {3, 2, 1},
    {4, 5, 6}
    };

    int size = sizeof(accounts)/sizeof(accounts[0]);
    int max = 0;

    for(int i = 0; i<size;i++){
        int total =0;
        for(int j = 0;j<3;j++){
            total += accounts[i][j];
        }
        if(total > max) max = total; 
    }
    std::cout << "Maximum Wealth: " << max;

    return 0;
}