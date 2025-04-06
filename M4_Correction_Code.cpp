#include <iostream>
#include <string>
using namespace std;

int main() {
    string dayOfWeek;
    string daysOfWeek[] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    int daysLeft = 0;                   //*****  Two equal signs are for comparison, changed to  one equal sign to assign the zero

    // Input
    cout << "Enter the day of the week (i.e Monday, Tuesday, etc.): ";
    cin >> dayOfWeek;

    // Output1
    if (dayOfWeek == "Sunday") {        //*****  Only one equal sign was used for a comparison, corrected with two signs for comparisons    
        cout << "Weekly assignments are due today, better get to it!" << endl;
    }
    // Repetition control
    else {
        for (int i = 0; i < 6; i++) {   //*****  Used colon instead of semicolon if (dayOfWeek == daysOfWeek[i]) {
                daysLeft = 7 - (i + 1);
                break;
            }
        }
        // Output2
        cout << daysLeft << " day(s) left until Sunday, you still have time to complete your weekly assignments!";                //*****  missing semicolon
    }

    return 0;
}