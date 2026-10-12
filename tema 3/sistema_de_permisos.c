/* Nombre del programa: Sistema de permisos de acceso a recursos
    Autor: Raul Ruiz Escribano
    Fecha: 04/10/2026*/

#include <stdio.h>
#define admin 0b10000000
#define RRHH  0b01000000
#define Conta 0b00100000
#define Ventas 0b00010000
#define Almacen 0b00001000
#define Email 0b00000100
#define Web 0b00000010
#define Lectura 0b00000001

//Declaración de funciones
int funcionConsultarPermisos(unsigned char permisos);
int funcionConcederPermisos(unsigned char permisos);

void main(){

    unsigned char permisos=0;
    int operacion=0;
	
	//Le pido al usuario que introduzca el byte de permisos en decimal
	printf("introduce en decimal tu byte de permisos: ");
	scanf("%hhu",&permisos);
    
    //Hago un bucle para que el usuario pueda consultar sus permisos(0) y conceder permisos(1) y si no para salir del programa(2)
    while(operacion!=2){
        printf("Que operacion quieres realizar (0-Consultar permisos, 1-Conceder permisos, 2-Salir): ");
        scanf("%d",&operacion);
        if(operacion==0){
            funcionConsultarPermisos(permisos);
        }
        else if(operacion==1){
            permisos = funcionConcederPermisos(permisos);
        }
        else if(operacion==2){
            printf("Saliendo del programa...\n");
        }
        else{
            printf("Operacion no valida, introduce 0, 1 o 2\n");
        }
    }
}

    //Declaro la funcion para consultar los permisos del usuario
    int funcionConsultarPermisos(unsigned char permisos){
        printf("Tus permisos son: \n");
        if(permisos & admin){
            printf("Administrador\n");
        }
        if(permisos & RRHH){
            printf("Recursos Humanos\n");
        }
        if(permisos & Conta){
            printf("Contabilidad\n");
        }
        if(permisos & Ventas){
            printf("Ventas\n");
        }
        if(permisos & Almacen){
            printf("Almacen\n");
        }
        if(permisos & Email){
            printf("Email\n");
        }
        if(permisos & Web){
            printf("Web\n");
        }
        if(permisos & Lectura){
            printf("Lectura\n");
        }
    }

    //Declaro la funcion para conceder permisos al usuario
    int funcionConcederPermisos(unsigned char permisos){
            int op=0;
            printf("Introduce el permiso que quieres conceder (0-Admin, 1-RRHH, 2-Contabilidad, 3-Ventas, 4-Almacen, 5-Email, 6-Web, 7-Lectura): ");
            scanf("%d",&op);
            if(op<0 || op>7){
                printf("Permiso no valido\n");
                return permisos;
            }else{
            //Hago un switch para cuando reciba la operacion asignarle el permiso correspondiente al usuario
            switch(op){
                case 0:
                    permisos = permisos | admin;
                    break;
                case 1:
                    permisos = permisos | RRHH;
                    break;
                case 2:
                    permisos = permisos | Conta;
                    break;
                case 3:
                    permisos = permisos | Ventas;
                    break;
                case 4:
                    permisos = permisos | Almacen;
                    break;
                case 5:
                    permisos = permisos | Email;
                    break;
                case 6:
                    permisos = permisos | Web;
                    break;
                case 7:
                    permisos = permisos | Lectura;
                    break;
            }
            printf("Permiso concedido, tus permisos actuales son: %hhu\n",permisos);
            }
        return permisos;
        }
        