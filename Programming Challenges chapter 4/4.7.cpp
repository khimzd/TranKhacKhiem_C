#include <iostream>
using namespace std;

int main() {
    // Ask the user to enter the number of seconds
    int seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;

    // Calculate the number of minutes, hours, and days
    int minutes = seconds / 60;
    int hours = seconds / 3600;
    int days = seconds / 86400;

    // Display the results
    if (seconds >= 60) {
        cout << "Minutes: " << minutes << endl;
    }
    if (seconds >= 3600) {
        cout << "Hours: " << hours << endl;
    }
    if (seconds >= 86400) {
        cout << "Days: " << days << endl;
    }

    return 0;
}