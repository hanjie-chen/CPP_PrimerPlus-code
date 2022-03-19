#include <iostream>

double CentigradeToFahrenheit(double degree);

int main(){
    using namespace std;
    double degree;

    cout << "Please enter a Celsius value: ";
    cin >> degree;
    cout << degree << " degrees Celsius is " << CentigradeToFahrenheit(degree) << " degrees Fahrenheit." << endl;

    return 0;
}

double CentigradeToFahrenheit(double degree){
    return (degree * 1.8) + 32.0;
}