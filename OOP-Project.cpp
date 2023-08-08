#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Course
{
private:
    string name;
    double price;
    int enrolledStudentsCount; // Added member variable

public:
    Course(string name1, double price1)
    {
        name = name1;
        price = price1;
        enrolledStudentsCount = 0; // Initialize enrolled students count to 0
    }

    double getPrice() const
    {
        return price;
    }

    string getName() const
    {
        return name;
    }

    void enrollStudent() // Increment enrolled students count
    {
        enrolledStudentsCount++;
    }

    int getEnrolledStudentsCount() const // Provide access to enrolled students count
    {
        return enrolledStudentsCount;
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
        this->name = name;
    }

    string getName() const
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
    double calculateTotalRevenue() const;

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

double CourseManager::calculateTotalRevenue() const
{
    double totalRevenue = 0.0;
    for (const Course &course : courses)
    {
        totalRevenue += course.getPrice() * course.getEnrolledStudentsCount();
    }
    return totalRevenue;
}

int main()
{
    CourseManager manager;

    manager.displayCourses();

    manager.enrollStudentInCourse("Math", "Alice");
    manager.enrollStudentInCourse("Science", "Bob");

    double totalRevenue = manager.calculateTotalRevenue();
    cout << "Total Revenue: $" << totalRevenue << endl;

    return 0;
}
