#include <stdio.h>
#include <math.h>

void limite( int n){
double esp = 0.01;
double s=0;


while( 1>-(esp*n*n)) {
		
s += (1.0/(n*n));
printf("\n la limite de la suite S vaut = %f",s);
n++;
}}

int main(){
	
	int n=50;
	limite(n);	
	
}
