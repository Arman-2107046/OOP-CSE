#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Course {
private:
    string courseName;
    float coursePrice;

public:
    Course( string name, float price) 
    {
    courseName=name;
     coursePrice=price;

    }

    string getName()  {
        return courseName;
    }

    float getPrice() {
        return coursePrice;
    }
};

class Student {
private:
    string studentName;
    int studentID;
    vector<Course> enrolledCourses;

public:
    Student(string name, int id)
{
     studentName=name;
      studentID=id;
}
    void enrollCourse( Course& course) {
        enrolledCourses.push_back(course);
    }

    void displayInfo()  {
        cout << "Student Name: " << studentName << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Enrolled Courses:" << endl;
        for (Course& course : enrolledCourses) {
            cout << "Course Name: " << course.getName() << ", Course Price: " << course.getPrice() << endl;
        }
    }
};

int main() {
    Course mathCourse("Mathematics", 100.0);
    Course physicsCourse("Physics", 150.0);
    Course chemistryCourse("Chemistry", 120.0);

    Student student1("John Doe", 1001);
    student1.enrollCourse(mathCourse);
    student1.enrollCourse(physicsCourse);

    Student student2("Jane Smith", 1002);
    student2.enrollCourse(chemistryCourse);

    cout << "Student 1 Information:" << endl;
    student1.displayInfo();
    cout << endl;

    cout << "Student 2 Information:" << endl;
    student2.displayInfo();

    return 0;
}
