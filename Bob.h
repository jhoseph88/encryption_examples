#ifndef Bob_h
#define Bob_h

#include <stdlib.h>
#include <math.h>

class Bob {
    int m;
public:
    Bob();
    int send_private_key(int e, int n);
};

#endif /* Bob_h */
