#include <stdio.h>

/* programma che chiede all'utente di inserire 10 interi di cui
 * l'applicazione stampa la somma */
int main() {
      int numero;        // un numero da leggere
      int somma;    // somma corrente

      somma = 0;         // all'inizio la somma e' 0

      /* leggi 10 numeri e sommali a somma */
      for(int i=1;i<=10;i++) {
            /* INPUT */
            printf("Introduci un intero positivo, please.\n");
            scanf("%d", &numero);

            /* aggiorna la somma */
            somma += numero;
      }

      /* OUTPUT */
      printf("\nLa somma dei numeri da te introdotti %c %d.\n", 138, somma);
      system("PAUSE");
}
