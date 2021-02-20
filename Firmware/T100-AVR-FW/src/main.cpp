#include <Arduino.h>

#define DT 1000

// Forward/Reverse
#define FW 0
#define RV 1

#define MR_DIR  12
#define MR_CTRL 11
#define ML_DIR  8
#define ML_CTRL 9

void setup() {
  pinMode(MR_DIR, OUTPUT);
  pinMode(MR_CTRL, OUTPUT);
  pinMode(ML_DIR, OUTPUT);
  pinMode(ML_CTRL, OUTPUT);
  digitalWrite(MR_DIR, FW);
  digitalWrite(MR_CTRL, 0);
  digitalWrite(ML_DIR, FW);
  digitalWrite(ML_CTRL, 0);
}


void loop() {
  digitalWrite(MR_DIR, FW);
  digitalWrite(MR_CTRL, 0);
  digitalWrite(ML_DIR, FW);
  digitalWrite(ML_CTRL, 0);
  delay(2000);

  digitalWrite(MR_CTRL, 1);
  digitalWrite(ML_CTRL, 1);
  delay(DT);
  digitalWrite(MR_DIR, RV);
  digitalWrite(ML_DIR, RV);
  delay(DT);
  digitalWrite(MR_CTRL, 0);
  digitalWrite(ML_CTRL, 0);
  delay(DT);
  digitalWrite(MR_DIR, FW);
  digitalWrite(ML_DIR, FW);
  delay(DT);
}