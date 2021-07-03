#include <stdio.h>

int main () {
    int var_int;
    
    printf("int: %lu bytes.\n", sizeof (var_int));

    char var_char;
    printf("char: %lu bytes.\n", sizeof (var_char));

    short var_short;
    printf("short: %lu bytes.\n", sizeof (var_short));

    unsigned char var_unsignedchar;
    printf("unsigned char: %lu bytes.\n", sizeof (var_unsignedchar));

    signed char var_signedchar;
    printf("signed char: %lu bytes.\n", sizeof (var_signedchar));

    unsigned var_unsigned;
    printf("unsigned: %lu bytes.\n", sizeof (var_unsigned));

    long var_long;
    printf("long: %lu bytes.\n", sizeof (var_long));

    unsigned long var_unsignedlong;
    printf("unsigned long: %lu bytes.\n", sizeof (var_unsignedlong));

    float var_float;
    printf("float: %lu bytes.\n", sizeof (var_float));

    double var_double;
    printf("double: %lu bytes.\n", sizeof (var_double));

    long double var_longdouble;
    printf("long double: %lu bytes.\n", sizeof (var_longdouble));

    return 0;
}
