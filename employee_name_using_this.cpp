#include <iostream>
#include <string>
using namespace std;

class Employee
{   
    private:
		string employee_name;
		float employee_salary;
	public:
		void setEmployee(string employee_name, float employee_salary);
		void displayEmployee();
};

void Employee::setEmployee(string employee_name, float employee_salary)
{
	this->employee_name = employee_name;
	this->employee_salary = employee_salary;
}	

void Employee::displayEmployee()
{
	cout << "Employee Name: " << employee_name << endl;
	cout << "Employee Salary: " << employee_salary << endl;
}

int main()
{
	Employee my_employee;
	string input_name;
	float input_salary;

	cout << "Enter employee name: ";
	getline(cin, input_name);

	cout << "Enter employee salary: ";
	cin >> input_salary;

	my_employee.setEmployee(input_name, input_salary);
	my_employee.displayEmployee();

	return 0;
}

