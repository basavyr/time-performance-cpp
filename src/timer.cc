#include "../include/timer.hh"

time_bench::Timer::Timer(/* args */)
{
    start_time = std::chrono::high_resolution_clock::now();
}

time_bench::Timer::~Timer()
{
    std::this_thread::sleep_for(std::chrono::seconds(3));
    MeasureTime();
}

void time_bench::Timer::MeasureTime()
{
    // std::chrono::time_point<std::chrono::high_resolution_clock> end_time=std::chrono::high_resolution_clock::now();
    // easier alternative
    auto end_time = std::chrono::high_resolution_clock::now();
    auto start = std::chrono::time_point_cast<std::chrono::microseconds>(start_time).time_since_epoch().count();
    auto stop = std::chrono::time_point_cast<std::chrono::microseconds>(end_time).time_since_epoch().count();
    auto duration_ms = static_cast<double>((stop - start) * 0.001);
    std::cout << "The class was awake for " << duration_ms << " ms" << '\n';
}