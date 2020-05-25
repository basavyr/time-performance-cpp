#ifndef TIMER_HH
#define TIMER_HH

#include <memory>
#include <chrono>
#include <utility>
#include <thread>
#include <iostream>

namespace time_bench
{
    class Timer
    {
    private:
        std::chrono::time_point<std::chrono::high_resolution_clock> start_time;

    public:
        Timer(/* args */);
        ~Timer();
        void MeasureTime();
    };

} // namespace time_bench

#endif // TIMER_HH
