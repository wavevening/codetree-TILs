#include <iostream>
using namespace std;
int pro(int n, int m) {
    int big;
    int small;
    n > m ? (big = n, small = m) : (big = m, small = n);

    while (small != 0)
    {
        int r = big % small;
        big = small;
        small = r;
    }
    return (n * m) / big;
}
int main() {
    int n, m;
    cin >> n >> m;
    cout << pro(n, m);
    return 0;
}