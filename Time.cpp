/* Time.h (don’t forget includes) */
#include <Time.h>
class Time {
private:

	int hrs; // hours 
	int min; // minutes 
	int sec; // seconds
	int h, m, s;
public:

	Time();
	void setTime();
	void display();
	Time operator+(const Time &t) const;
	int  getSeconds();
	int  getMinutes();
	int  getHours();
};
