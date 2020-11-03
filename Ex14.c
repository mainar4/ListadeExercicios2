#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaMatriz.h"

int main(){

float tmedio;
int tempo[10],mt=-1,st=0, melhorvolta,i;
for(i=0;i<10;i++)
printf("\nEntre com o tempo obtido na volta em minutos %d: ",i);
scanf("%d",&tempo);
if( tempo > mt)
{
mt=tempo;
melhorvolta=i;
}
st=st+tempo;

tmedio=st/10;
printf("\nMelhor tempo foi: %d.\n ",mt);
printf("\nVolta q ocorreu o melhor tempo foi: %d volta.\n ",melhorvolta);
printf("\nTempo medio das 10 voltas: %f\n ",tmedio);
system("pause");
}

