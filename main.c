//#include <stdio.h>

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    int guess;
    int chance = 7;
    int high = 100;
    printf("a number between 1 and %d\n", high);
    srand(time(NULL));
    int secret=rand() % high + 1;
    printf("%d\n",secret);

    while (chance > 0) {
        printf("enter your guess.\n");
        scanf("%d", &guess);

        if (guess ==secret) {
            printf("yes!\n");
            break;
        } else if (guess > secret) {
            printf("dale\n");
        } else {
            printf("xiaole\n");
        }
        chance--;
    }

    return 0;
}
