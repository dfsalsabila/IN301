#include <stdio.h>
#define N 6


void init(int tab[N]){
	
	tab[0]=2; tab[1]=3; tab[2]= 2;
tab[3]=0; tab[4]=5; tab[6]=7;
}
	
int somme(int tab[N], int g, int d){
int s=0;
int i;
for(i=g; i<=d; i++)
   s+= tab[i];

return s;	
}

int main(){
int tab[N];
	int g = 1;
	int d = 4;
	int s = 0;
	
init(tab);
s=somme(tab,g,d);
printf(" s = %d ", s);

}	
	
