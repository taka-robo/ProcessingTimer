#include"processingtimer.hpp"

int main()
{
    ProcessingTimer timer;
    timer.Start();
    for (int i = 0; i < 1000000000; i++)
    {
        i++;
    }
    timer.Stop();
    timer.PrintTime(ProcessingTimer::Unit::SECONDS);
    timer.PrintTime(ProcessingTimer::Unit::MILLI_SECONDS);
    timer.PrintTime(ProcessingTimer::Unit::MICRO_SECONDS);

    return 0;
}