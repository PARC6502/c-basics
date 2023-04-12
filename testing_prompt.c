#include <stdio.h>
#include "Headers/prompt.h"

int main() {
    char name[64];
    gen_prompt("What's your name? ", "%s", &name);
    printf("Hello %s, nice to meet you \n", name);
}