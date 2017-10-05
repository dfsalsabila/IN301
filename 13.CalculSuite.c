#include <stdio.h>
#include <math.h>


double suite(int k, int n){
	
	
	
if(k==n) return sqrt(n);
else return sqrt(k+suite (k+1,n));	
}
int main()
{
	int i;
for (i=0;i<10000;i++)

printf("%d\n",i);

}
