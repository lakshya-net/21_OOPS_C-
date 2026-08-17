#include <iostream>
using namespace std;
//call  by value
void doubleValue(int &a) {
    a = 2 * a;
    cout << "Inside Value: a = " << a << endl;
}
//call by reference
void dbleValue(int &a) {
    a = 2 * a;
    cout << "Inside Value: a = " << a << endl;
}
//call by address
void doValue(int *a) {
    *a = 2 * (*a);
    cout << "Inside Value: a = " << *a << endl;
}
int main() {
    int x = 5;
     cout << "Original val of: x = " << x << endl;
     doubleValue(x);
     cout << "Original val of: x = " << x << endl;
     dbleValue(x);
     cout << "Original val of: x = " << x << endl;
     doValue(&x);
     

    return 0;
}