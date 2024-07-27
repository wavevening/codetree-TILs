#include <iostream>
using namespace std;
void printStar() {
    cout << "**********" << endl;
}
int main() {
    for (int i = 0; i < 5; i++) {
        printStar();
    }
    return 0;
}