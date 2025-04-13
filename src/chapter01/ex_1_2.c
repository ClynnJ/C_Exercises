/*Testing of escape sequences*/

#include <stdio.h>

int main(void)
{

    printf("PRESENTATION\n\tName: Charlinne\n\tAge: 24\n\tHeight: 1.78 m\n\n\f");

    printf("This is not printed\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\bHello buddy, how are you?\n");

    printf("This is not printed too\rYou are a \"beautiful\" person not \'ugly\'");

    printf("\v\v\v\v\v:) :| :\\ :(\t\t\x30 \x31 \x32 \x33 \x34 \x35 \x36 \x37 \x38 \x39 \x31\x30");

    return 0;
}
