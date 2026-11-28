// Power_of_Three.cpp

#include<iostream>
using namespace std;

bool power_of_three(int integer){

    if(integer == 1){
        return true;
    }
    else if(integer < 1 || integer % 3 != 0){
        return false;
    }
    else{
        return power_of_three(integer / 3);
    }
}

int main(){

    int integer = 27;

    if(power_of_three(integer) == true){
        cout << integer << " is power of three.";
    }
    else{
        cout << integer << " is not power of three.";
    }

    return 0;
}
