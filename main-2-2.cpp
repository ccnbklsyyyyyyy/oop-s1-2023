#include "Airplane.h"

int main() {
    Airplane airplane(10000, 150);  // Create an Airplane with weight 10000 and 150 passengers
    airplane.fly(65, 120);  // Test the fly method
    airplane.refuel();  // Test the refuel method
    return 0;
}
