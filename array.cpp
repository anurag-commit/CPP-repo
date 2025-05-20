#include<iostream>
using namespace std;
#define MAX 20

int main(){
	//basic implementation of arrays
	int arr[MAX];

	for(int i=0;i<MAX;i++){
		arr[i] = i*4;
	}

	for(int i=0;i<MAX;i++){
		cout << arr[i] << endl;
	}
}
	
