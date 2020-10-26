#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    string underbars, dotts;
    
    int width = n + 5;
    
    // first line
    
    int underbars_cnt = width / 2;
    underbars = string(underbars_cnt, '_');
    
    cout << underbars << "^" << underbars << endl;
    
    // second line
    
    underbars_cnt -= 1;
    underbars = string(underbars_cnt, '_');
    
    cout << underbars << "/|\\" << underbars << endl;
    
    // first third body
   
        for (int i = 0; i <= n / 2 - 1; i++)
        {
            underbars_cnt--;
            underbars = string(underbars_cnt, '_');
            int dotts_cnt = i;
            dotts = string(dotts_cnt, '.');
            cout << underbars << "/" << dotts << "|||" << dotts << "\\" << underbars << endl;
        }
  
    // second third body
    
    for (int i = 2; i >= 1; i--)
    {
        int dotts_cnt = i;
        dotts = string(dotts_cnt, '.');
        underbars_cnt = (width - dotts_cnt * 2 - 5) / 2;
        underbars = string(underbars_cnt, '_');
        cout << underbars << "/" << dotts << "|||" << dotts << "\\" << underbars << endl;
    }
    
    // last third body
    
    for (int i = 1; i <= n; i++)
    {
        underbars_cnt = (width - 3) / 2;
        underbars = string(underbars_cnt, '_');
        cout << underbars << "|||" << underbars << endl;
    }
    
    // special line
    
    cout << underbars << "~~~" << underbars << endl;
    
    // bottom
    
    for (int i = n / 2; i >= 1; i--)
    {
        underbars_cnt--;
        underbars = string(underbars_cnt, '_');
        int dotts_cnt = (width - underbars_cnt * 2 - 5) / 2;
        dotts = string(dotts_cnt, '.');
        cout << underbars << "//" << dotts << "!" << dotts << "\\\\" << underbars << endl;
    }
    
    return 0;
}
