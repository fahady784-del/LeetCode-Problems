// Row_With_Maximum_Ones.cpp

#include <iostream>
using namespace std;

int number_of_ones(int matrix[3][4]){
    int max = 0;
    int row = 1;

    for(int i = 0; i < 3; i++){
        int count = 0;

        for(int j = 0; j < 4; j++){
            if(matrix[i][j] == 1){
                count++;
            }
        }

        if(count > max){
            max = count;
            row = i + 1;
        }
    }

    cout << "Row with Maximum Ones: " << row << "\n";
    cout << "Number of ones: " << max;

    return max;
}

int main(){
    int matrix[3][4] = {
        {0, 1, 1, 0},
        {1, 1, 1, 1},
        {0, 0, 1, 0}
    };

    number_of_ones(matrix);

    return 0;
}
