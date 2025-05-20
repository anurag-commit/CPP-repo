#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double num;
	cout << "Enter the number:";
	cin >> num;

	double sqNum = sqrt(num);

	cout << "the square root of " << num;
	cout << " is: " << sqNum;
	return 0;
}
