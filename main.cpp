#include <iostream>
using namespace std;

int main()
{
    int batteryLevel;
    char leftMotor, rightMotor, emergencyStop;
    bool robotReady = true;

    cout << "====================================" << endl;
    cout << "          ROBOCHECK v1.0" << endl;
    cout << "     Robot Pre-Run Diagnostics" << endl;
    cout << "====================================" << endl;

    // Collect the basic checks required before a robot run.
    cout << "\nEnter battery level (%): ";
    cin >> batteryLevel;

    cout << "Is the left motor responding? (y/n): ";
    cin >> leftMotor;

    cout << "Is the right motor responding? (y/n): ";
    cin >> rightMotor;

    cout << "Is the emergency stop functional? (y/n): ";
    cin >> emergencyStop;

    cout << "\n------ DIAGNOSTIC REPORT ------" << endl;

    if (batteryLevel >= 30)
    {
        cout << "Battery          : OK" << endl;
    }
    else
    {
        cout << "Battery          : LOW" << endl;
        robotReady = false;
    }

    if (leftMotor == 'y' || leftMotor == 'Y')
    {
        cout << "Left Motor       : OK" << endl;
    }
    else
    {
        cout << "Left Motor       : NOT RESPONDING" << endl;
        robotReady = false;
    }

    if (rightMotor == 'y' || rightMotor == 'Y')
    {
        cout << "Right Motor      : OK" << endl;
    }
    else
    {
        cout << "Right Motor      : NOT RESPONDING" << endl;
        robotReady = false;
    }

    if (emergencyStop == 'y' || emergencyStop == 'Y')
    {
        cout << "Emergency Stop   : OK" << endl;
    }
    else
    {
        cout << "Emergency Stop   : FAILED" << endl;
        robotReady = false;
    }

    cout << "\n------ FINAL STATUS ------" << endl;

    if (robotReady)
    {
        cout << "Robot Status: READY FOR DEPLOYMENT" << endl;
    }
    else
    {
        cout << "Robot Status: NOT READY" << endl;
    }

    return 0;
}
