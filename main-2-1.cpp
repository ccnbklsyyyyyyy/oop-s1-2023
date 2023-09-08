#include "Helicopter.h"

int main() {
    Helicopter helicopter(8000, "Apache");  // Create a Helicopter
    helicopter.fly(40, 60);  // Test the fly method
    helicopter.refuel();  // Test the refuel method
    return 0;
}
