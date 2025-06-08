#include "temp_monitor.h"

int temperatureSenseReading()
{
    return 212;
}

int temperatureUserThreshold()
{
    return 45;
}

int temperatureSenseAvgReading(int* rawReadings)
{
    return 100;
}

int temperatureSenseCelcius(int tempAvgReading)
{
    return 25;
}

int temperatureSenseFahrenheit(int tempAvgReading)
{
    return 120;
}

bool temperatureThreshCheck(int userThresh, int tempReading)
{
    return false;
}

void displayReadingOnLCD(int tempReading)
{
    
}

void displayLED()
{
    
}

void logReadingSDCard(int tempReading)
{

}