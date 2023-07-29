#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // Sets are alwawys ordered. Vectors are not. 
    int x, q, y;
    set<int> s;
    cin >> q; // queries
    int q1;
    for (int i = 0; i < q; i++) {
        cin >> y >> x;

        auto a = s.find(x);
        if (y == 1)
        {
            s.insert(x);
        }
        else if (y == 2) {
            s.erase(x);
        }
        else if (y == 3 && (a != s.end())) {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }



    return 0;
}



