#include <stdio.h>


int main(){
int debut,fin,resultat=0 ,resultat1=0,resultat2=0,prix=0;
printf("donner la debut:");
scanf("%d",&debut);
printf("donner la fin:");
scanf("%d",&fin);
if (fin>24 || debut>24 || fin<0 || debut<0)
    printf("Les heures doivent être comprises entre 0 et 24 !");
else {
if (fin==debut)
    printf("Bizarre, vous n’avez pas loué votre vélo bien longtemps !");
else if (fin<debut)
    printf("Bizarre, le début de la location est après la fin");
else  {
        if ((fin>17 && debut>17) || (fin<7 && debut<7))
            {resultat=fin-debut;
            prix=10*resultat;
            printf("%d  heure(s) au tarif horaire de 10 dinars\n",resultat);
            printf("Le montant total à payer est %d dinars",prix);}
        else if (fin<=17 && debut>=7)
        {
            resultat=fin-debut;
            prix=20*resultat;
            printf("%d  heure(s) au tarif horaire de 20 dinars\n",resultat);
            printf("Le montant total à payer est %d dinars",prix);}
        else if (fin>17 && (debut>=7 && debut<=17)){
            resultat1=fin-17;
            resultat2=17-debut;
            resultat=resultat1+resultat2;
            prix=resultat1*10+resultat2*20;
            printf("%d  heure(s) au tarif horaire de 20 dinars\n",resultat2);
            printf("%d  heure(s) au tarif horaire de 10 dinars\n",resultat1);
            printf("Le montant total à payer est %d dinars",prix);}
        else if ((debut<7)&&(fin>=7 && fin<=17)){
            resultat1=7-debut;
            resultat2=fin-7;
            resultat=resultat1+resultat2;
            prix=resultat1*10+resultat2*20;
            printf("%d  heure(s) au tarif horaire de 20 dinars\n",resultat2);
            printf("%d  heure(s) au tarif horaire de 10 dinars\n",resultat1);
            printf("Le montant total à payer est %d dinars",prix);}
        }


        }
        }