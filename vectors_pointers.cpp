//A CLI PROGRAM TO FIND THE SMALLEST FIGURE IN AN ARRAY USING POINTERS

#include <iostream>
using namespace std;
int main() {

	int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2,-15};
	int n = sizeof(vector) / sizeof(vector[0]);
    int *p=vector;
    int min = *p;
    for(int i=1;i<n;i++){
        p++;
        if(*p<min){
            min = *p;
        }
    }
    cout<<"minimum is "<<min;
   
	return 0;
}