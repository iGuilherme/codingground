#include <stdio.h>
float falta (float x, float y, float z);
int main ( ) {
float n1,n2,n3 ;
printf ("Digite sua nota 1 \n");
scanf ("%f", &n1);
printf ("Digite sua nota 2 \n");
scanf ("%f", &n2);
printf ("Digite sua nota 3 \n");
scanf ("%f", &n3);
printf ("Voce precisa de %.2f para passar nessa materia seu vadio ", falta (n1,n2,n3));
return 0;
}
float falta (float x, float y, float z){
    return (60-(x*2+y*2+z*3))/3;
}



