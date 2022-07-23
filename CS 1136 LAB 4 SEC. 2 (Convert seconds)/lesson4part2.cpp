// Program that converts seconds from the user to its
// equivalent in days, hours, minutes and seconds.

#include <iostream>

using namespace std ;

int main()
{
        // Declare the variables to hold the time.

    long long int totalSeconds ;  // The total seconds to convert.
    long long int days ;  // The equivalent days.
    long long int hours ;  // The equivalent seconds.
    long long int minutes ;  // The equivalent minutes.
    long long int seconds ;  // The equivalent seconds.
    long long int remainingTime ;  // To hold the remaining time in each case.

        // Ask the user to input the total number of seconds.
    cout << "Enter seconds" << endl ;
    cin >> totalSeconds ;

        // Display the user's input to the user.
    cout << "Total seconds: " << totalSeconds << endl << endl ;

        // Display the results to the user.

        // Display output for the condition that the user's input is 0 or less.
    if ( totalSeconds <= 0 )
    {
        cout << "Total seconds must be greater than zero" << endl ;
    }

        // Display output for the condition that
        // the user's input is greater than 0.

    else if ( totalSeconds > 0 )
    {
            // Calculate the equivalent days and get the remainder.
        days = totalSeconds / 86400 ;
        remainingTime = totalSeconds % 86400 ;

            // Calculate the equivalent hours and get the remainder.
        hours = remainingTime / 3600 ;
        remainingTime = remainingTime % 3600 ;

            // Calculate the equivalent minutes and get the remainder(seconds).
        minutes = remainingTime / 60 ;
        remainingTime = remainingTime % 60 ;

            // Assign the remaining time calculated above to seconds.
        seconds = remainingTime ;


        // Nest multiple if statements in order to get desired output.

             // Display the days, discarding those that are 0 or less.
        if ( days > 0 )
            cout << days << " day(s)" << endl ;

            // Display the hours, discarding those that are 0 or less.
        if ( hours > 0 )
            cout << hours << " hour(s)" << endl ;

            // Display the minutes, discarding those that are 0 or less.
        if ( minutes > 0 )
            cout << minutes << " minute(s)" << endl ;

            // Display the seconds, discarding those that are 0 or less.
        if ( seconds > 0 )
            cout << seconds << " second(s)" << endl ;
    }

    return 0;
}
