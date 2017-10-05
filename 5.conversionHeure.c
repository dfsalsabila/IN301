#include <stdio.h> 
#include <math.h>

	
void conversion(int s){
	int h,m;
	
	h= s/3600;
	s=s%3600;
	m=s/60;
	s=s%60;
if ( h>1) {
		if (m>1){
			if (s>1)
			printf("\n %d secondes correspond à %d heures %d minutes %d secondes",s+60*m+3600*h,h,m,s);	
	        else printf("\n %d secondes correspond à %d heures %d minutes %d seconde",s+60*m+3600*h,h,m,s);	
		         } 
		else 
	      { if (s>1) printf("\n %d secondes correspond à %d heures %d minute %d secondes",s+60*m+3600*h,h,m,s);	
            else printf("\n %d secondes correspond à %d heures %d minute %d seconde",s+60*m+3600*h,h,m,s);	
		 } }
else { if (m>1)
	           { if (s>1) printf("\n %d secondes correspond à %d heure %d minutes %d secondes",s+60*m+3600*h,h,m,s);	

			     else printf("\n %d secondes correspond à %d heure %d minutes %d seconde",s+60*m+3600*h,h,m,s);	

					   }
		else { if (s>1) printf("\n %d secondes correspond à %d heure %d minute %d secondes",s+60*m+3600*h,h,m,s);	

			 else printf("\n %d seconde correspond à %d heure %d minute %d seconde",s+60*m+3600*h,h,m,s);	
		   }
		 }
	}



int main(){
	
	int s;
	s=3600;
	conversion(s);
	
}
