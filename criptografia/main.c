#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i,tam=10,j,opt;
    char senha[tam],crip[tam],
    letras[]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','ç','\0'},
    numeros[]= {'1','2','3','4','5','6','7','8','9','!','@','#','$','%','/','&','*','(',')','{','}','[',']',':',';','?','.','\0'};

    printf("Escolha a opção que desejar: \n 1 - Criptografar Senha \n 2 - Descriptografar Senha \n 0 - Sair\n");
    scanf("%d", &opt);
    if(opt == 1){
        printf("Bote sua senha: ");
        scanf("%s",&senha);
        tam = strlen(senha);
        strcpy(crip,senha);
        for(i=0;senha[i]!='\0';i++){
            for(j=0;letras[j]!='\0';j++){
                if(senha[i] == letras[j])
                    crip[i] = numeros[j];
                }
        }
        printf("\nA senha digitada foi: %s",senha);
        printf("\nA senha criptografada é: %s",crip);
    }
    if(opt == 2){
        printf("Bote sua senha criptografada: ");
        scanf("%s", &crip);
        tam = strlen(crip);
        strcpy(senha,crip);
        for(i=0;crip[i]!='\0';i++){
            for(j=0;numeros[j]!='\0';j++){
                if(crip[i] == numeros[j])
                    senha[i] = letras[j];
                }
        }
        printf("\nA senha criptografa foi: %s",crip);
        printf("\nA senha descriptografada é: %s",senha);
    }
    if(opt == 0)
        return 0;

    }
