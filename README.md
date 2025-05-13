# Project Requirements Breakdown (Phased Approach)

This document outlines the step-by-step breakdown of the temperature monitoring system project requirements, structured into five incremental phases.

## Overall Project Goal
To develop a temperature monitoring application with a microcontroller, temperature sensor, LCD screen, and SD card for data logging, with features implemented iteratively across five phases.

## Phase 1: Basic Monitoring and Display

### 1.1. Data Assets

#### 1.1.1. Inputs
*   Temperature data collected by the temperature sensor.
*   User-defined temperature thresholds for alerts (upper and lower thresholds, specific values to be determined during testing/arbitrary for now).

#### 1.1.2. Outputs
*   Temperature display on the LCD (Celsius and Fahrenheit).
*   Simple alert indication (e.g., LED) when upper or lower thresholds are exceeded.
*   Basic data logging to the SD card (e.g., timestamp, temperature in Celsius, temperature in Fahrenheit, alert status).
*   LEDs for basic visual indicators (e.g., power on, logging activity, alert status).

#### 1.1.3. Data Processing and Conversion
*   Conversion of raw sensor data to Celsius using the equation from the sensor datasheet.
*   Conversion from Celsius to Fahrenheit for display.
*   Simple averaging of temperature readings (specific number of readings to average to be determined during testing/arbitrary for now).
*   Simple threshold check: Alert if current averaged temperature > user-defined upper threshold or < user-defined lower threshold (specific values are arbitrary for now).

### 1.2. System Modules (Initial High-Level for Phase 1)
*   Sensor Interface Module
*   Data Processing Module
*   LCD Display Module
*   SD Card Logging Module
*   Alert Module (Basic LED)

## Phase 2: Enhanced Averaging, Filtering, and Alert Logic

### 2.1. Data Assets & Processing
*   **Inputs:** (Potentially more user settings for averaging/filtering parameters)
*   **Outputs:** (Potentially more detailed alerts on LCD)
*   **Data Processing and Conversion:**
    *   Implement more advanced averaging (e.g., moving average over a configurable window).
    *   Introduce basic filtering (e.g., median filter to discard outliers, or simple spike rejection).
    *   Implement alert hysteresis (e.g., use different thresholds for triggering and clearing an alert to prevent rapid on/off cycling around a single threshold point).

### 2.2. System Modules
*   (Refinements to Phase 1 modules, enhanced Data Processing and Alert modules)

## Phase 3: Advanced Alerting and User Interaction

### 3.1. Data Assets & Processing
*   **Inputs:** (More interactive threshold settings, e.g., via buttons or serial commands)
*   **Outputs:** (More descriptive alerts on LCD, potentially different LED patterns for different alerts)
*   **Data Processing and Conversion:**
    *   Implement rate-of-change alerts (e.g., alert if temperature changes too quickly, such as > X degrees per minute, indicating a potential rapid event like a door opening or equipment failure).
    *   Implement time-based threshold alerts (e.g., alert only if temperature remains outside a threshold for a specified duration, like > Y degrees for Z minutes, to avoid alerts for brief fluctuations).

### 3.2. System Modules
*   (Refinements, potentially a dedicated User Interface module for button handling)

## Phase 4: Expanded Data Logging and Potential Connectivity

### 4.1. Data Assets & Processing
*   **Inputs:** (Configuration for logging frequency, data to be logged, etc.)
*   **Outputs:** (More detailed log files with configurable content, potential for data transmission if connectivity is added, e.g., via Wi-Fi or Bluetooth to a remote server or app)
*   **Data Processing and Conversion:**
    *   (Further refinements to data handling for efficient storage and potential transmission)

### 4.2. System Modules
*   (Refinements to SD Card Logging Module, potential for a Communication Module if Wi-Fi/Bluetooth is considered)

## Phase 5: Advanced Features and Refinements

### 5.1. Data Assets & Processing
*   **Inputs:** (Further user configurations for advanced features)
*   **Outputs:** (Comprehensive status displays, advanced alert notifications, e.g., summary reports)
*   **Data Processing and Conversion:**
    *   Explore pattern recognition for alerts (e.g., learn normal daily/hourly temperature fluctuations and alert on unusual deviations from the learned pattern, even if fixed thresholds aren't breached).
    *   Overall system optimization for performance and robustness enhancements.

### 5.2. System Modules
*   (Final refinements and integration of all modules, focus on stability and user experience)

