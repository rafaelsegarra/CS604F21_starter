#include <stdio.h>
int main() {

    short min_short, max_short;

    //TODO: Please find the range of short type, and print out the min and max of short in decimal
    //You are not allowed to hard-code any numbers in decimals
    //You are allowed to hard-code binaries/hex values
    //No loop or if is allowed

    //int size = sizeof(min_short);
    //printf("%i", size);
    //Answer was 2, which means two bytes. Two bytes would allow for up to 0000 0000 0000 0000 digits, assuming two's complement
    //we would have the values of -32,768 to 32,767 as our limits. Since we can hardcode hex values, we can turn these decimals 
    //into hex values and print out the answer
    min_short = 0x8000;
    max_short = 0x7FFF;


    printf("%hd ", min_short);
    printf("%hd\n", max_short);
    return 0;
}
