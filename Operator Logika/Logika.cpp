#include <iostream>
using namespace std;
int main() {
    int a = 2;
    int b = 3;
    
    bool hasil;
    
    //Operator Logika : not, and , or
    
    //not
    hasil = !(a == 2);
    cout << hasil << endl << endl;
     
    cout << "Untuk And" << endl;
    hasil = (a == 2) and (b == 3); // true and true
    cout << hasil << endl;
     
    hasil = (a == 4) and (b == 3); // false and true
    cout << hasil << endl;
     
    hasil = (a == 2) and (b == 4); // true and false
    cout << hasil << endl;
      
    hasil = (a == 4) and (b == 4); // false and false
    cout << hasil << endl;
    
    
    cout << "Untuk Or" << endl;
    hasil = (a == 2) or (b == 3); // true and true
    cout << hasil << endl;
     
    hasil = (a == 4) or (b == 3); // false and true
    cout << hasil << endl;
     
    hasil = (a == 2) or (b == 4); // true and false
    cout << hasil << endl;
      
    hasil = (a == 4) or (b == 4); // false and false
    cout << hasil << endl;
     
    
    return 0;
}