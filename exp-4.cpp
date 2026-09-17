#include <iostream> 

#include <vector> 

using namespace std; 

 

int main() 

{ 

    int n; 

 

    cout << "Enter number of elements: "; 

    cin >> n; 

 

    vector<int> numbers(n); 

 

    // Input using range-based for loop 

    cout << "Enter " << n << " elements: "; 

 

    for (auto &x : numbers) 

    { 

        cin >> x; 

    } 

 

    // Display using range-based for loop 

    cout << "Elements are: "; 

 

    for (auto x : numbers) 

    { 

        cout << x << " "; 

    } 

 

    return 0; 

} 

 