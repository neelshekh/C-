#include <iostream >
using namespace std;

// class car
// {
// public:
//     string brand, model;

//     int mileage = 0;

//     void drive(int distance)
//     {

//         mileage += distance;
//     }

//     void show_data()
//     {
//         cout << "Brand" << brand << endl;
//         cout << "Model" << model << endl;
//         cout << "Distance driven" << mileage << " miles" << endl;
//     }
// };

// int main()
// {
//     car my_car;
//     my_car.brand = " honda";
//     my_car.model = " accord";
//     my_car.drive(50);

//     my_car.show_data();
// }

// class Employee
// {
// public:
//     string eId, name;
//     int salary = 0;

//     void set_data(string id, string emp_name, int emp_salary)
//     {
//         eId = id;
//         name = emp_name;
//         salary = emp_salary;
//     }

//     void show_data()
//     {
//         cout << "Employee ID: " << eId << endl;
//         cout << "Name: " << name << endl;
//         cout << "Salary: $" << salary << endl;
//     }
// };

// int main()
// {
//     Employee emp;
//     emp.set_data("E123", "John Doe", 50000);
//     emp.show_data();
//}

// class Employee
// {
// public:
//     string eId, name;
//     int salary = 0;

//     void set_data(string id, string emp_name, int emp _salary)
//     {
//         eId = id;
//         name = emp_name;
//         salary = emp_salary;
//     }
//     void show_data()
//     {
//         cout << " employee ID :" << eId << endl;
//         cout << "Name :" << name << endl;
//         cout << " Salary: $" << salary << endl;
//     }
// };
// int main()
// {
//     Employee emp;
//     emp.set_data(" e123", " neel dev", 50000);
//     emp.show_data();
// }

class Student
{
public:
    string name = sId;
    int marks = 0;

    void set_data(string id, string stu_name, int stu_marks)
    {
        sId = id;
        name = stu_name;
        marks = stu_marks;
    }
    void show_data()
    {
        cout << " Student ID:" << sId << endl;
        cout << " Name :" << name << endl;
        cout << " Marks " << marks << endl;
    }
};
int main()
{
    Student stu;
    stu.set_data("L20317 ", " neel shekhar", 342);
    stu.show_data();
}

class Student
{
public:
    string name = sId;
    int marks = 0;

    void set_data(string id, string stu_name, int stu_marks)
    {
        name = stu_name;
        marks = stu_marks;
    }
    void show_data()
    {
        cout << "Student ID: " << sId << endl;
        cout << " Nmae :" << name << endl;
        cout << " Marks " << marks << endl;
