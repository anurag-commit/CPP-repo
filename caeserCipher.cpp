#include<iostream>
#include<string>

using namespace std;

//improvement needed in terms of A/a and handling properly tmro write it again if possible
int main(){
    string sentence;
    cout << "Enter the Sentence: ";
    getline(cin, sentence);

    int length = sentence.length();
    cout << "The original sentence: " << sentence << endl;
    cout << "length of string: " << length << endl;

    int key;
    cout << "Enter the key";
    cin >> key;

    char extreme = 'z';
    char limit = extreme -= key;

    for(int i=0; i<length; i++){
        if(sentence[i] == ' ') continue;

        if(sentence[i] <= limit){
            sentence[i] += key;
        }else{
            sentence[i] -= 26-key;
        }
    }

    cout << "The encrypted sentence: " << sentence << endl;

    return 0;
}