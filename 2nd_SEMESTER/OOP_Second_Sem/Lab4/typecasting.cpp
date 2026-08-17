#include <iostream>
using namespace std;
class Time
{
private:
    int hours, minutes;
public:
    Time() {}
    Time(int h, int m)
    {
        hours = h;
        minutes = m;
    } 
    operator int()
    {
        return (hours * 60 + minutes);
    }
};
int main()
{
    int hrs, mins, duration;
    cout << "Enter hours and minutes: ";
    cin >> hrs >> mins;
    Time t(hrs, mins);
    duration = t;
    cout << "Duration in minutes: " << duration;
    return 0;
}