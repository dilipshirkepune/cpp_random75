#include <iostream>
#include <vector>

using namespace std;

int main() {

    int num = 0;
    int arr[100] = {};
    int target = 0;

    cout << "Enter number of elements: ";
    cin >> num;
    //vector<int> arr(num);

    cout << "Enter elements: ";
    for(int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    cout << "Enter target: ";
    cin >> target;

    for(int i = 0; i < num; i++) {
        for(int j=i+1; j<num; j++) {
            if(arr[i] + arr[j] == target) {
                cout << "[" << i << ", " << j << "] ";
                return 0;
            }
        }
    }

    cout << "No two sum solution found." << endl;

    cout << endl;
     

    return 0;
}