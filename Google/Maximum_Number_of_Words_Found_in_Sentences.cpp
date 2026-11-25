// Maximum Number of Words Found in Sentences

#include<iostream>
using namespace std;

int main(){

    string sentences[] = {
        "alice and bob love leetcode",
        "i think so too",
        "this is great thanks very much"
    };

    int size = sizeof(sentences) / sizeof(sentences[0]);
    int maxWords = 0;

    for(int i = 0; i < size; i++){
        int count = 0;
        for(int j = 0; j < sentences[i].length(); j++){
            if(sentences[i][j] == ' '){
                count++;
            }
        }
        count++;
        if(count > maxWords){
            maxWords = count;
        }
    }

    cout << "Maximum Number of Words: " << maxWords;

    return 0;
}
