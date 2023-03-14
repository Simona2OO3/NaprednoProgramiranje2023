#include <stdio.h>
#include <time.h>

int main ()
{
  time_t rawtime;        // Deklariranje na promenliva na tip od time_t za da go zemi vremeto
  struct tm * timeinfo;  // Deklariranje pokazhuvach na promenliva "struct tm" za da go vnesi vremeto

  time ( &rawtime );     // Go zema segashnoto vreme vo i go zachuvuva vo "rawtime" 
  timeinfo = localtime ( &rawtime );  // "Rawtime" go deli i go zachuvuva kako "timeinfo"
  printf ( "Deneshnite datum i vreme se : %s", asctime (timeinfo) ); // go pechati vremeto i datumot vo string format so koristenje na "asctime" 

  return 0;
}