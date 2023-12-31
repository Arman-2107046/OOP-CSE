#include <bits/stdc++.h>
using namespace std;

class Math
{

private:
    string student_name;
    int student_id;
    float course_price;

public:
    Math() {}

    Math(string name, int id, float price)
    {
        student_name = name;
        student_id = id;
        course_price = price;
    }
};
class Physics
{

private:
    string student_name;
    int student_id;
    float course_price;

public:
    Physics() {}

    Physics(string name, int id, float price)
    {
        student_name = name;
        student_id = id;
        course_price = price;
    }
};
class Chemistry
{

private:
    string student_name;
    int student_id;
    float course_price;

public:
    Chemistry() {}

    Chemistry(string name, int id, float price)
    {
        student_name = name;
        student_id = id;
        course_price = price;
    }
};

class Management
{
private:
    vector<Math> math_record;
    vector<Physics> phy_record;
    vector<Chemistry> chem_record;
    float total_math_revenue = 0;
    float total_phy_revenue = 0;
    float total_chem_revenue = 0;

public:
    int math_stu_no = 0;
    int phy_stu_no = 0;
    int chem_stu_no = 0;

    float get_math_revenue()
    {
        return total_math_revenue;
    }
    float get_phy_revenue()
    {
        return total_phy_revenue;
    }
    float get_chem_revenue()
    {
        return total_chem_revenue;
    }

    void Enrolling()
    {

        int x = 0;

        while (x != 4)
        {
            cout << "--you can do the following--" << endl;
            cout << "1 : to enroll in mathematics" << endl;
            cout << "2 : to enroll in physics" << endl;
            cout << "3 : to enroll in chemistry" << endl;
            cout << "4 : to terminate the process" << endl;

            cin >> x;

            if (x == 1)
            {
                cout << "enter info--" << endl;
                string s;
                int id;
                float price;
                cin >> s >> id >> price;
                math_record.push_back(Math(s, id, price));
                total_math_revenue += price;
                math_stu_no++;
                continue;
            }
            else if (x == 2)
            {
                cout << "enter info--" << endl;

                string s;
                int id;
                float price;
                cin >> s >> id >> price;
                phy_record.push_back(Physics(s, id, price));
                total_phy_revenue += price;
                phy_stu_no++;
                continue;
            }
            else if (x == 3)
            {
                cout << "enter info--" << endl;

                string s;
                int id;
                float price;
                cin >> s >> id >> price;
                chem_record.push_back(Chemistry(s, id, price));
                total_chem_revenue += price;
                chem_stu_no++;
                continue;
            }
            else
            {
                cout << "the process is terminated" << endl;
                break;
            }
        }
    }
    
friend float calcProfit(Management &m);
}
;
// This institution spends 20% of revenue on salary of employees and other expenses and as per government policy this institution is taxed 15% of its profit;
float calcProfit(Management &m)
{
    float total_revenue = m.get_math_revenue() + m.get_phy_revenue() + m.get_chem_revenue();
    float profit_1 = total_revenue - total_revenue * 20.0 / 100; // before taxes
    float Profit = profit_1 - profit_1 * 15.0 / 100;

    return Profit;
}
int main()
{

    Management manager;
    manager.Enrolling();
    int p = 0;
    while (p != 6)
    {

        cout << "1 : to get revenue on math course" << endl;
        cout << "2 : to get revenue on physics course" << endl;
        cout << "3 : to get revenue on math course" << endl;
        cout << "4 : to get total revenue" << endl;
        cout << "5 : to get profit" << endl;
        cout << "6 : to terminate" << endl;
        cin >> p;
        switch (p)
        {
        case 1:
            cout << "math revenue : " << manager.get_math_revenue() << endl;
            break;
        case 2:
            cout << "physics revenue : " << manager.get_phy_revenue() << endl;
            break;
        case 3:
            cout << "chemistry revenue : " << manager.get_chem_revenue() << endl;
            break;
        case 4:
            cout << "total revenue : " << manager.get_math_revenue() + manager.get_phy_revenue() + manager.get_chem_revenue() << endl;
            break;
        case 5:
            cout << "profit : " << calcProfit(manager) << endl;
            break;
        case 6:
            cout << "The process is terminated" << endl;
            break;
        default:
            break;
        }
    }
}