#include <stdio.h>

int main(void){
  int porta=0;
  int controle=0;
  int alarme=0;
  int sensor=0;
  int variavel_aux=0;

  while(1){
    scanf("%d",&controle);
    scanf("%d",&porta);
    
    if(controle==1){
      if(sensor==0){
        sensor=1;
      }
      else if(sensor==1){
        sensor=0;
      }
    }

    if(variavel_aux==1){
      sensor=0;
      alarme=0;
      controle=0;
      porta=0;
    }
    
    if(sensor==1 && porta==1){
      alarme=1;
    }
    else{
      alarme=0;
    }

    printf("%d",alarme);
  }
}
