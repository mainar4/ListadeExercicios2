#include<stdio.h>
#include<stdlib.h>
#include "bibliotecaMatriz.h"

int main(){
	
    double n=0.0, M[12][12];
    char T[2];
    int C,x,y,i,p=11;
    scanf("%s", &T);
    for(x=0;x<=11;x++)
    {
        for(y=0; y<=11; y++)
            scanf("%lf", &M[x][y]);
    }
    for(i=1; i<=11;i++)
    {
        for(C=11; C>=p;C--)
            n+=M[i][C];
        p--;
    }
    if(T[0]=='S')
        printf("%.1lf\n",n);
    else if(T[0]=='M')
    {
    n=n/66.0;
        printf("%.1lf\n",n);
    }
    return 0;
}
