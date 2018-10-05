#include <stdio.h>
#include <math.h>
//Autor: Brunp Portilla
//Este programa pide al usuario los componentes de una funcion cuadratica y le regresa los valores de x.

void FormulaMenos (double a, double b, double c){
    double Fresta = 0;
    Fresta = ((0-b) - (sqrt(pow(b,2) - (4*a*c)))) / (2*a);  //FORMULA GENERAL CON RESTA
    printf("X2 = %lf\n", Fresta);
}

void FormulaMas (double a, double b, double c){
    double Fsuma = 0;
    Fsuma = ((0-b) + (sqrt(pow(b,2) - (4*a*c)))) / (2*a);   //FORMULA GENERAL CON SUMA
    printf("X1 = %lf\n", Fsuma);
}

int main() {
    double A;
    double B;
    double C;
    double resta;
    double suma;
    printf("En este programa resolxeremos la X de la ecuancion \ncuadratica que me des usando este formato: Ax^2+Bx+C\n");
    printf("Inserte A, B y C separado por comas:\n");
    scanf("&lf, &lf, &lf", &A, &B, &C);                     //Pido componentes
    while (A == 0) {
        printf("El valor de A no puede ser 0, dame otro numero:\n");
        scanf("%lf", &A); }

    if (pow(B, 2) < 4*A*C) {            //checo que sea posible la operacion
        printf("No puedo resolver X porque no puedo sacar raiz cuadrada de un numero negativo :-(\n");
    } else {
        FormulaMas(A, B, C);
        FormulaMenos(A, B, C);      //mando valores a void para que se haga las operaciones y saquen los valores de X
    }
    return 0;
}
