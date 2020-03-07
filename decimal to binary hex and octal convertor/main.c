#include <stdio.h>
#include <stdlib.h>
#include "convert_to_binary.c"
#include "convert_to_hex.c"
#include "convert_to_octal.c"

//Convert a decimal number to binary , hex and octal representation




int main()
{ int number;

    printf("Decimal number: ");
    scanf("%d",&number);

    convert_to_binary(number);
    convert_to_hex(number);
    convert_to_octal(number);


    return 0;
}
