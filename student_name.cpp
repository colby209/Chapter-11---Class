#include <iostream>
using namespace std;

class Student
{
    private:
        string student_name;

    public:
        Student();
        void display_name();
};

Student::Student()
{
    student_name = "Unknown";
}

void Student::display_name()
{
    cout << "Student Name: " << student_name << endl;
}

int main()
{
    Student student_object;
    
    student_object.display_name();

    return 0;
}

