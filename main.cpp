#include <iostream>
#include "SHA256.h"
using namespace std;

int main() {
    SHA256 sha256;
    string hashed = sha256.hash("abc");
    cout << hashed;
    return 0;
}
