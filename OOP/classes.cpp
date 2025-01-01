#include <iostream>
using namespace std;

class Employee{
public:
    string name;
    string EmployeeNo;
    int Age;

    void IntroduceYourself(){
        cout<<"Name - "<< name<<endl;
        cout<<"Employee Number - "<< EmployeeNo<<endl;
        cout<<"Age - "<< Age<<endl;
        cout<<endl;
    }
public:
    Employee(string n, string employee_no, int age){
        name = n;
        EmployeeNo = employee_no;
        Age  = age;
        

    }
};

int main()
{
    //invoke constructor
    Employee employee1 = Employee("Shem", "Microsoft", 23);
    employee1.IntroduceYourself();

    Employee employee2 = Employee("Glory", "KNH", 24);
    employee2.IntroduceYourself();

    return 0;
}