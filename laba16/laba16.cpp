#include <iostream>
#include <ctime>
using namespace std;
bool isLeap(int year) {
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

struct Date {
	int day;
	int month;
	int year;
};
Date today() {
	time_t t = time(NULL);
	tm tl = *localtime(&t);
	Date currentDate = {tl.tm_mday, tl.tm_mon + 1,tl.tm_year + 1900};
	return currentDate;
}
int monthLength(int year, int month) {
	int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (month == 2 && isLeap(year)) {
		return 29;
	}
	return daysInMonth[month - 1];
}
int yearsInDays(Date d1, Date d2) {
	int daysCount=0;
	for(int yr = d1.year+1; yr<d2.year; yr++) {
		if(isLeap(yr)) {

			daysCount=daysCount+366;
		}
		else {

			daysCount=daysCount+365;
		}
	}
	return daysCount;
}
int similarYear(Date d1, Date d2){
    int daysCount=0;
    if (d1.month == d2.month) {
            return d2.day - d1.day; 
        } else {
            daysCount += monthLength(d1.year, d1.month) - d1.day;

            for (int mo = d1.month + 1; mo < d2.month; mo++) {
                daysCount += monthLength(d1.year, mo);
            }
            daysCount += d2.day;
            return daysCount;
        }
}
int countDayUntilNewYear(Date d1, Date d2){
    int daysCount=0;
    for(int mo = d1.month+1; mo <= 12 ; mo++){
	daysCount= daysCount+monthLength(d1.year,mo);
	}
	return daysCount;
}
int countDayUntilLastYear(Date d1, Date d2){
    int daysCount=0;
    if(d2.month>1){
    for(int mo = 1; mo <= d2.month-1 ; mo++){
        daysCount= daysCount+monthLength(d2.year,mo);
    }
	}
    else{
         daysCount= daysCount+monthLength(d2.year,d2.month);
    }
	return daysCount;
}
int daysBetween(Date d1, Date d2) {
	int daysCount=yearsInDays(d1,d2);
	daysCount=daysCount+(monthLength(d1.year,d1.month)-d1.day);
	daysCount=daysCount +d2.day;
	if (d1.year == d2.year) {
      daysCount= daysCount+ similarYear(d1,d2);
    }
	else{
	    daysCount= daysCount+ countDayUntilNewYear(d1,d2);
	    daysCount= daysCount+ countDayUntilLastYear(d1,d2);
	}
	return daysCount;
	
}

int main(void) {
	Date birthDate = {24, 9, 2021};
	Date currentDate = today();
	int daysPassed = daysBetween(birthDate, currentDate);
	cout << "Кількість днів від дня народження: " << daysPassed << endl;
}