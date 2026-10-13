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

int main() {

	Date d;
	cout << "Enter year, month, day: ";
	cin >> d.year >> d.month >> d.day;
	cout << dayOfYear(d) << endl;
	return 0;
}