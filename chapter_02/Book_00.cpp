#include <iostream>
#include <cmath>
int main()
{
    using namespace std;
    int carrots;

    cout << "How many carrots you have ?" << endl;
    cin >> carrots;
    cout << "Here are two more. ";
    carrots += 2;
    cout << "Now you have " << carrots << " carrots." << endl;
    cout << sqrt(6.25);

    return 0;
}