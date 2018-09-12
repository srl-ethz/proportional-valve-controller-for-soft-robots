#include <iostream>
#include <chrono>
#include <thread>
#include "../include/mpa/mpa.h"


int main() {
	// Create MPA controller.
	MPA mpa("192.168.1.101", "502");
	unsigned int valveNum = 0; //test valves 0 to 15
	unsigned int startPressure = 400; //tested 0 to 1000 mbar
	unsigned int endPressure = 0;
	// Connect.
	if (!mpa.connect()) {
		std::cout << "Failed to connect to MPA." << std::endl;
		return -1;
	}

	// Set valve 0 to 1 bar.
	mpa.set_single_pressure(valveNum, startPressure);

	for ( int i=0; i<5; i++) {
		// Wait 100 ms.
		std::this_thread::sleep_for(std::chrono::milliseconds(100));

		// Read pressure of valve 0.
		std::cout << "Valve " << valveNum << " :"
			<< mpa.get_single_pressure(valveNum)
			<< " mbar"
			<< std::endl;
	}
	
	// Set valve 0 to 0 bar (off).
	mpa.set_single_pressure(valveNum, endPressure);

	// Wait 100 ms.
	std::this_thread::sleep_for(std::chrono::milliseconds(500));

	// Read pressure of valve 0.
	std::cout << "Valve " << valveNum << " :"
		<< mpa.get_single_pressure(valveNum)
		<< " mbar"
		<< std::endl;

	// Disconnect.
	mpa.disconnect();

	return 0;
}

