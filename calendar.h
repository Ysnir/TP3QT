#ifndef CALENDAR_H
#define CALENDAR_H

#include <QObject>
#include <QBasicTimer>
#include <QOpenGLWidget>

class calendar : public QOpenGLWidget
{
    Q_OBJECT
    public:
        explicit calendar(int freq);
        void startCalendar();

    signals:
        void seasonChanged();

    private:
        QBasicTimer timer;
        int freq;

     protected:
        void timerEvent(QTimerEvent *e) override;
};

#endif // CALENDAR_H
