#include "calendar.h"

calendar::calendar(int freq) :
    freq(freq)
{
}

void calendar::startCalendar() {
    timer.start(1000/freq, this);
}

void calendar::timerEvent(QTimerEvent *e){
    emit seasonChanged();
}
