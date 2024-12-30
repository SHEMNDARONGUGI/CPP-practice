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
};

int main()
{
    Employee employee1;
    // employee1.name = "Shem";
    // employee1.EmployeeNo = "ICT-1201";
    // employee1.Age = 23;
    employee1.IntroduceYourself();

    Employee employee2;
    // employee2.name = "Steve";
    // employee2.EmployeeNo = "HR-2341";
    // employee2.Age = 35;
    employee2.IntroduceYourself();
}