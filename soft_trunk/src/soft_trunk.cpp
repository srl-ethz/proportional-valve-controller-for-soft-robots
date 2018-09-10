#include <iostream>
#include <chrono>
#include <thread>
#include "../include/mpa/mpa.h"


int main() {
	// Create MPA controller.
	MPA mpa("127.0.0.1", "502");

	// Connect.
	if (!mpa.connect()) {
		std::cout << "Failed to connect to MPA." << std::endl;
		return -1;
	}

	// Set valve 0 to 1 bar.
	mpa.set_single_pressure(0, 1000);

	// Wait 100 ms.
	std::this_thread::sleep_for(std::chrono::milliseconds(100));

	// Read pressure of valve 0.
	std::cout << "Valve 0: "
		<< mpa.get_single_pressure(0)
		<< " mbar"
		<< std::endl;

	// Set valve 0 to 0 bar (off).
	mpa.set_single_pressure(0, 0);

	// Wait 100 ms.
	std::this_thread::sleep_for(std::chrono::milliseconds(100));

	// Read pressure of valve 0.
	std::cout << "Valve 0: "
		<< mpa.get_single_pressure(0)
		<< " mbar"
		<< std::endl;

	// Disconnect.
	mpa.disconnect();

	return 0;
}

