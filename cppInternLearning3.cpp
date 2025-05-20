int maxOfTwo(int a, int b){
    if(a >= b){
        return a; //returning a in a case where a = b too
    }
    return b; //no need of using else because program will come out of if-function when condition fails.
}

void swap(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b; // done without temp variable, can be done using temp as well
}

int power(int base, int exp = 2){
    int Power = 1;
    for(int i=0; i<exp; i++){
        Power = Power*base;
    }
    return Power;
}