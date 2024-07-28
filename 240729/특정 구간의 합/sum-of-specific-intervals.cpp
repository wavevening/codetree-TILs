#include <iostream>
using namespace std;

int A[100];

int main() {
    
    int n, m;
    cin >> n >> m;


    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    for (int j = 0; j < m; j++) {
        int pair_1, pair_2;
        cin >> pair_1 >> pair_2;
        int sum = 0;
        for (int k = pair_1 - 1; k < pair_2; k++) {
            sum += A[k];
        }
        cout << sum << endl;
    }
    return 0;
}