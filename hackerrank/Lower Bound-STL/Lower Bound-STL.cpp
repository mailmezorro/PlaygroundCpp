#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {

    vector<int> v;
    int temp, q1, q, N;


    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> temp;
        v.push_back(temp);
    }




    cin >> q;
    int size = v.size();
    for (int i = 0; i < q; i++) {
        cin >> q1;
        auto low = lower_bound(v.begin(), v.end(), q1);

        
        cout << " Wert - pointer from iterator low" << endl;
        cout << *low << endl;
        cout << "address von iterator low" << endl;
        cout << &(*low) << endl;
        cout << "address from vector v" << endl;
        cout << &v[low - v.begin()] << endl;


        // also possible, if (*low == q1), much more sense...
        if (v[low - v.begin()] == q1) // caculate with real adresses here! I would not recommend this...
        {
            cout << "Yes " << ((++low) - v.begin()) << endl;
        }
        else {
            cout << "No " << ((++low) - v.begin()) << endl;
        }




    }
    return 0;
}
