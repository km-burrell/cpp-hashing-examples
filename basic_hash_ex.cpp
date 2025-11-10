#include <iostream>
#include <string>
using namespace std;

int simpleHash(const string& text) {
    int hashValue = 0;
    for (char c : text) {
        hashValue += static_cast<int>(c);
    }
    return hashValue % 256; // keeps hash value small
}

int main() {
    cout << "Hash for 'Hello': " << simpleHash("Hello") << endl;
    cout << "Hash for 'hello': " << simpleHash("hello") << endl;
    return 0;
}