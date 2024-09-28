#include<stdio.h>
int main() {
   int giorno1,giorno2,mese1,mese2,anno1,anno2,differenza;
   printf("Calcola la differenza tra le due date in giorni, mesi, anni\ninserire la data nel formato dd mm yyyy");
   scanf("%d %d %d, &giorno1,&mese1,&anno1");
   printf("Inserire la seconda data sempre nel formato dd mm yyyy");
   scanf("%d %d %d, &giorno2,&mese2,&anno2");
   differenza= giorno2-giorno1+(mese2-mese1)*30+(anno2-anno1)*360;
   giorno1=differenza%30;
   mese1=(differenza/30)%12;
   anno1=differenza/360;
   printf("La differenza tra le due date è: %d giorni, %d mesei, %d anni\n,giorno1,mese1,anno1");
}