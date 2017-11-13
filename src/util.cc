#include "util.h"
#include <stdlib.h>

int deadband(int val, int deadband) {
    return abs(val) > deadband ? val : 0;
}
