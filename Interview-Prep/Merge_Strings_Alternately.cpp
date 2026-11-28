
// Merge Strings Alternately

#include<iostream>
using namespace std;

void merged_string(string s1, string s2){

    string final_string = "";

    int i = 0;

    for(i = 0; i < s1.length() && i < s2.length(); i++){
        final_string += s1[i];
        final_string += s2[i];
    }

    while(i < s1.length()){
        final_string += s1[i];
        i++;
    }

    while(i < s2.length()){
        final_string += s2[i];
        i++;
    }

    cout << final_string << endl;
}

int main(){

    string word1 = "abcd";
    string word2 = "pqrs";

    string word3 = "ab";
    string word4 = "pqrs";

    string word5 = "abcd";
    string word6 = "pq";

    merged_string(word1, word2);
    merged_string(word3, word4);
    merged_string(word5, word6);

    return 0;
}
