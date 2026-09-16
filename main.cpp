#include <iostream>
using namespace std;

int main()
{
    int batteryLevel;

    char leftMotor;
    char rightMotor;
    char emergencyStop;

    // Additional sensors added as part of the sensor-health feature
    char ultrasonicSensor;
    char irSensor;
    char imuSensor;
    string operatorName;

    bool robotReady = true;

    cout << "====================================" << endl;
    cout << "          ROBOCHECK v1.0" << endl;
    cout << "     Robot Pre-Run Diagnostics" << endl;
    cout << "====================================" << endl;
    cout << "\nEnter operator name: ";

    cout << "\nEnter operator name: ";
    cin >> operatorName;
    // Basic power check
    cout << "\nEnter battery level (%): ";
    cin >> batteryLevel;
    // Battery percentage must remain within its valid range.
    if (batteryLevel < 0 || batteryLevel > 100)
{
    cout << "Invalid battery level. Enter a value between 0 and 100." << endl;
    return 1;
}

    // Drive system checks
    cout << "Is the left motor responding? (y/n): ";
    cin >> leftMotor;

    cout << "Is the right motor responding? (y/n): ";
    cin >> rightMotor;

    // Safety check
    cout << "Is the emergency stop functional? (y/n): ";
    cin >> emergencyStop;

    // Sensor checks added in the feature branch
    cout << "\n------ SENSOR SYSTEM ------" << endl;

    cout << "Is the ultrasonic sensor responding? (y/n): ";
    cin >> ultrasonicSensor;

    cout << "Is the IR sensor responding? (y/n): ";
    cin >> irSensor;

    cout << "Is the IMU responding? (y/n): ";
    cin >> imuSensor;
    cout << "\nOperator: " << operatorName << endl;

    cout << "\n------ DIAGNOSTIC REPORT ------" << endl;

    // Check battery condition
    if (batteryLevel >= 30)
    {
        cout << "Battery           : OK" << endl;
    }
    else
    {
        cout << "Battery           : LOW - RECHARGE REQUIRED" << endl;
        robotReady = false;
    }

    // Check both drive motors
    if (leftMotor == 'y' || leftMotor == 'Y')
    {
        cout << "Left Motor        : OK" << endl;
    }
    else
    {
        cout << "Left Motor        : NOT RESPONDING" << endl;
        robotReady = false;
    }

    if (rightMotor == 'y' || rightMotor == 'Y')
    {
        cout << "Right Motor       : OK" << endl;
    }
    else
    {
        cout << "Right Motor       : NOT RESPONDING" << endl;
        robotReady = false;
    }

    // Emergency stop is an important safety check
    if (emergencyStop == 'y' || emergencyStop == 'Y')
    {
        cout << "Emergency Stop    : OK" << endl;
    }
    else
    {
        cout << "Emergency Stop    : FAILED" << endl;
        robotReady = false;
    }


    cout << "\n------ SENSOR HEALTH ------" << endl;

    if (ultrasonicSensor == 'y' || ultrasonicSensor == 'Y')
    {
        cout << "Ultrasonic Sensor : OK" << endl;
    }
    else
    {
        cout << "Ultrasonic Sensor : NOT RESPONDING" << endl;
        robotReady = false;
    }

    if (irSensor == 'y' || irSensor == 'Y')
    {
        cout << "IR Sensor         : OK" << endl;
    }
    else
    {
        cout << "IR Sensor         : NOT RESPONDING" << endl;
        robotReady = false;
    }

    if (imuSensor == 'y' || imuSensor == 'Y')
    {
        cout << "IMU               : OK" << endl;
    }
    else
    {
        cout << "IMU               : NOT RESPONDING" << endl;
        robotReady = false;
    }


    cout << "\n------ DEPLOYMENT STATUS ------" << endl;

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
