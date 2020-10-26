#include <iostream>

using namespace std;

int main() {
    
    int n;
    int f0 = 1, f1 = 1;
    cin >> n;
    
    for (int i = 2; i <= n; i++)
    {
        int next = f0 + f1;
        f0 = f1;
        f1 = next;
    }
    
    cout << f1 << endl;
    
    return 0;
}
