/*      Programme d'affichage d'image

Date : 14/04/25
Rev.: 1.0
Auteur: J.B.
*/
//////////////////////////////////////////////////////////////////////////////////////////

#include <Arduino.h>
#include "affichage.h"
#include "images.h"

/////////////////////////////////////////////////////////////////////////////
void setup()
{
  initAfficheur();
  effacerAfficheur();
}

void loop()
{
  afficher(LIGNE_1, "Cybersecurite");
  afficher(LIGNE_2, "Informatique");
  afficher(LIGNE_3, "ELectronique");
  afficher(LIGNE_4, "& reseaux");
  delay(2000);
  effacerAfficheur();
  afficherImage(avengers);
  delay(2000);
  effacerAfficheur();
}
