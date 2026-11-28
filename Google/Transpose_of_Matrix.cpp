// Transpose_of_Matrix.cpp

#include <iostream>
using namespace std;

int main(){
    int rows = 2;
    int cols = 3;

    int matrix[rows][cols] = {
    {1, 2, 3},
    {4, 5, 6}
    };

    int newMatrix[cols][rows] = {};

    for(int i =0;i<rows;i++){
        for(int j = 0;j<cols;j++){
            newMatrix[j][i] = matrix[i][j];
        }
    }

    for(int i =0;i<cols;i++){
        for(int j = 0;j<rows;j++){
            cout<<newMatrix[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}