#include <iostream>
using namespace std;

class Employee{

private: 
    string Name;
    string Company;
    int Age;


public:
    //creating getters and setters
    void setName(string N){
        Name = N;
    }
    string getName(){
        return Name;
    }

    void setCompany(string C){
        Company = C;
    }
    string getCompany(){
        return Company;
    }

    void setAge(int A){
        if(A >=18)
        Age = A;
    }
    int getAge(){
        return Age;
    }

    void Employee_Details(){
        cout<<"Name: "<< Name << endl;
        cout<<"Company: "<< Company<<endl;
        cout<<"Age: "<< Age<< endl;
        cout<<endl;
    }

    Employee(string N,string C, int A){
        Name = N;
        Company = C;
        Age = A;
    }
};
int main(){
    Employee employee1 = Employee("Shem Ndaro Ngugi", "Techsol Kenya", 35);
    employee1.Employee_Details();

    employee1.setAge(10);
    cout<<employee1.getName() << " is "<<employee1.getAge() <<" years old"<< endl;
    return 0;
}