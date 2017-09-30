#include <stdio.h> 
#include <math.h>

	
void conversion(int s){
	int h,m;
	
	h= s/3600;
	s=s%3600;
	m=s/60;
	s=s%60;
printf("\n %d secondes correspond à %d heures %d minutes %d secondes",s+60*m+3600*h,h,m,s);	
}

int main(){
	
	int s;
	s=33;
	conversion(s);
	
}
