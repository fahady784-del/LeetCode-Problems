// Find_the_Maximum_in_Each_Row.cpp

#include<iostream>
using namespace std;

int main(){
    int marks[3][3] = {
        {75, 82, 91},
        {88, 65, 79},
        {90, 95, 85}
    };
    int k = 1;

    for(int i = 0;i<3;i++){
        int max = marks[i][0];
        for(int j=0;j<3;j++){
            if(marks[i][j] > max){
                max = marks[i][j];
            }else continue;
        }

        cout<<"Student "<<k<<" : "<< max;
        k++;
        cout<<"\n";
    }
    return 0;
}