#include <math.h> 
#include <stdio.h>

void espace(int n){
	int i;
	for (i=n;i>0;i--){
	
	printf(" ");	}
		}
		

void une_etoile( int n){	
	int i,j;
	j=n;
	for (i=n;i>0;i--){
		{
	
	while (j>0){
	
	printf(" ");j--;	}
		};
		printf( "*");
		printf("\n");
		j--;
		
	}
         }

		int main(){
			int n;
			n=15;
			
			une_etoile(n);
			
			
		}
			
	
	

