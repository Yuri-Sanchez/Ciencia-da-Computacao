/*Aula do dia 27/03/2025*/

/*Aula de hoje brincamos um pouco mais com a estrutura de desvio "IF-Else", foi a presentado brevemente a palavra "void"(Indica que uma fun��o ou m�todo n�o retorna um valor) e alguns operadores l�gicos, como "&&"(E), "||"(OU) e "!"(N�o l�gico)*/
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float renda;
    char cpf[14];

    printf("Parte 1\n");
    printf("Digite seu CPF: \n");
    scanf("%s", &cpf);
    printf("Digite sua renda mensal: \n");
    scanf("%f", &renda);

    if (renda < 2259.20)
        printf("Al�quota zero e dedu��o zero");
    else if (renda < 2826.65)
        printf("Al�quota 7,5%% e dedu��o R$ 169,44");
    else if (renda < 3751.05)
        printf("Al�quota 15%% e dedu��o R$ 381,44");
    else if (renda < 4664.68)
        printf("Al�quota 22,5%% e dedu��o R$ 662,77");
    else
        printf("Al�quota 27,5%% e dedu��o R$ 896,00"); 

    printf("\n-----------------------------------------\n");
    
    int l1, l2, l3;
    printf("Parte 2\n");
    printf("Digite o lado 1: \n");
    scanf("%d", &l1);
    printf("Digite o lado 2: \n");
    scanf("%d", &l2);
    printf("Digite o lado 3: \n");
    scanf("%d", &l3);

    if (l1 == l2 && l2 == l3)
        printf("Tri�ngulo equil�tero");
    else if (l1 == l2 || l2 == l3 || l1 == l3)
        printf("Tri�ngulo is�sceles");
    else
        printf("Tri�ngulo escaleno");
}