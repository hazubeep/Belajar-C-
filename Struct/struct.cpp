#include <iostream>
#include <string>
using namespace std;


//struct
struct buah{
    string warna;
    int harga;
    string rasa;
    float berat;
};

int main() {
    buah apel;
    apel.warna="merah";
    apel.berat = 250.50f;
    apel.harga = 50000;
    apel.rasa = "manis keset";
    
    buah jeruk;
    jeruk.warna="Oranye";
    jeruk.berat = 150.50;
    jeruk.harga = 25000;
    jeruk.rasa = "Asam";
    
    cout << apel.warna << endl;
    cout << apel.berat << endl;
    cout << apel.harga << endl;
    cout << apel.rasa << endl;
    
    cout << jeruk.warna << endl;
    cout << jeruk.berat << endl;
    cout << jeruk.harga << endl;
    cout << jeruk.rasa << endl;
    
    cin.get();
    return 0;
}