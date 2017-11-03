#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h> 


struct element {
	
	int val;
	struct element * suiv;
	
};

typedef struct element* Liste;

int est_vide(Liste l){
	
	return l==NULL;}
	
void afficheliste(Liste l){
	if (!est_vide(l)){
		printf("%d\n",l->val);
		afficheliste(l->suiv);
	}  
	
}   //Si on inverse printf et afficheliste, on affiche la liste inversé

Liste creerElement (int n){
	Liste l;
	l=malloc(sizeof(struct element));
	if (l==NULL){
		printf("allocation memoire enchainée \n");
		exit(EXIT_FAILURE);
	}
	l->val=n;
	l->suiv=NULL;
	return l;
	
	}

Liste libere(Liste l){
	if (!est_vide(l)){
		l->suiv = libere(l->suiv);
		free(l);
	}
	return NULL;
}

Liste inserdebut(Liste l,int n){
   Liste lres=creerElement(n);
lres->suiv=l;
return lres;}

	
Liste inserfin(Liste l,int n){
	if(est_vide(l)){
		return inserdebut(l,n);
		}
	Liste ltmp=creerElement(n);
	
	if (est_vide(l->suiv)){
			l->suiv=ltmp;
			return l;
			}
			Liste ltmp2 =l;
	while (!est_vide(l->suiv)){
		l=l->suiv;
	}
	l->suiv=ltmp;
	
	return ltmp2;
}

Liste inserfin2(Liste l, int n){
	
	Liste ltmp,ltmp2;
	ltmp = creerElement(n);
	if(est_vide(l)) return ltmp;
	ltmp2 =l;
	while (!est_vide(l->suiv)) l=l->suiv;
	l->suiv =ltmp;
	return ltmp2;
		
}

 Liste inserfinR(Liste l, int n){
Liste ltmp;
if(est_vide(l)){
	ltmp=creerElement(n);
	return ltmp;}
l->suiv=inserfinR(l->suiv,n);
return l;	 
	 
 }	

Liste ajoutTrie(Liste l, int n){
	Liste ltmp,l2;
	if (est_vide(l) || (n <l->val)) return inserdebut(l,n);
	l2=l;
	while((!est_vide(l->suiv)) && (l->suiv->val<n))
		l=l->suiv;
		
ltmp=creerElement(n);
ltmp=l->suiv;
l->suiv=ltmp;
return l2;
}

Liste inserTrie(Liste l, int n){
	
	if ((est_vide(l)) ||( n < l->val )){
	return inserdebut(l,n);			
	}
	l->suiv = inserTrie(l->suiv, n);
	return l; 
}

int estTrieTest(Liste l ){
while ( !est_vide(l) && !est_vide(l->suiv) )
{
	  if (l->val > l->suiv->val ) return 0;
	  else l=l->suiv;
	  
	}
	return 1;
	
}


int Taille(Liste l ){
int cmp=0;
while (!est_vide(l)){
	
cmp ++;
l=l->suiv;
} return cmp;
}
	
int rechercheElement(Liste l,int n){ 
	
	while (!est_vide(l)) {
	    if (n== l->val ) return 1;
	    else l=l->suiv;
	    
	} return 0;
}
				
Liste valeurinit(Liste l){
	
    int i;
    for (i=0; i<10;i++)	{
		l=inserTrie(l, (rand() % (11)));
		
	}return l; }
	
Liste concat (Liste l1,Liste l2){
	if (est_vide(l1)) return l2;
	Liste l=l1;
	while (!est_vide(l1->suiv)) l1=l1->suiv;
	l1->suiv=l2;
	return l;
}
	
Liste supprimeElement(Liste l,int n){ 
	Liste lcour, lpred;
	  
    if (est_vide(l)) return l ; 
    
	if (l->val ==n){  lcour=l->suiv;  free(l); return lcour; }
	
	lpred = l; lcour =l->suiv;
	
	while(!est_vide(lcour)){
		if (lcour -> val ==n){
			lpred ->suiv = lcour ->suiv;
		    free(lcour);
		    return l; }
		    
		    lpred = lcour;
		    lcour = lcour ->suiv;
		}
		return l;
	}
	
Liste fusion (Liste l1, Liste l2){


if (est_vide(l1) return l2;
if (est_vide(l2) return l1;
if (l1->val < l2->val){
	l1->suiv = fusion(l1->suiv, l2);
	return l1;
	
    }
  else l2->suiv = fusion(l1,l2->suiv);
  return l2;
}	
	
 



		

int main()
{
	 srand(time(NULL));
	 
	Liste l;		
     l=NULL;
int cmp;
l=valeurinit(l);
afficheliste(l);

cmp =Taille(l);
printf("nb d'elements = %d\n",cmp);
 cmp = rechercheElement(l,3);
printf("element 3 existant = %d\n",cmp);



}
