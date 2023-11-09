#include <iostream>
using namespace std;

class clockType{
private:
    //Atributos
    int hrs;
    int mins;
    int secs;
public:
    //Constructores
    clockType(int hours, int minutes, int seconds);
    clockType();
    //Metodos
    void setTime(int h,int m,int s);
    void getTime(int&,int&,int&)const;
    void printTime()const;
    void incrementSeconds();
    void incrementMinutes();
    void incrementHours();
    bool equalTime(const clockType &otherTime)const;
};

void clockType::setTime(int hours, int minutes, int seconds){
    if (0 <= hours && hours < 24)
    hrs = hours;
    else
    hrs = 0;
    if (0 <= minutes && minutes < 60)
    mins = minutes;
    else
    mins = 0;
    if (0 <= seconds && seconds < 60)
    secs = seconds;
    else
    secs = 0;
}

void clockType::getTime(int& hours, int& minutes, int& seconds) const{
 hours = hrs;
 minutes = mins;
 seconds = secs;
}

void clockType::printTime()const{
 if (hrs < 10)
    cout << "0";
 cout << hrs << ":";
 if (mins < 10)
    cout << "0";
 cout << mins << ":";
 if (secs < 10)
    cout << "0";
 cout << secs;
}

void clockType::incrementHours(){
 hrs++;
 if (hrs > 23)
    hrs = 0;
}
void clockType::incrementMinutes(){
 mins++;
 if (mins > 59){
    mins = 0;
    incrementHours(); //incrementar horas
 }
}
void clockType::incrementSeconds(){
 secs++;
 if (secs > 59){
    secs = 0;
    incrementMinutes(); //incrementar minutos
 }
}

bool clockType::equalTime(const clockType& otherClock) const{
 return (hrs == otherClock.hrs
 && mins == otherClock.mins
 && secs == otherClock.secs);
}

clockType::clockType(){ //constructor predeterminado{
    hrs = 0;
    mins = 0;
    secs = 0;
}

clockType::clockType(int hours, int minutes, int seconds){
 setTime(hours, minutes, seconds);
}

int main(){
    clockType time1(1,1,1);
    clockType time2;
    time2 = time1;
    time2.printTime();
}
