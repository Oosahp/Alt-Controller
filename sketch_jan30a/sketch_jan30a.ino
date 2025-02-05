#include <AltController.h>

AltController controller;

void setup() {
    // Gaming key (hold to use)
    controller.addKeyPress(2, 'w', 100);
    controller.addKeyPress(3, 'a', 100);
    controller.addKeyPress(4, 's', 100);
    controller.addKeyPress(5, 'd', 100);
    controller.addKeyPress(6, 'z', 50);
    controller.addKeyPress(7, 'i', 50);
    controller.addKeyPress(8, 't', 50);
}

void loop() {
    controller.update();
}
