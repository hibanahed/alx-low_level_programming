#include <stdio.h>
#include <string.h>
#include "main.h"

// Function to reverse a sentence
void print_rev(char *s) {
    int length = strlen(s);
    for (int i = length - 1; i >= 0; i--) {
        putchar(s[i]);
    }
    	_putchar('\n');

}
