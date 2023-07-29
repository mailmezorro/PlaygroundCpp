#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int j;
    cin >> j;
    int a;
    vector<int> v;
    for (int i = 0; i < j; i++) {
        cin >> a;
        v.push_back(a);
    }

    int x;
    cin >> x;
    //delete specific position
    v.erase(v.begin() + x - 1);

    int b;
    cin >> a;
    cin >> b;

    v.erase(v.begin() + a - 1, v.begin() + b - 1);
    int size = v.size();
    cout << size << endl;
    for (int i = 0; i < size; i++) {
        cout << v[i] << " ";
    }

    return 0;
}
