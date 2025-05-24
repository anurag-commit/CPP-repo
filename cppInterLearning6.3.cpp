#include<iostream>

using namespace std;

class Library{
private:
    int bookLibrary;
    static int bookIssued;

public:

    Library(int totalBooks){
        bookLibrary = totalBooks;
    }


    void display(){
        cout << "total books inside library: " << bookLibrary << endl;
        cout << "total book issued: " << bookIssued << endl;
    }

    void issue(int n){
        bookLibrary -= n;
        bookIssued += n;
    }

    void submitBack(int n){
        bookLibrary += n;
        bookIssued -= n;
    }

    friend int cmp(Library& , Library&);
};

int Library::bookIssued = 0;

int cmp(Library &L1, Library &L2){
    return abs(L1.bookLibrary - L2.bookLibrary);
}

int main(){
    Library lib1(100);
    Library lib2(150);

    lib1.issue(30);
    lib2.issue(40);

    lib1.display();
    lib2.display();

    cout << "Difference in available books: " << cmp(lib1, lib2) << endl;

    return 0;
}
