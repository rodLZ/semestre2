#include <iostream>
#include <string>
#include "Coche.h"
#include "FloatCell.h"

int main() {
    FloatCell val1{};
    FloatCell val2(10.012);
    FloatCell val3(val2);
    FloatCell val4=val2;
    return 0;
}