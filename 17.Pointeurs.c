#include <stdio.h>
#include <math.h>


void affiche(){
 char tab[10];
	int y;
	char (*p)[10] =&tab;
y = sizeof(&(*p)[2]);

printf("\n%d\n",y);
	
}
void varier(int *a, int*b){
int tmp;
tmp= *a;
*a =*b;
*b=tmp;	printf("\nt=%d\nt=%d\n",*a,*b);
}
void renitPointeur(int **p){
*p=NULL;	}

int main(){
	int a;
	int *p=&a;
	renitPointeur(&p);
printf("\np=%p\n",&p);


}
