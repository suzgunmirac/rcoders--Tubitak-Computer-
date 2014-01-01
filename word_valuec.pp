//Word Value Program

#include <stdio.h>

int main (void)
{
    char word[20] = {0};
    int value = 0;

    printf ("Please enter your name without space and use lowercase English characters:\n");
    scanf ("%s", word);
    int i;

    for (i=0; word[i] != '\0'; i++){ // Asci'de a, 97
        value += word[i] -96;
    }

    printf ("%d", value);
}
