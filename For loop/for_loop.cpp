#include <iostream>
using namespace std;

int main() {
    cout <<"loop satu"<<endl;
    for(int i=1; i <= 10; i++ ){
        cout << "Angka "<<i<< endl;
    }
    cout <<"\nloop dua"<<endl;
    for(int i=1; i <= 10; i +=2 ){
        cout << "Angka "<<i<< endl;
    }
    cout <<"\nloop tiga"<<endl;
    for(int i=1; i >= -10; i-- ){
        cout << "Angka "<< i << endl;
    }
    int total = 0;
    cout <<"\nloop empat"<<endl;
    for(int i=1; i <= 10; i++){
        total += i;
        cout << i << "|| "<< total <<endl;
    }
    return 0;
}