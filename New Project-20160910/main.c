#include <stdio.h>
int main(void)
{
    int idade;
    printf ("digite sua idade:");
    scanf ("%d", &idade);
    
    if (idade<18){
        printf ("Menor de idade !");
    }
    else {
    printf ("Maior de idade !");
    }
  
      return 0;  
    }
