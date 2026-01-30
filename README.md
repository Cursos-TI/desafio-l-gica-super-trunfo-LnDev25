# 🌍 Super Trunfo - Países (C Language)

Este repositório contém o desenvolvimento do jogo **Super Trunfo** focado em cartas de países, desenvolvido em Linguagem C como parte da disciplina de Introdução à Programação.

O projeto unifica os conceitos de manipulação de dados, cálculos matemáticos e lógica de decisão em um único sistema interativo.

## 📋 Sobre o Projeto

O objetivo deste software é simular a mecânica clássica do jogo de cartas Super Trunfo. O desenvolvimento foi estruturado em níveis de complexidade, integrando:

1.  **Gerenciamento de Dados (Nível Básico):** Definição e armazenamento de atributos de cartas (População, Área, PIB, Pontos Turísticos), além do cálculo automático de propriedades derivadas, como a **Densidade Populacional** e o **PIB per Capita**.
2.  **Lógica de Jogo (Nível Aventureiro):** Implementação de um menu interativo que permite ao usuário escolher o atributo de batalha e um sistema de comparação robusto que determina o vencedor ou declara empate.

## 🚀 Funcionalidades

* **Menu Interativo:** O jogador seleciona qual atributo deseja comparar via terminal.
* **Cálculos Automáticos:** O sistema calcula a Densidade Populacional e o PIB per Capita baseados nos dados brutos.
* **Sistema de Comparação:** Utiliza estruturas condicionais (`if/else`) para comparar os atributos das cartas.
* **Regras Especiais:**
    * Para a maioria dos atributos, vence o **maior** valor.
    * Para a **Densidade Populacional**, vence o **menor** valor (lógica invertida).

## 🛠 Tecnologias e Conceitos Utilizados

* **Linguagem C** (Padrão ANSI)
* **Variáveis e Tipos de Dados** (`int`, `float`, `char`, `unsigned long`)
* **Entrada e Saída** (`printf`, `scanf`)
* **Operadores Matemáticos** (Cálculo de média e densidade)
* **Estruturas de Decisão** (`if`, `else if`, `else`)
* **Estruturas de Seleção** (`switch/case`)

## 🎮 Como Executar o Jogo

Para rodar o projeto em seu ambiente local (Linux, WSL ou GitHub Codespaces), siga os passos abaixo:

### 1. Clonar o repositório
```bash
git clone [https://github.com/SEU-USUARIO/NOME-DO-REPOSITORIO.git](https://github.com/SEU-USUARIO/NOME-DO-REPOSITORIO.git)
