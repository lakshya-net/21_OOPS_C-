#include <iostream>
using namespace std;

void print(){cout<<"empty"<<endl;}

template<typename T, typename... Args>
void print(T first, Args... args) {
    cout << first << endl;
    print(args...);
}
int main() {
    print(1, 2.5, "Hello", 'A');
    return 0;
}