// Diagonal_Sum.cpp

#include <iostream>
using namespace std;

int main(){
    int accounts[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int size = sizeof(accounts) / sizeof(accounts[0]);

    int total = 0;

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(i == j || i + j == size - 1){
                total += accounts[i][j];
            }
        }
    }

    cout << "Diagonal Sum: " << total;

    return 0;
}