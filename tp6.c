#include <stdio.h>
#include <math.h>
float calcularAreaRectangulo(float longitud, float altura);
float calcularPerimetroRectangulo(float longitud, float altura);
float calcularDiagonalRectangulo(float longitud, float altura);

float calcularAreaCirculo(float area);
float calcularPerimetroCirculo(float perimetro);

void imprimirResultados(float area, float perimetro, float diagonal);

int main()
{
 float radio,longitud,altura;
 unsigned int n;
 printf("1.Circulo\n2.Rectangulo\n3.Exit\n");
    printf("Seleccione una opcion: ");
    scanf("%u",&n);
    
    switch(n){
     case 1: //circulo area y perimetro.
     printf("Circulo seleccionado\n");
         printf("Ingrese radio:");
         scanf("%f",&radio);
        float area = calcularAreaCirculo(radio);
       float perimetro = calcularPerimetroCirculo(radio);
           imprimirResultados(area,perimetro,0);
        break;
     case 2: //Rectangulo
      printf("Rectangulo seleccionado\n");
        printf("Ingrese Longitud: ");
        scanf("%f",&longitud);
         printf("Ingrese Altura: ");
        scanf("%f",&altura);
        
        area = calcularAreaRectangulo(longitud,altura);
         perimetro=calcularPerimetroRectangulo(longitud, altura);
         float diagonal= calcularDiagonalRectangulo(longitud,altura);
             imprimirResultados(area,perimetro,diagonal);
        break;
     case 3: //Exit
    break;
        default:
        break;
    }
    return 0;
}
float calcularAreaCirculo(float area){
 float a;
 a = 3.14*(area*area);
 return a;
}

float calcularPerimetroCirculo(float perimetro){
 float per;
 per= 2*3.14*perimetro;
 return per;
}

float calcularAreaRectangulo(float longitud, float altura){
  float a= longitud*altura;
 return a;
}

float calcularPerimetroRectangulo(float longitud, float altura){
 float per;
 per = 2 * (longitud + altura);
 return per;
}

float calcularDiagonalRectangulo(float longitud, float altura){
 float diag;
  diag = sqrt((longitud*longitud)+(altura*altura));
 return diag;
}

void imprimirResultados(float area, float perimetro, float diagonal){
   printf("El area es: %.2f\nLa perimetro es:%.2f\n",area,perimetro);
 if(diagonal>0)
 printf("La diagonal es:%.2f",diagonal);
}
