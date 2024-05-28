#include <iostream>
using namespace std;
int kuadrat(int x){
    int y = x * x;
    return y;
}
int main() {
    int input, hasil;
    cout << "Program menghitung kuadrat - x:";
    cin >> input;
    hasil=kuadrat(input);
    cout <<hasil<<endl;
    return 0;
}