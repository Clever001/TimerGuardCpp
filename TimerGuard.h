#pragma once
#include <chrono>
#include <iostream>
#include <string>

class TimerGuard {
private:
	std::chrono::high_resolution_clock::time_point start;
	std::string message;
	std::ostream& outStream;
public:
	TimerGuard(const std::string& m = "", std::ostream& out = std::cout) : outStream(out) {
		message = m;
		start = std::chrono::high_resolution_clock::now();
	}

	~TimerGuard() {
		std::chrono::duration<double> diff = std::chrono::high_resolution_clock::now() - start;
		outStream << message << ' ' << diff.count() << '\n';
		message.clear();
	}
};