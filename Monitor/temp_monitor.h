#ifndef MONITOR_TEMP_MONITOR_H_
#define MONITOR_TEMP_MONITOR_H_

#include <stdbool.h>

int temperatureSenseReading();

int temperatureUserThreshold();

int temperatureSenseAvgReading(int* rawReadings);

int temperatureSenseCelcius(int tempAvgReading);

int temperatureSenseFahrenheit(int tempAvgReading);

bool temperatureThreshCheck(int userThresh, int tempReading);

void displayReadingOnLCD(int tempReading);

void displayLED();

void logReadingSDCard(int tempReading);

#endif /* MONITOR_TEMP_MONITOR_H_ */
