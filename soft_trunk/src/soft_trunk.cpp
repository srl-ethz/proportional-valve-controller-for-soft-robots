#include <iostream>

#include "modbus/modbus.h"


int main() {
	const auto ctx = modbus_new_tcp_pi("127.0.0.1", "502");

	if (modbus_connect(ctx) == -1) {
		std::cout << "Failed to connect." << std::endl;
		modbus_free(ctx);
		return -1;
	}

	if (modbus_write_register(ctx, 0, 42) == -1) {
		std::cout << "Failed to write register." << std::endl;
	}

	return 0;
}

