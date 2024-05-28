#include <iostream>
#include <string>
using namespace std;

//struct 1
struct aktor{
    string nama;
    int tahun_lahir;
};


struct film{
    string judul;
    string genre;
    int tahun;
    //struct aktor
    aktor pemeran_1;
    aktor pemeran_2;
};

int main(){
    aktor aktor1,aktor2;
    film film1, film2;
    
    
    //aktor 1
    aktor1.nama = "Asep Bulog";
    aktor1.tahun_lahir = 1933;
    
    //aktor 2
    aktor2.nama = "Asep dace";
    aktor2.tahun_lahir = 1945;
    
    //film 1
    film1.judul = "Talun Underground";
    film1.genre = "Psikilogi";
    film1.tahun = 2018;
    film1.pemeran_1 = aktor1;
    film1.pemeran_2 = aktor2;
    
     //film 2
    film2.judul = "Asep Diary Book";
    film2.genre = "Mysterius";
    film2.tahun =1900;
    film2.pemeran_1 = aktor1;
    film2.pemeran_2 = aktor2;
    
    
    
    //out
    cout << film1.judul << endl;
    cout << film1.genre << endl;
    cout << film1.tahun << endl;
    cout << film1.pemeran_1.nama << endl;
    cout << film1.pemeran_2.nama << endl;
    
    
    cout << film2.judul << endl;
    cout << film2.genre << endl;
    cout << film2.tahun << endl;
    cout << film2.pemeran_1.nama << endl;
    cout << film2.pemeran_2.nama << endl;
    return 0;
}