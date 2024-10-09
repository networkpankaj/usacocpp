#include <iostream>
#include <string>

using namespace std;

int calculateProductMod47(const string& name) {
    long long product = 1; 
    for (char c : name) {
        product *= (c - 'A' + 1); 
    }
    return product % 47;  
}

int main() {
    string comet, group;

    cin >> comet >> group;

    int cometMod = calculateProductMod47(comet);
    int groupMod = calculateProductMod47(group);

    if (cometMod == groupMod) {
        cout << "GO" << endl;
    } else {
        cout << "STAY" << endl;
    }

    return 0;
}
