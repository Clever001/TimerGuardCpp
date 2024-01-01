#pragma once

void FirstLongFunction() {
	for (size_t i = 0; i != 10'000'000; ++i);
}

void SecondLongFunction() {
	for (size_t i = 0; i != 100'000'000; ++i);
}

void ThirdLongFunction() {
	for (size_t i = 0; i != 1000'000'000; ++i);
}