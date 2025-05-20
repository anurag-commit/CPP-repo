#include<iostream>

using namespace std;

int main(){
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    if(n<0){
        cout << "INVALID INPUT";
        return 0;
    }

    if(n%2 == 0){
        cout << n << " is an even number." << endl;
    } 
    else{
        cout << n << " is an odd number." << endl;
    }

    for(int i=1; i<=n; i++){
        if(i%2 == 0){
            if(i==6) continue;
            cout << i << endl;
        }
    }

}