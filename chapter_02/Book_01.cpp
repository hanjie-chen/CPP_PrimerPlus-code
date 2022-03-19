#include <iostream>

void simon(int number);

int main()
{
    using namespace std;
    int count;

    cout << "Pick an integer: ";
    cin >> count;
    simon(count);
    cout << "Done !" << endl;

    return 0;
}
void simon(int number){
    using namespace std;

    cout << "Simon says touch your toe " << number << " times." << endl;
}