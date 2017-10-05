#include <stdio.h>
#include <math.h>



int factorielle(int n){
int f;
if (n<=1)
f= 1;
else f=n*factorielle(n-1);
return f;
}

int main(){
int n = 5;
 int y;
 y = factorielle(n);
 printf("factorielle de %d vaut : %d", n,y);

}
