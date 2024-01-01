#include <iostream>
#include <chrono>
#include "TimerGuard.h"
#include "some_long_stuff.h"

void SomeFunc() {
    {
        TimerGuard timer("FirstLongFunction elapsed: ", std::cout);
        FirstLongFunction();
    }
    {
        TimerGuard timer("SecondLongFunction elapsed: ", std::cout);
        SecondLongFunction();
    }
    {
        TimerGuard timer("ThirdLongFunction elapsed: ", std::cout);
        ThirdLongFunction();
    }
}

int main() {
    SomeFunc();
    return 0;
}