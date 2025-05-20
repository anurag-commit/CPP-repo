#include<iostream>
#include<string>
#include<cctype>

using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << endl;
    }
}

int sumArr(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int maxArr(int arr[], int n){
    int max = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] > max) max = arr[i];
    }
    return max;
}

int main(){
    int n;
    cout << "Enter the length of the Array: ";
    cin >> n;

    int arr[n];
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    print(arr, n);
    int sum = sumArr(arr, n);
    int max = maxArr(arr, n);

    cout << "the sum of array is: " << sum << endl;
    cout << "the max of the array is: " << max << endl;

    string txt;
    cin.ignore();
    getline(cin, txt);

    int length = txt.length();

    for(int i=0; i<length; i++){
        txt[i] = toupper(txt[i]);
    }

    cout << "length of the string: " << length << endl;
    cout << "String: " << txt << endl;

    return 0;
}



