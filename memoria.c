#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  int tamanho_memoria=10;
  int memoria[tamanho_memoria];
  int opcao=0;
  int stack_pointer;
  
  srand(time(NULL));
  for(int i=0;i<tamanho_memoria;i++){
    memoria[i]=rand();
  }

  while(1){
    printf("Digite 1 para ler a memoria\n");
    printf("Digite 2 para escrever na memoria\n");
    printf("Digite 3 para sair\n");
    scanf("%d",&opcao);
    if(opcao==1){
      printf("Digite a posicao da memoria: 0:%d\n",(tamanho_memoria-1));
      scanf("%d",&stack_pointer);
      printf("%d\n",memoria[stack_pointer]);
    }
    else if(opcao==2){
      printf("Digite a posicao da memoria: 0:%d\n",(tamanho_memoria-1));
      scanf("%d",&stack_pointer);
      scanf("%d",&memoria[stack_pointer]);
    }
    else{
      break;
    }
    opcao=0;
  }
}
