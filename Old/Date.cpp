#include "Date.h"

Date::Date () {
	day = 1;
	month = 1;
	year = 2014;

}

Date::Date(int day, int month, int year) {
	this->day = day;
	this->month = month;
	this->year = year;
}

Date::~Date() {
	
}