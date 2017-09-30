#include <stdio.h> 
#include <math.h>
	
void Egyptienne(int X, int Y){
	int tmp=0;
	printf("\n  %d × %d \n",X,Y);
	
	while ( X>1){
		if (X%2==0){
		X=X/2;
		Y=2*Y;
	          }
	else { X--;
		tmp =tmp+Y;
	          }
	          
printf( "= %d × %d + %d \n",X,Y,tmp);
   
		  }
		 
printf("= %d \n",(tmp+Y));
		  }
		  
		  
int main(){
	
	int Y=23;
	int X=87;
	
	Egyptienne(X,Y);
	
}
	
