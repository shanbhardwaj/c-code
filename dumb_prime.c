/* dumb program  */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int this_number, divisor, not_prime;

    this_number = 3;

    while(this_number < 100){
        divisor = this_number / 2;
        not_prime = 0;
        while(divisor > 1){
            if(this_number % divisor == 0){
                not_prime = 1;
                divisor = 0;
            }
            else
                divisor = divisor-1;
        }

        if(not_prime == 0)
            printf("%d is a prime number\n", this_number);
        this_number = this_number + 1;
    }

    int ch;

    ch = getchar();
    while(ch != 'a'){
        if (ch != 'z')
        {
            printf("ch was %c, value %d\n", ch, ch);
            ch = getchar();
        }
    }

    exit(EXIT_SUCCESS);
}
