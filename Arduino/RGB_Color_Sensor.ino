#include <Arduino_APDS9960.h>
#include <mbed.h>

using namespace mbed;

// RGB values
int r = 0, g = 0, b = 0;

// Watchdog instance
Watchdog &watchdog = Watchdog::get_instance();

// Counter used only to demonstrate WDT reset
int counter = 0;

void setup() {

  Serial.begin(9600);

  while (!Serial);

  if (!APDS.begin()) {
    Serial.println("Error initializing APDS9960!");
    while (1);
  }

  Serial.println("APDS9960 Ready");

  // Start Watchdog with 4-second timeout
  watchdog.start(4000);
}

void loop() {

  // Refresh the watchdog
  watchdog.kick();

  // Read sensor values
  if (APDS.colorAvailable()) {
    APDS.readColor(r, g, b);
  }

  // Send values to Python
  Serial.print("R:");
  Serial.print(r);
  Serial.print(",G:");
  Serial.print(g);
  Serial.print(",B:");
  Serial.println(b);

  delay(200);

  counter++;

  // After about 20 seconds, simulate a software hang
  if (counter == 100) {

    Serial.println("Simulating Program Hang...");
    Serial.println("Watchdog will reset the board in 4 seconds.");

    while (1) {
      // Do nothing
      // watchdog.kick() is NOT called
      // WDT will reset the board automatically
    }
  }
}
















