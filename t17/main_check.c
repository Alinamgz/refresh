#include <stdio.h>

unsigned long mx_hex_to_nbr(const char *hex);

int main(void) {
    unsigned long r_1 = mx_hex_to_nbr("C4");
    unsigned long r_2 = mx_hex_to_nbr("FADE");
    unsigned long r_3 = mx_hex_to_nbr("ffffffffffff");

    printf("r_1: %lu\nr_2: %lu\nr_3: %lu", r_1, r_2, r_3);

    return 0;
}
