#include <stdio.h>
#include <math.h>
#define N 14

void init(int tab[N]){
	int i;
	for (i=0; i<N;i++)
	tab[i]=1;
   
}
void produit(int tab[N]){
	int p,i;
	for (i=0; i<N;i++)
	p*=tab[i];

}
int minimum(int tab[N]){
    int min,i;
     min= tab[0];
    for (i=1; i<N;i++){
    if (tab[i]<min)
       min =tab[N];}
    return min;
 }
    
        
