#include "myclass.h"
// 1879700 Xuhua Huang
using namespace std;

// mytime class function
mytime::mytime() // default constructor
{
	setHour(0);
	setMinute(0);
	setSecond(0);
}

mytime::mytime(int h, int m, int s)  // object3(h,m,s )
{
	setHour(h); // calls the set functions with verification
	setMinute(m);
	setSecond(s);	
}

mytime::mytime(int h, int m)
{
	setHour(h);
	setMinute(m);
	setSecond(0); // set second to 0 by default
}

mytime::mytime(int h)
{
	setHour(h);
	setMinute(0); // set minute to 0 by default
	setSecond(0); // set second to 0 by default
}

void mytime::setHour (int userHour) // hour should be valid form 0 to 23
{
	if ((userHour >= 0) && (userHour <= 23))
	{
		hour = userHour;
	}	
	else if (userHour == 24)
	{
		cout << "Do you mean 0 a.m.? It is automatically set to 0 a.m." << endl;
		hour = 0;
	}
	else
	{
		cout << "Invalid value " << userHour << endl;
		hour = 0;
	}
	
	return;
}

void mytime::setMinute (int userMinute) // minute should be valid from 0 to 59
{
	if ((userMinute >= 0) && (userMinute <= 59))
	{
		minute = userMinute;
	}	
	else
	{
		cout << "Invalid value " << userMinute << endl;
		minute = 0;
	}
	
	return;
}

void mytime::setSecond (int userSecond) // second should be valid form 0 to 59
{
	if ((userSecond >= 0) && (userSecond<= 59))
	{
		second = userSecond;
	}	
	else
	{
		cout << "Invalid value " << userSecond << endl;
		second = 0;
	}
	
	return;
}

void mytime::setTime(int userHour, int userMinute, int userSecond) // original set time functions with three variables
{
	setHour(userHour);
	setMinute(userMinute);
	setSecond(userSecond);
	
	return;
}

void mytime::setTime(int userHour, int userMinute) // overloaded function #1
{
	setHour(userHour);
	setMinute(userMinute);
	
	setSecond(0); // to keep the variable from garbage variable
	
	return;
}


void mytime::setTime(int userHour) // overloaded function #2
{
	setHour(userHour);
	
	setMinute(0); // set default value 0 for testing
	setSecond(0);
	
	return;
}

void mytime::printTime()
{
	cout << getHour() << ":" << getMinute() << ":" << getSecond() << endl; // using get functions to get value with verification
	
	return;
}


//rectangle class function
rectangle::rectangle() // default constructor the main will call when creating an object
{
	setlength(0);
	setwidth(0);
}

rectangle::rectangle(int inilength, int iniwidth) // overloaded with two arguments passed from the main
{
	setlength(inilength);
	setwidth(iniwidth);
}

int rectangle::calcArea(int inilength, int iniwidth)
{
	int area = inilength * iniwidth;
	return area;
}

int rectangle::calcPerimeter(int inilength, int iniwidth)
{
	int perimeter = ( inilength + iniwidth ) *2;
	return perimeter;
}


// Point class function
Point::Point() // default cinstructor // constructors always have the same name with the class
{
	setx(0); // calling the set functions with argument 0
	sety(0);
}

Point::Point(int iniX, int iniY)
{
	setx(iniX);
	sety(iniY);
}
