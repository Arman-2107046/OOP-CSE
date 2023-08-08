#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Student class with attributes
class Chatro
{
private:
    int ID;
    string Name;
    int Age;
    double Score;

public:
    // Constructor to initialize the attributes
    Chatro(int id, string name, int age, double score)
        : ID(id), Name(name), Age(age), Score(score) {}

    // Destructor
    // ~Chatro()
    // {
    //     cout << "Student " << Name << " with ID " << ID << " has left the university." << endl;
    // }

    // Method to display student details
    void displayDetails()
    {
        cout << "Student ID: " << ID << endl;
        cout << "Student Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "Score: " << Score << endl;
    }

    // Getter for student ID
    int getStudentID() const
    {
        return ID;
    }

    // Getter for student score
    double getScore() const
    {
        return Score;
    }
};

class StudentRecordManager
{
private:
    vector<Chatro> stu;
    int total_students;

public:
    // void set_totalStu(int a)
    // {
    //     total_students = a;
    // }
    // int get_totalStu()
    // {
    //     return total_students;
    // }
    void set_total_stu(int a)
    {
total_students=a;
    }
 void currentStu(Chatro a)
 {
    stu.push_back(a);
 }
    void addStudent(vector<Chatro> &stu)
    {
        int id;
        string name;
        int age;
        double score;

        cin >> id >> name >> age >> score;
        stu.push_back(Chatro(id, name, age, score));
        total_students++;
    }

};



int main()
{
    

    // Chatro a[5] = {
    //     Chatro(1, "a1", 20,90),
    //     Chatro(2, "a2", 22,100),
    //     Chatro(3, "a3", 22,100),
    //     Chatro(4, "a4", 22,10),
    //     Chatro(5, "a5", 22,10)

    // };

    // a[0].displayDetails();


    // for(int i=0;i<5;i++)
    // {
    //     a[i].currentStu(a[i]);
    // }

Student

    return 0;
}
