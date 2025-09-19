//TP7-Arreglos
#include <stdio.h>
#define TAM 1000

int main(){
 
	float precio[TAM];
	int i, cantidad; 
	int codigo[TAM];
	
	printf("Ingrese cuantos productos ingresara: ");
	scanf("%d",&cantidad);
	
	for( i=0; i<cantidad; i++) {
		printf("Precio del producto %d: ",i+1);
		scanf("%f",&precio[i]);
		
	      	while(precio[i]<0 ) {
		       	printf("Error: El precio debe ser positivo\n");
           printf("Precio del  producto %d: ",i+1);
           scanf("%f",&precio[i] );
		         }
}
for(i=0; i<cantidad;i++){
 
		printf("Ingrese codigo del producto %d: ",i+1);
		scanf("%d",&codigo[i]);
		
		while(codigo[i]<0 || codigo[i]> 999999999 ) {
		 printf("ERROR: El codigo debe ser positivo con maximo 9 cifras\n");
		 	printf("Ingrese codigo del producto %d: ",i+1);
		   scanf("%d",&codigo[i]);
		}
}
	 printf("Precios    | Codigos\n");
	for(i=0; i<cantidad ; i++){
	 printf("%.2f       | %d\n",precio[i],codigo[i]);
	 
 	}
	
	return 0;
}
