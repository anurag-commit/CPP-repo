#include<iostream>

using namespace std;

int main(){
	int num;
	cout << "Enter the number N:";
	cin >> num;
	
	int sum = 0; 
	for(int i=1;i<=num;i++)
		sum = sum + i;
	cout << "the Sum of natural numbers upto " << num;
	cout << " is: " << sum << endl;
}
