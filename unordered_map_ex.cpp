#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    unordered_map<string, int> scores;

    scores["Amber"] = 90;
    scores["Mona"] = 85;
    scores["Charlie"] = 92;

    cout << "Mona's score: " << scores["Mona"] << endl;

    // Loop through all key-value pairs
    for (auto& pair : scores) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    return 0;
}