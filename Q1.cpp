//.Create a class which stores employee name,id and salary Derive two classes from 
//‘Employee’ class: ‘permanent’ and ‘contractual’. The ‘Permanent’ class stores DA, and basic salary. The ‘contractual’ class stores the number of hours and pay per hour. 
//Calculate the salary of a regular employee and a par-time employee.
#include<iostream>
using namespace std;
class Employee
{
    char name[20];
    int id;
    float salary;
    public:
    void getdata();
    void putdata();
};
void Employee::getdata()
{
    cout<<"Enter the name of the employee"<<endl;
    cin>>name;
    cout<<"Enter the id of the employee"<<endl;
    cin>>id;
    cout<<"Enter the salary of the employee"<<endl;
    cin>>salary;
}
void Employee::putdata()
{
    cout<<"The name of the employee is "<<name<<endl;
    cout<<"The id of the employee is "<<id<<endl;
    cout<<"The salary of the employee is "<<salary<<endl;
}
class Permanent:public Employee
{
    float da;
    float basic;
    public:
    void getdata();
    void putdata();
};
void Permanent::getdata()
{
    Employee::getdata();
    cout<<"Enter the DA of the employee"<<endl;
    cin>>da;
    cout<<"Enter the basic salary of the employee"<<endl;
    cin>>basic;
}
void Permanent::putdata()
{
    Employee::putdata();
    cout<<"The DA of the employee is "<<da<<endl;
    cout<<"The basic salary of the employee is "<<basic<<endl;
}
class Contractual:public Employee
{
    int hours;
    float pay;
    public:
    void getdata();
    void putdata();
};
void Contractual::getdata()
{
    Employee::getdata();
    cout<<"Enter the number of hours worked by the employee"<<endl;
    cin>>hours;
    cout<<"Enter the pay per hour of the employee"<<endl;
    cin>>pay;
}
void Contractual::putdata()
{
    Employee::putdata();
    cout<<"The number of hours worked by the employee is "<<hours<<endl;
    cout<<"The pay per hour of the employee is "<<pay<<endl;
}
int main()
{
    Permanent p;
    Contractual c;
    p.getdata();
    c.getdata();
    p.putdata();
    c.putdata();
    return 0;
}