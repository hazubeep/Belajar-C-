#include <iostream>
using namespace std;

int main() {
    int a = 4;
    int b = 4;
    bool hasil1, hasil2;
    
    //sebanding
    hasil1 = (a == b);
    
    //Tidak Sebanding
    hasil2 = (a != b);
    
    //Kurang dari
    hasil1 = (a < b);
    
    //Lebih dari
    hasil2 = (a > b);
    
    //Kurang dari sama dengan
    hasil1 = (a <= b);
    
    //Lebih dari sama dengan 
    hasil2 = (a >= b);
    
    cout << hasil1 << endl;
    cout << hasil2 << endl;
    return 0;
}