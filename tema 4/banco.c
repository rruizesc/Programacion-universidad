/* Nombre del programa: Banco
    Autor: Raul Ruiz Escribano
    Fecha: 06/10/2026*/
	
#include <stdio.h>

int funcionIntroducirSaldo(int saldo);
int funcionRetirarSaldo(int saldo);

void main(){
	//declaro mis variables
    int saldo=1000;
	int op=0;
	int contador=0;
	
	//hago un bucle que se ejecute constantemente a no ser que pase por parametro un 3
	while(op!=3){
		printf("Que es lo que quieres realizar (0)introducir saldo (1)retirar saldo (2)mostrar el saldo (3)salir del programa \n");
		scanf("%d%",&op);
		while(getchar() != '\n');
		
		if(op==0){
			//llamo a la funcion de introducir saldo
			saldo=funcionIntroducirSaldo(saldo);
		}else if(op==1){
			//llamo a la funcion de retirar saldo
			saldo=funcionRetirarSaldo(saldo);
		}else if(op==2){
			printf("Tu saldo actual es: %d \n", saldo);
		}else if(op==3){
			printf("Saliendo del programa \n");
		}else{
			printf("Operacion no valida, introduce un dato valido \n");
		}
	}
}
	int funcionIntroducirSaldo(int saldo){
		int total=0, suma=0;
		char menu='y';
		
		while(menu!='n'){
			printf("Cuando saldo quieres introducir \n");
			scanf("%d",&suma);
			while(getchar() != '\n');
			saldo +=suma;
			total+=suma;
			printf("Quieres seguir introduciendo saldo: y/n \n");
			scanf(" %c",&menu);
			while(getchar() != '\n');
		}
		printf("El total de saldo introducido es: %d \n",total);
		return saldo;
	}
	int funcionRetirarSaldo(int saldo){
		int retirar=0, total=0;
		char menu='y';
		
		while(menu!='n'){
			printf("Cuando saldo quieres retirar \n");
			scanf("%d",&retirar);
			while(getchar() != '\n');
			
			if(saldo>retirar && retirar >0){
			saldo-=retirar;
			total+=retirar;
			}else{
				printf("no se puede realizar la trasaccion \n");
			}
			printf("Saldo restante: %d \n",saldo);
			printf("Quieres seguir retirando saldo: y/n \n");
			scanf("%c",&menu);
			while(getchar() != '\n');
		}
		printf("El total de saldo retirado es: %d \n",total);
		return saldo;
	}