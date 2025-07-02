#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int n, i;

int main(){
    printf("Ingrese la cantidad de Titulos (libros) que desea ingresar: ");
    scanf("%d", &n);

    char titulo[n][20];
    char autor[n][20];
    char genero[n][20];
    char isbn[n][20];
    float precio[n];
    int stock[n];
    float ganancia[n];
    char busqueda[100][100];

    for(i=0;i<n;i++){
        printf("Ingrese el titulo del libro: \n");
        scanf(" %[^\n]", &titulo[i]);
        printf("Ingrese el autor del libro: \n");
        scanf(" %[^\n]", &autor[i]);
        printf("Ingrese el genero del libro: \n");
        scanf(" %[^\n]", &genero[i]);
        do{
            printf("Ingrese el ISBN del libro: \n");
            scanf(" %s", &isbn[i]);
        }while(strlen(isbn[i] !=10));
        do{
            printf("Ingrese el precio del libro: \n");
            scan(" %.2f", &precio[i]);
        }while(precio[i]<0);
        printf("Ingrese la cantidad de libros que hay en stock: \n");
        scanf(" %d", &stock[i]);
        ganancia[i]=precio[i]*stock[i];
    }
    void titulo(char *str) {
         for (int i = 0; str[i] != '\0'; i++) {
           str[i] = toupper(str[i]);
           }
    }
    void autor(char *str) {
         for (int i = 0; str[i] != '\0'; i++) {
           str[i] = toupper(str[i]);
           }
    }
    void genero(char *str) {
         for (int i = 0; str[i] != '\0'; i++) {
           str[i] = toupper(str[i]);
           }
    }
    printf("TITULO \t AUTOR \t GENERO \t ISBN \t PRECIO \t STOCK \t GANANCIA \n");
    for(i=0;i<n;i++){
        if(ganancia<0)               
           printf("%s\t %s\t %s\t %s\t %.2f/t %d\t %.2f\n", titulo[i], autor[i], genero[i], isbn[i], precio[i], stock[i], ganancia[i]\033[31m);
           else
           printf("%s\t %s\t %s\t %s\t %.2f/t %d\t %.2f\n", titulo[i], autor[i], genero[i], isbn[i], precio[i], stock[i], ganancia[i]\033[32m);
    }
    printf("Ingrese que libro desea buscar: \n");
    scanf(" %[^\n]s", &busqueda);
    
    for(i=0;i<n;i++){
        if(strcmp(titulo[i], busqueda)==0){
                             printf("%s %s %s", titulo[i], autor[i], genero[i]);
        }
        if(strcmp(genero[i], busqueda)==0){
                             printf("%s %s %s", titulo[i], autor[i], genero[i]);
        }
        if(strcmp(autor[i], busqueda)==0){
                             printf("%s %s %s", titulo[i], autor[i], genero[i]);
        }
        if(strcmp(isbn[i], busqueda)==0){
                             printf("%s %s %s", titulo[i], autor[i], genero[i]);
        }
    } 
    return 0;
}
