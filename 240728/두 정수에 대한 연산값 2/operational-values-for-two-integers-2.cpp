#include <iostream>
using namespace std;

int cal1(int a) {
    return a + 10;
}

int cal2(int b)
{
    return b * 2;
}

int main() {
    int a, b;
    cin >> a >> b;
 
    if (a < b) {
    cout << cal1(a) << " " << cal2(b);
    }
    
   else {
        cout << cal2(a) << " " << cal1(b);
    }

    return 0;
}