#include <stdio.h>

int main (){
int i, j;

    printf("this is the multiplication table \n");
    for (j=1; j<=12; j++)
    {
    printf(" multiplication table of %d", j);
    for(i=1; i<=12; i++)
    {
      printf("\n%d*%d=%d\n",j, i, i*j);
      
    }
    }
}
