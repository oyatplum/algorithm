#include <iostream>
using namespace std;

int n, m, c;
int cnt[150001];

int main() {

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> cnt[i];
    }

    if (m > 200000) cout << 0 << "\n"; //제한
    else {
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) { //이중 처리
                if (cnt[i] + cnt[j] == m) {
                    c++;
                }
            }
        }
        cout << c;
    }
    return 0;
}