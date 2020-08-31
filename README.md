# ProcessingTimer
c++用処理時間計測class  
単位以下は切り捨て

## example
```c++
#include"processingtimer.hpp"

int main()
{
    ProcessingTimer timer;
    timer.Start();
    /*

    */
    timer.Stop();
    timer.PrintTime(ProcessingTimer::Unit::SECONDS);
    timer.PrintTime(ProcessingTimer::Unit::MILLI_SECONDS);
    timer.PrintTime(ProcessingTimer::Unit::MICRO_SECONDS);

    return 0;
}
```