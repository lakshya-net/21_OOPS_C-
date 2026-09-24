#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;

public:

    // 1. Default Constructor
    Student()
    {
        rollNo = 0;
        name = "Unknown";
        cout << "Default Constructor called" << endl;
    }

    // 2. Parameterized Constructor
    Student(int r, string n)
    {
        rollNo = r;
        name = n;
        cout << "Parameterized Constructor called" << endl;
    }

    // 3. Copy Constructor
    Student(const Student &s)
    {
        rollNo = s.rollNo;
        name = s.name;
        cout << "Copy Constructor called" << endl;
    }

    // Display function
    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }

    // 4. Destructor
    ~Student()
    {
        cout << "Destructor called for " << name << endl;
    }
};

int main()
{
    cout << "Creating object using Default Constructor:" << endl;
    Student s1;
    s1.display();

    cout << "\nCreating object using Parameterized Constructor:" << endl;
    Student s2(101, "Rahul");
    s2.display();

    cout << "\nCreating object using Copy Constructor:" << endl;
    Student s3(s2);
    s3.display();

    cout << "\nEnd of main()" << endl;

    return 0;
}
