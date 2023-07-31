#include <iostream>
#include <unistd.h>
#include <string>

using namespace std;

const unsigned int second = 1000000; // One million microseconds in a second

void countdown() {
    int days; // Declare days
    int hours; // Declare hours
    int minutes; // Declare minutes
    int seconds; // Declare seconds
    string choice; // Make your choice

    // Input choice
    cout << "Would you like to set your timer for days, hours, minutes or seconds?" << endl;
    cin >> choice;

    if (choice == "seconds" || choice == "Seconds") {
        cout << "How many seconds? ";
        cin >> seconds; // Input seconds

        while (seconds >= 0) {
            cout << "Seconds: " << seconds << endl; // Display time remaining
            seconds--; // Reduce seconds
            usleep(second); // Wait a second
            system("clear"); // Clear the screen and repeat
            
            if (seconds == 0) { // When the timer's done
                break;
            }
        }
    }
    else if (choice == "minutes" || choice == "Minutes") {
        cout << "How many minutes? " << endl; // Input minutes
        cin >> minutes;
        cout << "How many seconds? " << endl; // Input seconds
        cin >> seconds;

        while (minutes >= 0 && seconds >= 0) {
            // Display time remaining
            cout << "Minutes: " << minutes << endl;
            cout << "Seconds: " << seconds << endl;
            seconds--; // Reduce seconds
            usleep(second); // Wait a second
            system("clear"); // Change to cls if on Windows

            // Reduce the number of minutes after 60 seconds
            if (seconds < 0) {
                minutes--; // Reduce minutes
                seconds = 59; // Reset seconds
            
            //When the timer's done
            if (minutes == 0 && seconds == 0) {
                break;
            }
        }
        }
    }
    
    else if (choice == "hours" || choice == "Hours") {
        cout << "How many hours? " << endl; // Input hours
        cin >> hours;
        cout << "How many minutes? " << endl; // Input minutes
        cin >> minutes;
        cout << "How many seconds? " << endl; // Input seconds
        cin >> seconds;
    }
    
    else if (choice == "days" || choice == "Days") {
        cout << "How many days? " << endl; //Input days
        cin >> days;
        cout << "How many hours? " << endl; //Input hours
        cin >> hours;
        cout << "How many minutes? " << endl; //Input minutes
        cin >> minutes;
        cout << "How many seconds? " << endl; //Input seconds
        cin >> seconds;
    }

        while (days >= 0 && hours >= 0 && minutes >= 0 && seconds >= 0) {
            // Display time remaining
            cout << "Days: " << days << endl;
            cout << "Hours: " << hours << endl;
            cout << "Minutes: " << minutes << endl;
            cout << "Seconds: " << seconds << endl;
            seconds--; // Reduce seconds
            usleep(second); // Wait a second
            system("clear"); // Clear the screen

            if (seconds < 0) {
                minutes--; // Reduce minutes
                seconds = 59; // Reset seconds
            }

            if (minutes < 0) {
                hours--; // Reduce hours
                minutes = 59; // Reset minutes
            
            if (hours < 0) {
                days--; //Reduce days
                hours = 23; //Reset hours
                minutes = 59; //Reset minutes
                seconds = 59; //Reset seconds
            }

            }
            // When the timer is done
            if (hours == 0 && minutes == 0 && seconds == 0) {
                break;
            }
        }
    }

int main() {
    
    countdown(); // Call the function

    return 0;
}
