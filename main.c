#include <stdio.h>

int main(void)
{
    int i;
    int fattori;
    int numeroDaMoltiplicare;
    int risultato = 0;

    printf("Digita un numero da moltiplicare\n");
    scanf("%d", &numeroDaMoltiplicare);

    printf("Digita per quale fattore vuoi moltiplicare il numero\n");
    scanf("%d", &fattori);

    for(i = fattori; i > 0; i--)
    {
        risultato = risultato + numeroDaMoltiplicare;
    }

    printf("Il risultato della moltiplicazione è %d", risultato);

    return 0;
}