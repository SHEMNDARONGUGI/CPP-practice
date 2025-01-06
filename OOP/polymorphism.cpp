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
    
    string Company;
    int Age;
protected:
    string Name;

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
            cout<<"Sorry "<<Name<<", you are not Eligible for a promotion"<<endl;
        }
        cout<<endl;
    }

    virtual void Work(){//polymorphism when a virtual function is invoked it check if there is implementation of this function in the derived class and if yes execute that instead
        cout<<Name<<" is checking email, task backlog, performing tasks..."<<endl;
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
//inheritance demonstration
class Developer :public Employee {//make the parent class public so as to access the contract
public:
    string FavoriteLanguage;

    Developer(string N,string C, int A, string favorite_language)
    //Passing the three properties to Employee constructor
    : Employee(N, C, A)
    
    
    {

        FavoriteLanguage = favorite_language;
    }

    void FixBug(){
        cout<<Name<<" fixed bug using "<<FavoriteLanguage<<endl;
    }

    void Work(){//polymorphism
        cout<<Name<<" is writing code in "<< FavoriteLanguage <<endl;
    }
};

class Teacher: public Employee{// add public to access the properties
public:
    string Subject;

    void Prepare_lesson(){
        cout<<Name<<" is preparing "<< Subject << " lesson" <<endl;
    }

    Teacher(string N,string C, int A,string subject) : Employee(N,C,A){
        Subject = subject;
    }

     void Work(){//polymorphism
        cout<<Name<<" is teaching "<<Subject <<endl;
    }
};

//the most common use of polymorphism is when a parent class reference is used to refer to a child class object
int main(){
    Employee employee1 = Employee("Shem Ndaro Ngugi", "Techsol Kenya", 35);
    employee1.Employee_Details();

    employee1.setAge(10);
    cout<<employee1.getName() << " is "<<employee1.getAge() <<" years old"<< endl;

    Employee employee2 = Employee("Heritage Nicole", "Microsoft", 22);
    employee2.Employee_Details();

    employee1.AskForPromotion();
    employee2.AskForPromotion();

    Developer d = Developer("Shem", "IBM", 25 , "Java");
    d.FixBug();
    d.AskForPromotion();

    Teacher t1 = Teacher("Scholar", "Microsoft", 22, "Data Structures and Algorithms");
    t1.Prepare_lesson();
    t1.AskForPromotion();
//polymorphism

// t1.Work();
// d.Work();

   Employee *e1= &d;
   Employee *e2= &t1;

   e1-> Work();
   e2-> Work();
    

    return 0;
}