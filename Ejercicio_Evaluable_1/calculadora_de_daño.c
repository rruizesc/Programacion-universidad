/*  Nombre del programa: Calculadora de dano
    Autor: Raul Ruiz Escribano
    Fecha: 12/10/2026*/

#include <stdio.h>

void main(){
	int ataque=0,nivel=0,armadura=0,vida=0;
	char critico='\0';
	float dano=0,vidafinal;
	
	printf("Ataque base: ");
	scanf("%d",&ataque);
	while(getchar() != '\n');//limpio el buffer
	printf("Nivel: ");
	scanf("%d",&nivel);
	while(getchar() != '\n');//limpio el buffer
	printf("Critico (s/n): ");
	scanf("%c",&critico);
	while(getchar() != '\n');//limpio el buffer
	printf("Armadura enemigo: ");
	scanf("%d",&armadura);
	while(getchar() != '\n');//limpio el buffer
	printf("Vida del enemigo: ");
	scanf("%d",&vida);
	while(getchar() != '\n');//limpio el buffer
	
	//calculamos el daño
	dano=ataque*(1+nivel*0.05);
	if(critico=='s'){
		dano=dano*2;
	}
	dano=dano*100/(100+armadura);
	printf("Dano final: %.1f \n",dano);
	
	//muestro mensaje por categoria de daño
	if(dano<10){
		printf("Rasguno\n");
	}else if(dano>=50){
		printf("Devastador\n");
	}else{
		printf("Golpe solido\n");
	}
		
	//calculamos la vida restante
	if(dano>=vida){
		printf("Enemigo derrotado");
	}else{
		vidafinal=vida-dano;
		printf("Al enemigo le quedan %.1f puntos de vida",vidafinal);
   }
}