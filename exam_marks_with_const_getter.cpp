#include <iostream>
#include <string>
using namespace std;

class Exam
{
    private:
        float marks;

    public:
        void setMarks(float marks);
        float getMarks() const;
};

void Exam::setMarks(float marks)
{
	this->marks = marks;
}

float Exam::getMarks() const
{
	return marks;
}

int main()
{
    Exam my_exam;
    float input_marks;

    cout << "Enter marks: ";
    cin >> input_marks;

    my_exam.setMarks(input_marks);

    cout << "Marks: " << my_exam.getMarks() << endl;    

    return 0;
}

