#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    double page_cost, cover_cost, discount, designer_cost, team_prcnt;
    cin >> page_cost >> cover_cost >> discount >> designer_cost >> team_prcnt;
    
    double total = ((899 * page_cost + 2 * cover_cost) * (1 - discount / 100.00) + designer_cost) * (1 - team_prcnt / 100);
    
    cout << "Avtonom should pay " << fixed << setprecision(2) << total << " BGN." << endl;
    
    return 0;
}
