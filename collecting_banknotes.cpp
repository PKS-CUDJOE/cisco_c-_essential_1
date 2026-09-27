// A CLI C++ PROGRAM TO PRINT OUT THE MINIMAL NUMBER OF BANK NOTES NEED TO CASHOUT A SPECIFIC AMOUNT
#include <iostream>
using namespace std;
int main (){
    int bank_notes[5]={50,20,10,5,1};
    int amount;
    cout<<"ENTER THE AMOUNT TO WITHDRAW: ";
    cin>>amount;
    for(int i=0;i<5;i++)
        while (amount>=bank_notes[i])
        {
            cout<<bank_notes[i]<<" ";
            amount-=bank_notes[i];
        }
        
    cout<<endl;
    return 0;
}