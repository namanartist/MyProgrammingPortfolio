#include <iostream>
using namespace std;
int main()
{
    int numbers[5];
    cout << "Enter 5 numbers: " << endl;

    // Store input from user to array
    for (int i = 0; i < 5; ++i)
    {
        cin >> numbers[i];
    }

    cout << "The numbers are: ";

    // Print array elements
    for (int n = 0; n < 5; ++n)
    {
        cout << numbers[n] << " ";
    }

    cout << endl;
    return 0;
}
