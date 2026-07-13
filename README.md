# RGB Color Monitor Web Application

## Project Title
RGB Color Monitor Web Application using Arduino Nano 33 BLE Sense

## Overview
This project is an IoT-based web application that reads RGB color data from the built-in APDS9960 Color Sensor of the Arduino Nano 33 BLE Sense. The Arduino sends real-time sensor data to a Python Flask server through serial communication (PySerial), and the web application displays the RGB values along with a live color preview.

## Features

- Real-time RGB color monitoring
- Live web dashboard
- Flask backend
- PySerial communication
- Responsive HTML/CSS interface
- Live color visualization
- Arduino Nano 33 BLE Sense support

## Hardware Used

- Arduino Nano 33 BLE Sense
- Built-in APDS9960 RGB Color Sensor
- USB Cable

## Software Used

- Arduino IDE
- Python
- Flask
- PySerial
- HTML
- CSS
- JavaScript

## Project Structure

```
RGB-Color-Monitor-WebApp/
│
├── app.py
├── requirements.txt
├── README.md
│
├── templates/
│   └── index.html
│
├── static/
│   └── style.css
│
└── Arduino/
    └── RGB_Color_Sensor.ino
```

## Installation

### Install Python libraries

```bash
pip install flask pyserial
```

### Upload Arduino Code

Open the Arduino sketch and upload it to the Arduino Nano 33 BLE Sense.

### Run Flask

```bash
python app.py
```

Open your browser:

```
http://127.0.0.1:5000
```

## Future Scope

- AI-based Color Classification
- Database Storage
- Live Charts
- Cloud IoT Integration
- Mobile Dashboard

## Author

Saras Vivek Sankhe

MIT ADT University
