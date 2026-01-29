#include <stdio.h>

int main(){

// INICIO DO PROGRAMA - NIVEL NOVATO TEMA 3//

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


// If e Else comparação das duas cartas usando densidade populacional

printf("\n--------------- SUPER TRUNFO ---------------\n\n");

printf("\nComparação de Cartas (Atributo: Densidade Populacional):\n\n");

printf("Carta 1 - %s: %.2f\n", nome_da_cidade, densidade_populacional1);
printf("Carta 2 - %s: %.2f\n", nome_da_cidade2, densidade_populacional2);

if (densidade_populacional1 < densidade_populacional2) {
    printf ("\nResultado: Carta 1 (%s) venceu!\n", nome_da_cidade);
} else {
    printf ("\nResultado: Carta 2 (%s) venceu!\n", nome_da_cidade2);
}

// Fim do Programa NIVEL NOVATO TEMA 3//

//-------------------------------------------------------------------------------------------------------------//

return 0;

}
