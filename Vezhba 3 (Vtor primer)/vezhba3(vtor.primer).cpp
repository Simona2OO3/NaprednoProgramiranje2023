#include <stdio.h>      // printf 
#include <time.h>       // time_t, time, ctime (Standarna biblioteka za rabota so vreme i datumi) 

int main () // Zapochnuva glavnata funkcija na kodot
{
  time_t rawtime; //  So deklariranje na promenlivata "time()", se zema segashnoto vreme i se vnesuva vo "rawtime"

  time (&rawtime); // Ja povikuva funkcijata "time()", za da se dobie vremeto zachuvano vo promenlivata "rawtime"
  printf ("The current local time is: %s", ctime (&rawtime)); // Se pechati segashnoto lokalno vreme, i vremeto se konvertira vo tekst so pomosh na funkcijata "ctime()".

  return 0; // Go vrakja rezultatot 0 kako rezultat na glavnata funkcija.
}