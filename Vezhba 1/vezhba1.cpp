#include <iostream>
using namespace std;

int main() {
   int pass = 0; // promenliva za premini vo nizata
   int a[25] = {'S','i','m','o','n','a',' ','S','t','a','n','k','o','v','s','k','a',' ','I','N','K','I','9','3','6'}; // niza od 24 karakteri

   cout << "Nizata so koja rabotime: " << endl; 
   for(int i=0; i<25; i++) { 
      printf("%c ", a[i]); // ispisuvanje na nizata, so format za ispisuvanje na elementite
      // i promenliva koja go ima ASCII kodot na sekoj element od nizata a.
   }

   for(int i=0; i<25; i++) { // se pregleduva sekoj element od nizata
      for (int j=0; j<25; j++) { // ciklus kade se vrsi sporedba megju elementite
         if(a[i]<a[j]) { // proveruva dali elementot e pomal od vtoriot
            int temp = a[i]; // dokolku e, se zacuvuva prviot element
            a[i]=a[j]; // vtoriot element se dodava na mestoto od prviot element
            a[j] = temp; // prviot element se dodava na mestoto na vtoriot
         }
      }
      pass++; // procesot trae dodeka ne se ispolni uslovot
   }

   cout << "\nSortirana niza: " << endl; 
   for(int i=0;i<25;i++) {
      printf("%c ", a[i]); // ja ispisuva novata, sortirana niza vo konzolata
   }

   cout << "\nKolku pati se isvrshija premini:  " << pass << " pati" << endl; // ispisuva kolku premini sme imale pri sortiranjeto
   return 0;
}