#include <iostream>
using namespace std;


int fungsiiterasi(int a, int b){
    int hasil = a;
    for(int i = 1; i < b; i++){
        hasil = hasil * a;
    }
    return hasil;
}

int fungsiRekursif(int a,int b){
    if(b <= 1){
        return a;
    }else{
    return a * fungsiRekursif(a,(b - 1));
    }
}
int main() {
    int a;
    int b;
    cout << "Masukan angka: ";
    cin >> a;
    cout << "Masukan Pangkat: ";
    cin >> b;
    cout << "hasil iterasi adalah :" << fungsiiterasi(a,b) <<endl;
    cout << "hasil rekursif adalah :" << fungsiRekursif(a,b) <<endl;
    return 0;
}