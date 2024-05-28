#include <iostream>
using namespace std;
int main() {
    int a = 1;
    cout << numeric_limits<int>::max()<<endl;
    cout << numeric_limits<int>::min()<<endl;
    cout << sizeof (a) << " byte" <<endl;
    return 0;
}