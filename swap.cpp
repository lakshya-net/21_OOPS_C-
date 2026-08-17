#include <iostream>
using namespace std;
//call  by value
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
//call by reference
void swap2(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
//call by address
void swap3(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x = 5,y=10;
        cout<<"call by value"<<endl;
     cout << "Original val of: x = " << x << endl;
     cout << "Original val of: y = " << y << endl;
     swap(x,y);
     cout << "After swap: x = " << x << endl;
     cout << "After swap: y = " << y << endl;


        cout<<"call by reference"<<endl;
     cout << "Original val of: x = " << x << endl;
     cout << "Original val of: y = " << y << endl;
     swap2(x,y);
     cout << "After swap: x = " << x << endl;
     cout << "After swap: y = " << y << endl;

        cout<<"call by address"<<endl;
     cout << "Original val of: x = " << x << endl;
     cout << "Original val of: y = " << y << endl;
     swap3(&x,&y);
     cout << "After swap: x = " << x << endl;
     cout << "After swap: y = " << y << endl;

    return 0;
}