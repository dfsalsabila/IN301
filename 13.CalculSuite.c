#include <stdio.h>
#include <math.h>


double suite(int k, int n){
	
	
	
if(k==n) return sqrt(n);
else return sqrt(k+suite (k+1,n));	
}
int main()
{
	int i;
for (i=1;i<100;i++)

printf("%f\n",suite(1,i));

}
