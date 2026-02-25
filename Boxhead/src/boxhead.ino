#include <Arduboy2.h>
#include <ArduboyTones.h>

Arduboy2 arduboy;
ArduboyTones sound(arduboy.audio.enabled);

void setup() {
  arduboy.begin();
  arduboy.setFrameRate(60);
  arduboy.audio.on();
}

void loop() {
  if (!arduboy.nextFrame()) return;

  arduboy.pollButtons();
  arduboy.clear();

  arduboy.setCursor(20, 30);
  arduboy.print(F("Boxhead"));

  arduboy.display(CLEAR_BUFFER);
}
