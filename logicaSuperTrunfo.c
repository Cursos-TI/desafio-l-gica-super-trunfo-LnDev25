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


// FIM DO PROGRAMA - NIVEL AVENTUREIRO - TEMA 3 //



// INICIO DO PROGRAMA - NIVEL AVENTUREIRO_MESTRE - TEMA 3 //

// Para guardar os valores numéricos que serão comparados e somados

float v1_c1, v1_c2; // Atributo 1 (Carta 1 e 2)
float v2_c1, v2_c2; // Atributo 2 (Carta 1 e 2)

// Primeiro Switch case para verificar qual foi a opcao escolhida no primeiro atributo

switch (opcao){

    // População
    case 1:

    v1_c1 = (float) populacao ; 
    v1_c2 = (float) populacao2 ;

    printf("Primeiro atributo escolhido: População\n");

    break;
   
    // Área em Km2
    case 2: 

    v1_c1 = area ;
    v1_c2 = area2 ;

    printf("Primeiro atributo escolhido: Área\n");

    break;

    // PIB
    case 3:

    v1_c1 = pib_valor ;
    v1_c2 = pib_valor2 ;

    printf("Primeiro atributo escolhido: PIB\n");

    break;

    // Pontos Turísticos
    case 4:

    v1_c1 = pontos_turisticos ;
    v1_c2 = pontos_turisticos2 ;

    printf("Primeiro atributo escolhido: Pontos Turísticos\n");

    break;
    
    // Densidade Populacional
    case 5:

    v1_c1 = -densidade_populacional1 ;
    v1_c2 = -densidade_populacional2 ;

    printf("Primeiro atributo escolhido: Densidade Populacional\n");

    break;

}

// Escolha do segundo atributo 

int opcao2 ;

printf ("\nEscolha o segundo atributo para sua batalha (Diferente do primeiro):\n") ;

if (opcao != 1) printf ("1. População\n") ;
if (opcao != 2) printf ("2. Área\n") ;
if (opcao != 3) printf ("3. PIB\n") ;
if (opcao != 4) printf ("4. Pontos Turísticos\n") ; 
if (opcao != 5) printf ("5. Densidade Populacional\n") ;

scanf ("%d", &opcao2);


// Verificacao se o atributo escolhido ja nao foi escolhido 

if (opcao2 == opcao){
    printf("Esse atributo ja foi escolhido, tente outro!\n");
} else {
    switch (opcao2){

    // População
    case 1:

    v2_c1 = (float) populacao ; 
    v2_c2 = (float) populacao2 ;

    printf("Segundo atributo escolhido: População\n");

    break;
   
    // Área em Km2
    case 2: 

    v2_c1 = area ;
    v2_c2 = area2 ;

    printf("Segundo atributo escolhido: Área\n");

    break;

    // PIB
    case 3:

    v2_c1 = pib_valor ;
    v2_c2 = pib_valor2 ;

    printf("Segundo atributo escolhido: PIB\n");

    break;

    // Pontos Turísticos
    case 4:

    v2_c1 = pontos_turisticos ;
    v2_c2 = pontos_turisticos2 ;

    printf("Segundo atributo escolhido: Pontos Turísticos\n");

    break;
    
    // Densidade Populacional
    case 5:

    v2_c1 = -densidade_populacional1 ;
    v2_c2 = -densidade_populacional2 ;

    printf("Segundo atributo escolhido: Densidade Populacional\n");

    break;

}
 
// Variaveis da soma dos valores de atributos para cada carta

float soma_c1 = v1_c1 + v2_c1 ;
float soma_c2 = v1_c2 + v2_c2 ;

// Exibicao de resultados usando o ternario no final

printf("\n--- RESULTADO FINAL ---\n");

printf("País 1: %s - Soma: %.2f\n", nome_da_cidade, soma_c1);
printf("País 2: %s - Soma: %.2f\n", nome_da_cidade2, soma_c2);

// Exibindo valores individuais (tratando negativos se for densidade)

printf("Atributo 1: Carta 1 (%.2f) vs Carta 2 (%.2f)\n", 
        (v1_c1 < 0) ? v1_c1 * -1 : v1_c1, 
        (v1_c2 < 0) ? v1_c2 * -1 : v1_c2);

printf("Atributo 2: Carta 1 (%.2f) vs Carta 2 (%.2f)\n", 
        (v2_c1 < 0) ? v2_c1 * -1 : v2_c1, 
        (v2_c2 < 0) ? v2_c2 * -1 : v2_c2);

// Resultado com Ternário

printf("\nResultado: %s\n", (soma_c1 == soma_c2) ? "Empate!" : (soma_c1 > soma_c2 ? "Carta 1 venceu!" : "Carta 2 venceu!")); 

    }


// FIM DO PROGRAMA - NIVEL MESTRE - TEMA 3 //

//-------------------------------------------------------------------------------------------------------------//

return 0;

}
