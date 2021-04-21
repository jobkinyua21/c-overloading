#include  <iostream>
#include  <cmath>
#include  "./Time.cpp"

#include  <string.h>


Time::Time() {
	hrs = 0;
	min = 0;
	sec = 0;

}
int h, m, s;
//getters
int Time::getSeconds() { return sec; }
int Time::getMinutes() { return min; }
int Time::getHours() { return hrs; }


void Time::setTime() {
	sec = s;

	min = m;
	hrs = h;

	// ensure s < 60 and m < 60 
	if (sec > 59) {

		min = min + (sec / 60);
		sec = sec % 60;
	}
	if (min > 59) {
		hrs = hrs + (min / 60);
		min = min % 60;
	}
	std::cout << "\n Enter the hour(0-11) ";
	std::cin >> hrs;
	std::cout << "\n Enter the minute(0-59) ";
	std::cin >> min;
	std::cout << "\n Enter the second(0-59) ";
	std::cin >> sec;
}

void Time::display() {
	std::cout << hrs << ':';
	std::cout << min << ':';
	std::cout << sec;

}


Time Time::operator+(const Time &t) const {
	// see question #2
	Time tm;
	int a, b;
	a = sec + t.sec;
	tm.sec = a % 60;
	b = (a / 60) + min + t.min;
	tm.min = b % 60;
	tm.hrs = (b / 60) + hrs + t.hrs;
	tm.hrs = t.hrs % 12;
	return tm;

}
int main()
{
	Time t1, t2, t3;

	std::cout << "\n Enter the first time ";
	t1.setTime();
	std::cout << "\n Enter the second time ";
	t2.setTime();

	t3 = t1 + t2;	//adding of two time object using '+' operator
	std::cout << "\n First time ";
	t1.display();
	std::cout << "\n Second time ";
	t2.display();
	std::cout << "\n Sum of times ";
	t3.display();
	
	return 0;
	//getch();
}
