//Kids With the Greatest Number of Candies

#include<iostream>
using namespace std;


int main(){
    int size = 5;
    int candies[size] = {2,3,5,1,3};
    int extra_candies = 3;
    
    int max = 0;
    for(int i =0; i<size ;i++){
        if(candies[i] > max){
            max = candies[i];
        }
    }
    for(int i =0; i<size ;i++){
        candies[i] += extra_candies;
    }

    for(int i = 0;i<size;i++){
        if(candies[i] >= max){
            cout<<"true ";
        }
        else{
            cout<<"false ";
        }
    }
    return 0;
}