#include <iostream>
using namespace std;
int main() {
    float a,b,hasil;
    char aritmatika;
   
    cout << "Selamat Datang Di Program Kalkulator Sederhana!" << endl;
    cout << "Masukan angka Pertama : ";
    cin >> a;
    cout << "Masukan operator +,-,*,/ : ";
    cin >> aritmatika;
    cout << "Masukan angka kedua : ";
    cin >> b;
    switch(aritmatika){
        case '+' :
        hasil = a + b;
        cout << a << " + " << b << " = " << hasil << endl;
        break;
        
        case '-' :
        hasil = a - b;
        cout << a << " - " << b << " = " << hasil << endl;
        break;
        
        case '*' :
        hasil = a * b;
        cout << a << " * " << b << " = " << hasil << endl;
        break;
        
        case '/' :
        hasil = a / b;
        cout << a << " / " << b << " = " << hasil << endl;
        break;
        default : cout <<"Operator yang anda masukan salah"<< endl;
    }
    return 0;
}