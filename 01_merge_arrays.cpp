#include <iostream>
#include <vector>

using namespace std;

vector<int> mergeArrays(const vector<int>& arrayA, const vector<int>& arrayB) {
    vector<int> arrayC;
    int maxLength = max(arrayA.size(), arrayB.size());

    for (int i = 0; i < maxLength; i++) {
        if (i < arrayA.size()) {
            arrayC.push_back(arrayA[i]);  // Add elements from arrayA
        }
        if (i < arrayB.size()) {
            arrayC.push_back(arrayB[i]);  // Add elements from arrayB
        }
    }

    return arrayC;
}

int main() {
    vector<int> arrayA = {1, 3, 5};
    vector<int> arrayB = {2, 4, 6, 8};

    vector<int> arrayC = mergeArrays(arrayA, arrayB);

    cout << "Merged arrayC: ";
    for (int i = 0; i < arrayC.size(); i++) {
        cout << arrayC[i] << " ";
    }
    cout << endl;

    return 0;
}
