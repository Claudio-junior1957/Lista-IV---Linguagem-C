#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese-brazilian");
    int num;

    printf("Insira um n�mero: ");
    scanf("%i",&num);

    if(num > 0 ){
        printf("� positivo");
    }else{
        if(num < 0 ){
            printf("� negativo");
        }else{
            printf("� neutro");
        }

}

