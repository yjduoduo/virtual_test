#include <iostream>
#include "timer.h"

Timer::Timer()
{
    hours = minutes =0;
}
Timer::Timer(int h, int m)
{
    hours =h;
    minutes = m;
}

void Timer::AddMin(int m)
{
    minutes += m;
    hours +=minutes/60;
    minutes %= 60;
}
void Timer::AddHour(int h)
{
    hours +=h;
}
void Timer::Reset(int h, int m)
{
    hours = h;
    minutes =m;
}
Timer Timer::Sum(const Timer &t) const
{
    Timer sum;
    sum.minutes = minutes +t.minutes;
    sum.hours = hours + t.hours +sum.minutes/60;
    sum.minutes %= 60;
    return sum;
}

void Timer::Show() const
{
    std::cout<< hours<<" hours, "<<minutes<<" minutes";
}

