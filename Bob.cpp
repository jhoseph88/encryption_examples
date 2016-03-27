#include "Bob.h"
#include <time.h>

Bob::Bob() {
    srand(time(NULL) );
    m = rand() % 10;
}

int Bob::send_private_key(int e, int n) {
    return (int)pow((double)m, (double)e)  % n;
}