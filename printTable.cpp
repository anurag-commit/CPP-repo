#include<iostream>
using namespace std;

int main(){
	int x;
	cout << " Enter the number to print table:"<< endl;
	cin >> x;
	for(int i=0;i<10;i++){
		cout << i << ": ";
		cout << x*i << endl;
	}
	return 0;
}
