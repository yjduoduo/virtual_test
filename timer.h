#ifndef TIMER_H
#define TIMER_H

class Timer
{
public:
    Timer();
    Timer(int h,int m=0);
    void AddMin(int m);
    void AddHour(int h);
    void Reset(int h=0,int m=0);
    Timer Sum(const Timer &t) const;
    void Show() const;
private:
    int hours;
    int minutes;

};

#endif // TIMER_H
