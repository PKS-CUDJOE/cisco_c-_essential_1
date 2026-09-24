// THIS IS A C++ PROGRAM TO PRACTICE BITWISE AND SHIFT OPERATOR IN C++ 

#include <iostream>
using namespace std;
int main(){
    int counter =0;
    unsigned long number;
    cout<<"ENTER A NUMBER TO CHECK THE ONES IN IT: "<<endl;
    cin>>number;
    while (number != 0)
    {
        if (number & 1){
            counter ++;}

        number >>= 1;
    }
    cout<<"the number of ones: "<<counter<<endl;
    return 0;
}

