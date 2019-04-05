#include <stdio.h>
#include <stdlib.h>

int main()
{
    char p11=' ',p12=' ',p13=' ',p21=' ',p22=' ',p23=' ',p31=' ',p32=' ',p33=' ';
    Jogar(p11,p12,p13,p21,p22,p23,p31,p32,p33);
}
void JogarDnv(){
    char playagain;
    printf("\nDeseja jogar novamente? ");
    scanf(" %c", &playagain);
    if(playagain == 's' || 'S')
        main();
    else
        return;

}

void Jogar(char p11,char p12,char p13,char p21,char p22,char p23,char p31,char p32,char p33){
    char escolha;
    int lin,col,fim=0;
    printf("\nEscolha X ou O para jogar: ");
    scanf(" %c", &escolha);
    printf("\nEscolha a linha para jogar: ");
    scanf(" %d", &lin);
    printf("\nEscolha a coluna para jogar: ");
    scanf(" %d", &col);

    if(!(escolha =='x' || escolha=='o' || escolha=='X' || escolha=='O')){
        printf("\nSOMENTE X OU O!\n");
        printf("Reiniciando...\n");
        Jogar(p11,p12,p13,p21,p22,p23,p31,p32,p33);
    }

    if(lin > 3 || lin < 1){
        printf("\nSOMENTE NUMEROS DE 1 A 3\n");
        printf("Reiniciando...\n");
        Jogar(p11,p12,p13,p21,p22,p23,p31,p32,p33);
    }
    if(col > 3 || col < 1){
        printf("\nSOMENTE NUMEROS DE 1 A 3\n");
        printf("Reiniciando...\n");
        Jogar(p11,p12,p13,p21,p22,p23,p31,p32,p33);
    }

     if (lin == 1 && col==1){
        if(p11 == ' ')
        p11 = escolha;
     }
     if (lin == 1 && col==2){
        if(p12 == ' ')
        p12 = escolha;
     }
      if (lin == 1 && col==3){
        if(p13 == ' ')
        p13 = escolha;
     }
     if (lin == 2 && col==1){
        if(p21 == ' ')
        p21 = escolha;
     }
     if (lin == 2 && col==2){
        if(p22 == ' ')
        p22 = escolha;
     }
     if (lin == 2 && col==3){
        if(p23 == ' ')
        p23 = escolha;
     }
     if (lin == 3 && col==1){
        if(p31 == ' ')
        p31 = escolha;
     }
     if (lin == 3 && col==2){
        if(p32 == ' ')
        p32 = escolha;
     }
     if (lin == 3 && col==3){
        if(p33 == ' ')
        p33 = escolha;
     }

     printf("%c%c%c", p11,p12,p13);
     printf("\n%c%c%c", p21,p22,p23);
     printf("\n%c%c%c\n\n", p31,p32,p33);

     if ((p11 == p12) && (p11 == p13)&& (p11 != ' ')){
        printf("%c ganhou!", escolha);
        JogarDnv();
        fim = 1;
    }
    if ((p11 == p22) && (p11 == p33)&& (p11 != ' ')){
        printf("%c ganhou!", escolha);
        JogarDnv();
        fim = 1;
    }
    if ((p11 == p21) && (p11 == p31)&& (p11 != ' ')){
        printf("%c ganhou!", escolha);
        JogarDnv();
        fim = 1;
    }
    if ((p12 == p22) && (p12 == p32)&& (p12 != ' ')){
        printf("%c ganhou!", escolha);
        JogarDnv();
        fim = 1;
    }
    if ((p13 == p23) && (p13 == p33)&& (p13 != ' ')){
        printf("%c ganhou!", escolha);
        JogarDnv();
        fim = 1;
    }
    if ((p21 == p22) && (p21 == p23)&& (p21 != ' ')){
        printf("%c ganhou!", escolha);
        JogarDnv();
        fim = 1;
    }
    if ((p31 == p32) && (p31 == p33)&& (p31 != ' ')){
        printf("%c ganhou!", escolha);
        JogarDnv();
        fim = 1;
    }
    if ((p13 == p22) && (p13 == p31)&& (p13 != ' ')){
        printf("%c ganhou!", escolha);
        JogarDnv();
        fim = 1;
    }
    if (p11 != ' ' && p12 != ' ' && p13 != ' ' && p21 != ' ' && p22 != ' ' && p23 != ' ' && p31 != ' ' && p32 != ' ' && p33 != ' '){
        printf("Deu Velha!");
        JogarDnv();
        fim = 1;
    }
    if(fim != 1)
        Jogar(p11,p12,p13,p21,p22,p23,p31,p32,p33);
}
