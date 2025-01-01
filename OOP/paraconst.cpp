#include <iostream>
using namespace std;

class Students{
public:
    string name;
    string admission_number;
    string course;
    int year_of_admission;

    void student_details(){
        cout<<"Student name: "<<name<<endl;
        cout<<"Admission: "<<admission_number<<endl;
        cout<<"Course: "<<course<<endl;
        cout<<"Year of Admission: "<<year_of_admission<<endl;

    }

    Students(string N, string ADM, string C, int YOA){
        name = N;
        admission_number = ADM;
        course = C;
        year_of_admission = YOA;
    }

};

int main(){
    Students student1 = Students("Stephen Mwangi", "C0244014032023", "Computer Science", 2023);
    student1.student_details();
}