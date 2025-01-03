#include <iostream>
using namespace std;

//contract
//rule - for any class that decides to sign this contract they will have to provide implementation for a method called AskForPromotion
//Abstraction
class AbstractEmployee{
    //make it obligatory such that forces any class that signs the contract  to implement the following method
    //this is done by making the method a pure virtual function 
   virtual  void AskForPromotion() = 0; //pure virtual function
};

class Employee:AbstractEmployee{ //signing the contract
//provide implementation for the method in line 10
//encapsulation
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


//provide implementation for the method in line 10 (Abstraction)
    void AskForPromotion(){
        if(Age > 30){
            cout<<Name<<" got promoted"<<endl;
        }
       
        else{
            cout<<Name<<" Sorry you are not Eligible for a promotion"<<endl;
        }
        cout<<endl;
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

    Employee employee2 = Employee("Heritage Nicole", "Microsoft", 22);
    employee2.Employee_Details();

    employee1.AskForPromotion();
    employee2.AskForPromotion();

    return 0;
}