#include "AirFleet.h"

int main() {
    AirFleet airFleet;  // Create an AirFleet
    AirVehicle** fleet = airFleet.get_fleet();
    
    // Access and test the vehicles in the fleet
    for (int i = 0; i < 5; i++) {
        fleet[i]->fly(30, 45);  // Test the fly method for each vehicle
    }
    
    return 0;
}
