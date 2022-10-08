# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main() {
    // Random seed based on time
    srand(time(NULL));
    // Create a number that's 0 or 1
    int coin = rand() % 2;

    if (coin == 0) {
        printf("Heads\n");
    } else {
        printf("Tails\n");
    }
}
