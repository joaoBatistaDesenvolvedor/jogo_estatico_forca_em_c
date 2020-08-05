#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    //criação e inicialição de variaveis

    int tamanho=0,i,tentativas=5,acertos=0,verifica=0;
    char palavra[50],palavra2[50],letra;

    setbuf(stdin,NULL); //limpa buffer do teclado

    printf("diga palavra \n"); //pede qual sera a palavra?

    gets(palavra); // le string (a palavra)

    system("cls"); //apos ler limpa a tela

    //laço de repetição responsavel por dizer o tamanho da palavra
    for(i=0; palavra[i]!='\0'; i++)
    {
        tamanho++;

    }
    printf("\n\n"); //quebra de linha

    //criar os ( - )do tamanho da palavra digitada

    for(i=0; i<tamanho; i++)
    {
        palavra2[i]='-';

        printf("%c",palavra2[i]); // exibe os tracinhos
        setbuf(stdin,NULL);       //limpa buffer do teclado

    }
    //criar laço para podermos jogar ate que a pessoa erre 5 vezes ou acertes todas letras
    while((tentativas>0) && (acertos != tamanho))
    {
        printf("\n\n tentativas %d acertos %d\n\n\n",tentativas,acertos); // exibe tentativas restantes e nº de acertos

        setbuf(stdin,NULL);   //limpa buffer do teclado

        printf("\n\n diga uma letra \n"); //usuario insere tentativas
        scanf("%c",&letra);

        // laço para verificar se existe a letra digitada na palavra
        for(i=0; palavra[i]!='\0'; i++)
        {
            //se existir acertos em aumentado em um
            if(palavra[i]==letra)
            {
                palavra2[i]=letra;             //substitui cada ( - )por letras corretas

                acertos++;
                verifica=1;

            }
        }
        //verifica erros
        if(verifica==0)
        {
            tentativas--;
        }
        verifica=0;




        printf("\n\n");//pula linhas

            //exibe com letras letras encontradas

        for(i=0; i<tamanho; i++)
        {
            printf("%c",palavra2[i]);



        }
        setbuf(stdin,NULL); //limpa buffer do teclado

    }


    return 0;


}







