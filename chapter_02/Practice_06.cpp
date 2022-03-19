#include <iostream>

double UnitConvert(double light_year);

int main(){
    using namespace std;
    double light_year;

    cout << "Enter the number of the light year: ";
    cin >> light_year;
    cout << light_year << " light year = " << UnitConvert(light_year) << " astronomical units." << endl;

    return 0;
}
double UnitConvert(double light_year){
    return light_year * 63240;
}