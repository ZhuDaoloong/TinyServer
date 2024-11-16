#include "utils.h"

void crash()
{
	char* p = nullptr;
	*p = 0;
}


bool isIPAddress(std::string ipAddress) {
	//TODO: use regex
	return true;
}

bool isPort(int16_t port) {
	//TODO
	return true;
}