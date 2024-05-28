#include <iostream>
#include <string>
using namespace std;


int main() {
    string kata("ucup");
    string input;
    
    
    while(true){
        cout << "masukan nama pelajar :";
        cin >> input;
        if(input == kata){
            cout << "nama nya adalah :"<< input << endl;
            cout << "Hore Benar!!!" << endl;
            break;
        }else{
            cout << "Yahh salah" << endl;
        }
    }
    cout << "Program selesai" << endl;
    return 0;
}