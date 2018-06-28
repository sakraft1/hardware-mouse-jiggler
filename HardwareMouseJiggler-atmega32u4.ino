#include <Mouse.h>

void setup() {

  Mouse.begin();

}

void loop() {

  Mouse.move(0, 1);
  Mouse.move(0, -1);

}
