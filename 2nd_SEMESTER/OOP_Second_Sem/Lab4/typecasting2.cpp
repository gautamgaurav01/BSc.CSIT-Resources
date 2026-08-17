#include <iostream>
using namespace std;
class Time
{
    int hours, minutes, seconds;

public:
    Time();
    Time(int);
    void display();
};
int main()
{
    int duration;
    Time t1;
    cout << "Enter the duration in seconds: ";
    cin >> duration;
    t1 = duration; // Implicit type conversion
    t1.display();
    return 0;
}
Time::Time() {}
Time::Time(int t)
{
    hours = t / 3600;
    minutes = (t % 3600) / 60;
    seconds = minutes % 60;
}
void Time::display()
{
    cout << hours << " Hours " << minutes << " Minutes " << seconds << " seconds " << endl;
}