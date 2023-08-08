#include <iostream>
using namespace std;

class Student
{
private:
    int studentId;
    string studentName;
    int age;
    float score;

public:

    Student(int, string, int, float);
    void display()
    {
        cout << "details of student-" << endl;
        cout<<studentId<<" "<<studentName<<" "<<age<<" "<<score<<endl;
    }
};

Student::Student(int Id, string name, int a, float scr)
{
    studentId = Id;
    studentName = name;
    age = a;
    score = scr;
}

class StudentRecordManager
{
    Student Std[100];
    int noOfOtudent;

public:
    void addNewStudent(int Id, string name, int a, float scr)
    {
    }
};
int main()
{
   

Student s1(1,"rafi",20,50.6);
Student s2(2,"rafi",20,50.6);
Student s3(3,"rafi",20,50.6);
Student s4(4,"rafi",20,50.6);
Student s5(5,"rafi",20,50.6);
    // Student std[100];

    // for (int i = 0; i < 2; i++)
    // {
    //     cout << "enter info if student--" << i + 1 << endl;
    //     int ID;
    //     string name;
    //     int age;
    //     float score;
    //     cin >> ID >> name >> age >> score;
    //     Student ai(ID, name, age, score);
    // }

// a0.display();
    // a1.display();
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();
}