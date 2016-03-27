#include "Alice.pch"

pair<int, int> Alice::send_public_key() {
    return {e, n};
}

Alice::Alice() {
    srand(time(NULL) );
    p = gen_prime();
    q = gen_prime();
    while (p == q) q = gen_prime();
    n = p * q;
    totient = (p - 1) * (q - 1);
    int i = 0, j = 0;
    while ( (i * j) % totient != 1)
        i = rand() % 10, j = rand() % 10;
    e = i, d = j;
}

int Alice::gen_prime() {
    srand(time(NULL) );
    static vector<int> primes = {2};
    //find a new prime (the next one) and add it to vector
    for (int i = primes.back() + 1;;i++) {
        bool is_prime = true;
        for (int j = 3; j <= sqrt(i); j++) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            primes.push_back(i);
            //return a random prime number from the vector
            return primes[rand() % primes.size()];
        }
    }
}

int Alice::compute_m(int c) {
    return (int)pow(c, d) % n;
}
