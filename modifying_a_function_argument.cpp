#include <iostream>
using namespace std;

void increment(int &incre,int in =1){
    for(int i=0;i<in;i++){
        incre++;
    }
}

int main(){
    int var = 0;
    for(int i = 0;i<20;i++){
        if(i%2)
            increment(var);
        else
            increment(var,i);
    }
    cout<<var<<endl;
    return 0;
}