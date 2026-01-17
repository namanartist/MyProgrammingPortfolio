#include <iostream>
using namespace std;
struct person
{
    string first_name;
    string last_name;
    int age;
    float salary;
};
int main()
{
    person p1;
    cout << "enter first name :";
    cin >> p1.first_name;
    cout << "enter last name :";
    cin >> p1.last_name;
    cout << "enter age: ";
    cin >> p1.age;
    cout << "enter salary :";
    cin >> p1.salary;
    cout << "/nDisplay Information" << endl;
    cout << "enter first name :" << p1.first_name << endl;
    cout << "enter last name :" << p1.last_name << endl;
    cout << "enter age: " << p1.age << endl;
    cout << "enter salary :" << p1.salary << endl;
    return 0;
}
