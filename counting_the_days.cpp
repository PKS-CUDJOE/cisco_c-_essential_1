#include <iostream>

using namespace std;

struct Date {
	int year;
	int month;
	int day;
};

bool isLeap(int year) { 
	 if (year % 4==0 && year % 100!=0||year%400==0)
    {
        return true;
    }
    else{ return false;}	
}

int monthLength(int year, int month) {
     int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if (isLeap(year))
    {
        days[1]=29;
    }
    return days[month -1];
}

int dayOfYear(Date date) {
    int day =0;
    for(int i=1;i<date.month;i++){
        day +=monthLength(date.year,i);
    }
    return day +date.day;  
}

int daysBetween(Date d1, Date d2) {
    if(d1.year>d2.year){
        return -1;
    }
    if(d1.year == d2.year){
        if(d1.month>d2.month){
            return-1;
        }
        if(d1.month==d2.month){
            return(d2.day-d1.day) ;
        }
        if(d2.month>d1.month){
            return dayOfYear(d2)-dayOfYear(d1);
        }
    }
    if(d2.year>d1.year){
       int inYearDays = 0;
       if(isLeap(d1.year)){
            inYearDays = 366 - dayOfYear(d1);
        }
        else{
            inYearDays = 365 - dayOfYear(d1);
        }
        
        for(int yr=d1.year+1;yr<d2.year;yr++){
            if(isLeap(yr)){
                inYearDays+=366;
            }
            else{
                inYearDays+=365;
            }
        }
        inYearDays +=dayOfYear(d2);
        return inYearDays;
    }
}

int main(void) {

	Date since,to;
	cout << "Enter first date (y m d): ";
	cin >> since.year >> since.month >> since.day;
	cout << "Enter second date (y m d): ";
	cin >> to.year >> to.month >> to.day;
	cout << daysBetween(since,to) << endl;
	return 0;
}