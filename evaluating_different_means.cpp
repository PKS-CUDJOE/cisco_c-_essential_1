#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double vector[]={1.,2.,3.,4.,5.};
    int n = sizeof(vector) / sizeof(vector[0]);
    double ArithmeticMean;
    double HarmonicMean;
    double GeometricMean;
    double RootMeanSquare;

    double harmonic= 0,geometric=1,root=0;
    for(int i=0;i<n;i++){
        ArithmeticMean += vector[i];
        harmonic += 1/vector[i];
        geometric *= vector[i];
        root +=pow(vector[i],2);

    }
    ArithmeticMean /= n;
    HarmonicMean = n/harmonic;
    GeometricMean = pow(geometric, 1./n);
    RootMeanSquare = sqrt(root/n);

    cout<<"Arithmetic Mean = "<<ArithmeticMean<<endl;
    cout<<"Harmonic Mean ="<<HarmonicMean<<endl;
    cout<<"Geometric Mean ="<<GeometricMean<<endl;
    cout<<"RootMean Square ="<<RootMeanSquare<<endl;





    return 0;
}