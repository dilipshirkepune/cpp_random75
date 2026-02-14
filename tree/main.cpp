#include <bits/stdc++.h>
#include "tree.hpp"

using namespace std;

int main() {

    init(13);
    insert(1);
    insert(14);
    insert(6);

    preOrderTravel(root);

    cout << "Done!" << endl;    
    return 0;
}
