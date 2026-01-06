#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    cout << "Press Enter 3 times to reveal your future." << endl;

    cin.get();
    cin.get();
    cin.get();

    string grades[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};

    srand(time(0));
    int r = rand() % 9;

    cout << "You will get " << grades[r] << " in this 261102." << endl;

    return 0;
}
