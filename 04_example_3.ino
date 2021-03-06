#define PIN_LED 13
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200); // Initialize serial port
  while (!Serial); // wait for serial port to connect.
  Serial.println("Hello, world!");
  count = toggle = 0;
  digitalWrite(PIN_LED, toggle); // turn off LED.
}

void loop() {
	Serial.println(++count);
	toggle = toggle_status(toggle); //toggle LED value.
	digitalWrite(PIN_LED, toggle); //update LED status.
	delay(1000);
}

int toggle_status(int toggle) {
	return !toggle;
}
