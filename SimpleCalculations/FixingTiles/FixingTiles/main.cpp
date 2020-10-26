#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int pl_side, bench_w, bench_l;
    double tile_w, tile_l, tiles_total, time;
    cin >> pl_side >> tile_w >> tile_l >> bench_w >> bench_l;
    tiles_total = (pl_side * pl_side - bench_w * bench_l) / (tile_w * tile_l);
    time = tiles_total * 0.2;
    cout << fixed << setprecision(2) << tiles_total << endl << time << endl;
    return 0;
}

