#include <iostream>
#include <iomanip>
using namespace std;

char getGrade(float percentage)
{
    if (percentage >= 90)
        return 'A';
    else if (percentage >= 80)
        return 'B';
    else if (percentage >= 70)
        return 'C';
    else if (percentage >= 60)
        return 'D';
    else if (percentage >= 50)
        return 'E';
    else
        return 'F';
}

int main()
{
    string name, roll;
    float m1, m2, m3, m4, m5;

    cout << "===== MARKSHEET MAKER =====\n\n";

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Roll Number: ";
    getline(cin, roll);

    cout << "\nEnter marks for 5 subjects (out of 100):\n";
    cout << "Subject 1: ";
    cin >> m1;
    cout << "Subject 2: ";
    cin >> m2;
    cout << "Subject 3: ";
    cin >> m3;
    cout << "Subject 4: ";
    cin >> m4;
    cout << "Subject 5: ";
    cin >> m5;

    float total = m1 + m2 + m3 + m4 + m5;
    float percentage = total / 5;
    char grade = getGrade(percentage);

    cout << "\n\n===== STUDENT MARKSHEET =====\n";
    cout << "Name        : " << name << endl;
    cout << "Roll Number : " << roll << endl;
    cout << "-----------------------------\n";
    cout << fixed << setprecision(2);
    cout << "Marks Obtained:\n";
    cout << "Subject 1: " << m1 << endl;
    cout << "Subject 2: " << m2 << endl;
    cout << "Subject 3: " << m3 << endl;
    cout << "Subject 4: " << m4 << endl;
    cout << "Subject 5: " << m5 << endl;

    cout << "-----------------------------\n";
    cout << "Total Marks : " << total << " / 500" << endl;
    cout << "Percentage  : " << percentage << "%" << endl;
    cout << "Grade       : " << grade << endl;
    cout << "-----------------------------\n";

    if (grade == 'F')
        cout << "Result: FAIL";
    else
        cout << "Result: PASS";

    return 0;
}
