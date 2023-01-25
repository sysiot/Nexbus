#include "nexbus.h"

const int BUFFER_SIZE = 50;
char buf[BUFFER_SIZE];
String data = "";

int val, press = 0;
int val2, press2 = 0;

int pageNo_, comp_id_ = 0;

nexdata veri;

void setup() {
  Serial.begin(115200);  // opens serial port, sets data rate to 9600 bps

  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  digitalWrite(13, 0);
  digitalWrite(12, 0);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available() > 0) {
    int rlen = Serial.readBytesUntil('\n', buf, BUFFER_SIZE);


    for (int i = 0; i < rlen; i++) {

      data += buf[i];
      data.trim();
      //Serial.print(data);
      //data = "";
    }

    veri.nex_data(buf, &comp_id_, &pageNo_, &press, "bt", &val);

    if (val == 1 && pageNo_ == 0) {
      digitalWrite(13, 1);
    } else if (val == 0 && pageNo_ == 0) {
      digitalWrite(13, 0);
    }

    if (val == 1 && pageNo_ == 1) {
      digitalWrite(12, 1);
    } else if (val == 0 && pageNo_ == 1) {
      digitalWrite(12, 0);
    }

    delay(10);






  }








}
