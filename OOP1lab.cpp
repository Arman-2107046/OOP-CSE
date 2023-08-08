#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Course
{
private:
    string name;
    double price;

public:
    Course(string name1, double price1)
    {
        name = name1;
        price = price1;
    }
    double getPrice() const
    {
        return price;
    }

    string getName() const
    {
        return name;
    }
};

class Student
{
private:
    string name;
    vector<Course *> enrolledCourses;

public:
    Student(string name)
    {
        name = name;
    }

    string getName()
    {
        return name;
    }
    void enroll(Course &course)
    {
        enrolledCourses.push_back(&course);
    }
};

class CourseManager
{
public:
    CourseManager();

    void displayCourses();
    void enrollStudentInCourse(const string &courseName, const string &studentName);

private:
    vector<Course> courses;
    vector<Student> students;
};

CourseManager::CourseManager()
{
    courses.push_back(Course("Math", 100.0));
    courses.push_back(Course("Science", 120.0));
    courses.push_back(Course("History", 80.0));
    courses.push_back(Course("Programming", 150.0));

    students.push_back(Student("Alice"));
    students.push_back(Student("Bob"));
}

void CourseManager::displayCourses()
{
    cout << "Available courses:" << endl;
    for (const Course &course : courses)
    {
        cout << "- " << course.getName() << " ($" << course.getPrice() << ")" << endl;
    }
}

void CourseManager::enrollStudentInCourse(const string &courseName, const string &studentName)
{
    for (Course &course : courses)
    {
        if (course.getName() == courseName)
        {
            for (Student &student : students)
            {
                if (student.getName() == studentName)
                {
                    student.enroll(course);
                    cout << studentName << " enrolled in " << courseName << endl;
                    return;
                }
            }
            cout << "Student not found." << endl;
            return;
        }
    }
    cout << "Course not found." << endl;
}

int main()
{
    CourseManager manager;

    manager.displayCourses();

    manager.enrollStudentInCourse("Math", "Alice");
    manager.enrollStudentInCourse("Science", "Bob");

    return 0;
}
