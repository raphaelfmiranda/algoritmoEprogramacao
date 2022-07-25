#include <stdio.h>
int main()
{
    char texto[32];

    puts ( "Digite uma frase: " )   ;   fgets ( texto, 32 , stdin );

    printf( "%s", texto );

return 0;
}