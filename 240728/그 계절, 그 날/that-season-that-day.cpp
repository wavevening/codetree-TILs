#include <iostream>
using namespace std;
void season(int Year, int Month, int Date) {
    if (Month == 3 || Month == 5) {
        cout << "Spring";
    }
    else if (Month == 7 || Month == 8) {
        cout << "Summer";
    }
    else if (Month == 10) {
        cout << "Fall";
    }
    else if (Month == 1 || Month == 12)
    {
        cout << "Winter";
    }
    else if (Month == 4) {
        if (Date == 31) {
            cout << -1;
        }
        else {
            cout << "Spring";
        }
    }
    else if (Month == 6) {
        if (Date == 31) {
            cout << -1;
        }
        else {
            cout << "Summer";
        }
    }
    else if (Month == 9 || Month == 11) {
        if (Date == 31) {
            cout << -1;
        }
        else {
            cout << "Fall";
        }
    }
    else if (Month == 2) {
        if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0)) { // 윤년
            if (Date > 29) {
                cout << -1;
            }
            else {
                cout << "Winter";
            }
        }
        else
        {
            if (Date > 28) {
                cout << -1;
            }
            else {
                cout << "Winter";
            }
        }
    }

}
int main() {

    int Year, Month, Date;
    cin >> Year >> Month >> Date;
    season(Year, Month, Date);
        return 0;
    }