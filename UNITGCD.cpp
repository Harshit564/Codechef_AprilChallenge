#include <bits/stdc++.h>

using namespace std;

int main () {
            int T;
    cin >> T;

    while(T--) {
                int N;
        cin >> N;
        
        cout << N / 2 + ((N < 2) ? 1 : 0) << "\n";
        if(N < 4) {
            cout << N << " ";
            for(int i = 0; i < N; i++) {
                cout << i + 1 << " ";
            } cout << "\n";
        } else {
            cout << "3 1 2 3" << "\n";
            for(int i = 4, j = 1; j < N / 2; i += 2, j++) {
                cout << ((i == N) ? 1 : 2) << " " << i << " ";
                if(i == N) {
                    cout << "\n";
                } else {
                    cout << i + 1 << "\n";
                }
            }
        }
    }
    return 0;
}