# 🃏 Super Trunfo: Países - Nível Mestre

Este é um simulador de duelo de cartas desenvolvido em Linguagem C. O projeto foi estruturado para demonstrar conceitos avançados de lógica de programação, manipulação de tipos de dados e controle de fluxo.

## 🚀 Funcionalidades Principais
* **Menu de Atributos Dinâmico:** Implementação de lógica que impede a seleção do mesmo atributo duas vezes, filtrando visualmente as opções para o usuário.
* **Duelo Combinado:** O sistema realiza a soma de dois atributos escolhidos pelo jogador para definir a força total da carta.
* **Lógica Especial (Densidade Populacional):** Conforme as regras do Super Trunfo, na categoria Densidade Populacional, o menor valor vence. Esta lógica foi tratada matematicamente no código.

## 🧠 Lógica e Estrutura Técnica

### O Tratamento da Densidade Populacional
Para garantir que o menor valor de densidade vença na soma total, utilizei uma técnica de inversão matemática:
1. Multipliquei o valor da densidade por `-1`.
2. Isso faz com que valores menores (ex: 10) se tornem "maiores" no cálculo (-10) do que densidades altas (ex: 50 -> -50).
3. Na exibição final, utilizei o **Operador Ternário** para converter o valor de volta para positivo, garantindo uma interface amigável.

### Operadores Ternários
O código utiliza operadores ternários aninhados para decidir o vencedor de forma elegante:
- **Empate:** Verificado primeiro.
- **Vitória Carta 1 ou 2:** Decidida em uma única linha após a verificação de empate.



## 💻 Como Executar o Jogo
1. Certifique-se de ter um compilador C (GCC) instalado.
2. Compile o arquivo:
   `gcc super_trunfo.c -o super_trunfo`
3. Execute o programa:
   `./super_trunfo`

---
**Desenvolvido como parte do Desafio de Lógica de Programação - Tema 3.**
