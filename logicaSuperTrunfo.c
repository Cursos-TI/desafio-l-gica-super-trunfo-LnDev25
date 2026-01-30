#include <stdio.h>

int main(){

// INICIO DO PROGRAMA - NIVEL NOVATO - TEMA 3 //

// Variaveis carta 1

char letra_estado = 'S' ;
char codigo_da_carta[] = "A01" ;
char nome_da_cidade[] = "São Paulo" ;
unsigned long int populacao = 11451245 ;
float area = 1521.11 ;
float pib_valor = 829000000000.0 ;
int pontos_turisticos = 50 ;

// Variaveis carta 2

char letra_estado2 = 'R' ;
char codigo_da_carta2[] = "B01" ;
char nome_da_cidade2[] = "Rio de Janeiro" ;
unsigned long int populacao2 = 6211423 ;
float area2 = 1200.27 ;
float pib_valor2 = 359000000000.0 ;
int pontos_turisticos2 = 60 ;
 

// Densidade Populacional calculo 

float densidade_populacional1 = populacao / area ;
float densidade_populacional2 = populacao2 / area2 ;

// PIB per Capita calculo 

float pib_capita = (pib_valor / populacao) ;
float pib_capita2 = (pib_valor2 / populacao2) ;


// FIM DO PROGRAMA NIVEL NOVATO - TEMA 3 //



// INICIO DO PROGRAMA - NIVEL AVENTUREIRO - TEMA 3 //


// Menu interativo - Variavel e entrada de dados

int opcao ;

printf ("Seja bem-vindo ao jogo SUPER TRUNFO\n");

printf ("Escolha um dos seguintes atributos para tentar vencer o seu oponente:\n");

printf ("1. População\n");

printf ("2. Área em Km2\n");

printf ("3. PIB\n");

printf ("4. Pontos Turísticos\n");

printf ("5. Densidade Populacional\n");

scanf ("%d", &opcao);

// Switch case

switch (opcao){

    // População
    case 1:
    printf("Comparação de População:\n");
    printf("Carta 1: %lu vs Carta 2: %lu\n", populacao, populacao2);

    if (populacao > populacao2) {
        printf("Resultado: Carta 1 venceu a batalha!\n");
    } else if (populacao < populacao2) {
        printf("Resultado: Carta 2 venceu a batalha!\n");
    } else {
        printf("Resultado: Empate!\n");
    }
    break;
   

    // Área em Km2
    case 2: 
    printf("Comparação de Área em Km2:\n");
    printf("Carta 1: %.2f vs Carta 2: %.2f\n", area, area2);

    if (area > area2) {
        printf( "Resultado: Carta 1 Venceu a batalha!\n");
    } else if (area < area2) {
        printf("Resultado: Carta 2 venceu a batalha!\n");
    } else {
        printf("Resultado: Empate!\n");
    }
    break;


    // PIB
    case 3:
    printf("Comparação do PIB:\n");
    printf("Carta 1: %.2f vs Carta 2: %.2f\n", pib_valor, pib_valor2);

    if (pib_valor > pib_valor2) {
        printf( "Resultado: Carta 1 Venceu a batalha!\n");
    } else if (pib_valor < pib_valor2) {
        printf("Resultado: Carta 2 venceu a batalha!\n");
    } else {
        printf("Resultado: Empate!\n");
    } 
    break;


    // Pontos Turísticos
    case 4:
    printf("Comparação de Pontos Turísticos:\n");
    printf("Carta 1: %d vs Carta 2: %d\n", pontos_turisticos, pontos_turisticos2);

    if (pontos_turisticos > pontos_turisticos2) {
        printf( "Resultado: Carta 1 Venceu a batalha!\n");
    } else if (pontos_turisticos < pontos_turisticos2) {
        printf("Resultado: Carta 2 venceu a batalha!\n");
    } else {
        printf("Resultado: Empate!\n");
    } 
    break;

    
    // Densidade Populacional
    case 5:
    printf("Comparação de Densidade Populacional:\n");
    printf("Carta 1: %.2f vs Carta 2: %.2f\n", densidade_populacional1, densidade_populacional2);

    if (densidade_populacional1 < densidade_populacional2) {
        printf( "Resultado: Carta 1 Venceu a batalha!\n");
    } else if (densidade_populacional1 > densidade_populacional2) {
        printf("Resultado: Carta 2 venceu a batalha!\n");
    } else {
        printf("Resultado: Empate!\n");
    } 
    break;


    // Resposta pronta ao jogador caso ele escolha alguma opção inválida
    default:
        printf("Opção inválida!");
}  
    


// FIM DO PROGRAMA - NIVEL AVENTUREIRO - TEMA 3 //


//-------------------------------------------------------------------------------------------------------------//

return 0;

}
