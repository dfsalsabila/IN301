#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Tableau {
	int taille;
	int tab[100];
	
	
};
typedef struct Tableau tableau;

int alea(int n){


	return rand()%(n+1);;
}

void init(tableau *t){
	
	int i;
	(*t).taille = 10;
for (i=0;i<10;i++){
	(*t).tab[i]=alea(20);
     }	
}
void affiche(tableau t){
	int i;
	for( i=0;i<t.taille-1; i++){
	printf("\n%d\n",t.tab[i]);}
	
}
void produit(tableau t){
	int i,tmp;
	tmp=t.tab[0];
	for( i=1;i<t.taille-1; i++){
		tmp*=t.tab[i];}
	printf("\nle produit des éléments du tableau est %d\n",tmp);
	
}
void min(tableau t){
	int i,min;
	min=t.tab[0];
	for( i=1;i<t.taille-1; i++){
		if (t.tab[i]<min)
		    min= t.tab[i];}
		    
printf("\nle min du tableau est %d\n",min);
}




int main(){
srand(time(NULL));

tableau t;
init(&t);
affiche(t);
produit(t);
min(t);
}
