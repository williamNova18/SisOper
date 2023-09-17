#include <stdio.h>

int primeNumber(){
    printf("Escribe el numero el cual quieres saber si es primo: ");
    int numero;
    scanf("%d", &numero);
    int flag = 1;
    for( int i = 2; i < numero; i++  ){
       if(numero % i == 0){
           flag = 0;
           printf("el numero %d no es primo", numero);
           return 0;
       }
    }
    printf("El numero %d es primo", numero);
    return 0;
}

int leapYear(){
    printf("Escribe el year el cual quieres saber si es bisiesto: ");
    int year;
    scanf( "%d", &year );
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ){
        printf("El year es bisiesto");
        return 0;
    }else{
        printf("El year NO es bisiesto");
        return 0;
    }
    return 0;
    
}

int factorial(){
    printf("Escribe el numero el cual quieres saber su factorial: ");
    int numero;
    scanf( "%d", &numero );
    int resultado = 1;
    for( int i = 1; i <= numero; i++ ){
        resultado *= i;
    }
    printf("El factorial %d es %d", numero, resultado);
    return 0;
}

int power(int exponente, int base){
    int ans = 0;
    if( exponente == 0){
        return 1;
    }else if( exponente == 1){
        return base;
    }
    else{
        ans = (base *= power( exponente - 1, base));
    }
    return ans;
}

int leerdatosPower(){
    printf("Escribe la base: ");
    int base, exponente, ans;
    scanf( "%d", &base );
    printf("Escribe el exponente: ");
    scanf( "%d", &exponente );
    ans  = power( exponente, base );
    printf("El resultado es: %d", ans);
}

int parImpar(){
    printf("Escribe el numero el cual quieres saber si es par o impar: ");
    int numero;
    scanf("%d", &numero);
    if( numero % 2 == 0 ){
        printf("%d es par", numero);
    }else{
        printf("%d es impar", numero);
    }
    return 0;
}

int fibonacci(){
    printf("Escribe la cantidad de numeros de fibonacci que quieres ver: ");
    int numero;
    scanf("%d", &numero);
    int list[numero];
    for( int i = 0; i < numero; i++ ){
        if(numero >= 1){
            list[0] = 0;
        }
        if( numero >= 2 ){
            list[1] = 1;
        }
        if( i > 1 ){
            list[i] = list[i - 1] + list[ i - 2 ];
        }
        printf("%d, ", list[i]);
    }
    return 0;
}

int mayor(){
    int numero, numero2, numero3;
    printf("Escribe el primer numero: ");
    scanf("%d", &numero);
    printf("Escribe el segundo numero: ");
    scanf("%d", &numero2);
    printf("Escribe el tercer numero: ");
    scanf("%d", &numero3);
    if(numero >= numero2 && numero >= numero3){
        printf("El numero mas grande es el primero el numero %d", numero);
    }else if(numero2 >= numero && numero2 >= numero3){
        printf("El numero mas grande es el segundo el numero %d", numero2);
    }else{
        printf("El numero mas grande es el ultimo el numero %d", numero3);
    }
    
}

int minuscula(){
    char letra;
    printf("Escribe la letra que quieres saber si es minuscula: ");
    scanf("%c", &letra);
    if( letra >= 97 && letra <= 122 ){
        printf("La letra es minuscula");
    }else if( letra >= 65  && letra <= 90 ){
        printf("La letra es mayuscula");
    }else{
        printf("Caracter no valido");
    }
    return 0;
}

int octDecHex(){

    printf("Octal\tDecimal\tHexadecimal\n");
    for(int i = 1; i <= 10; i++) {
        printf("%o\t%d\t%x\n", i, i, i);
    }

    return 0;
}

int explicitImplicit(){
    int numero;
    printf("Escribe un numero entero: ");
    scanf("%d", &numero);
    double y = numero;
    printf("Implicit Type Casting:\n");
    printf("x = %d, y = %lf\n", numero, y);
    return 0;
}

int main()
{
    int numero;
    do{
        printf("\nEscribe el numero del punto que quieras ejecutar para salir escribe 0: ");
        scanf("%d", &numero);
        if(numero == 1){
            primeNumber();
        }else if( numero == 2 ){
            leapYear();
        }else if( numero == 3 ){
            factorial();
        }else if( numero == 4 ){
            leerdatosPower();
        }else if( numero == 5 ){
            parImpar();
        }else if( numero == 6 ){
            fibonacci();
        }else if( numero == 7 || numero == 8 ){
            minuscula();
        }else if( numero == 9 ){
            mayor();
        }else if( numero == 10 ){
            explicitImplicit();
        }else if( numero == 11 ){
            octDecHex();
        }else{
            printf("numero no valido");
        }
    }while( numero != 0 );
    return 0;
}