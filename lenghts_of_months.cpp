#include <iostream>

using namespace std;

bool isLeap(int year) { 
     if (year % 4==0 && year % 100!=0||year%400==0)
    {
        return true;
    }
    else{ return false;}	
}

int monthLength(int year, int month) {
    int days[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    if (isLeap(year))
    {
        days[1]=28;
    }
    return days[month -1];
}

int main() {

	for(int yr = 2000; yr < 2001; yr++) {
		for(int mo = 1; mo <= 12; mo++)
			cout << monthLength(yr,mo) << " ";
		cout << endl;
	}
	return 0;
}