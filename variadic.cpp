#include <iostream>
#include <cstdarg>
using namespace std;

int sum(int count, ...) {
    va_list args;
    va_start(args, count);
    int total = 0;
    for (int i = 0; i < count; ++i) {
        total += va_arg(args, int);
    }
    
    va_end(args);
    return total;
}
int main() {
    cout << "Sum of 3 numbers: " << sum(3, 1, 2, 3) << endl;
    cout << "Sum of 5 numbers: " << sum(5, 10, 20, 30, 40,50) << endl;
    return 0;
}