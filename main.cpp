#include <iostream>
#include <math.h>
#include <cmath>
#include <stack> 
#include <vector>
#include <unordered_map>
#include <string>
#include <queue>

#include "Alice.pch"
#include "Bob.h"

using namespace std;

int main() {
    for (int i = 0; i < 100000; i++) {
    Alice alice;
    Bob bob;
    cout << alice.compute_m(bob.send_private_key(alice.send_public_key().first, alice.send_public_key().second) ) << '\n';
    }
    sleep(5000000000);
    return 0;
}