// Length of Last Word

#include<iostream>
using namespace std;

int main(){

    string s = "Hello World";

    int i = s.length() - 1;
    int count = 0;

    while(i >= 0 && s[i] == ' '){
        i--;
    }

    while(i >= 0 && s[i] != ' '){
        count++;
        i--;
    }

    cout << "Length of Last Word: " << count;

    return 0;
}
