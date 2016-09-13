#include <stdio.h>
int main(void)
{
    float nota1,nota2,nota3,nota4,media;
    printf ("Digita sua nota 1:");
    scanf ("%f", &nota1);
printf ("Digita sua nota2:");
scanf ("%f", &nota2);
printf ("Digita sua nota3:");
scanf ("%f", &nota3);
printf ("Digita sua nota4:");
scanf ("%f", &nota4);
media=(nota1*2+nota2*2+nota3*3+nota4*3/10);
if (media>=6) {
printf ("Você foi aprovado");
}
else  {
printf ("Você está de dependencia");
}
return 0;
}

