
#include <iostream>
using namespace std;
class Time {
    private:
    int hours,minutes;
    public:
    Time();
    Time(int t);
    void display();
};
int main() {
    int duration; 
    Time t1;
    cout << "Enter the duration in minutes: ";
    cin >> duration;
    t1 = duration;
    t1.display();
    return 0;
}
Time::Time(){}
Time::Time(int t) {
    hours = t / 60;
    minutes = t % 60;
}
void Time::display() {
    cout << "Time: " << hours << " hours and " << minutes << " minutes" << endl;
}