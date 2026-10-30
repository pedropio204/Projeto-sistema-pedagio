# 🚗 Sistema de Pedágio - Contagem de Carros Semanal

> **Trabalho Acadêmico** — Desenvolvido como requisito avaliativo para a disciplina de **Algoritmos e Pensamento Computacional** do curso de **Ciência da Computação** da **Cruzeiro do Sul**.

## 📖 Sobre o Projeto

Este repositório contém a implementação de um **Sistema de Pedágio** desenvolvido na linguagem **C**. O projeto foi originalmente modelado em fluxograma (utilizando a ferramenta Flowgorithm) e posteriormente traduzido para código-fonte, com o objetivo de consolidar os conhecimentos em lógica de programação, estruturas de repetição, vetores e matrizes.

O sistema recebe a quantidade de veículos que passaram em cada dia da semana, calcula o total de carros, identifica o dia de maior movimento (pico) e exibe um relatório detalhado no terminal.

## 🚀 Funcionalidades

*   **Entrada de Dados Segura:** Laço de repetição com validação (`do-while`) para impedir a inserção de números negativos.
*   **Armazenamento em Estruturas:** Uso de vetor (`int carros[7]`) para as quantidades e matriz (`char dias[7][15]`) para os nomes dos dias.
*   **Cálculo do Pico:** Lógica que percorre o vetor para encontrar a maior quantidade de carros.
*   **Desafio Bônus (Destaque):** O relatório final destaca com setas (`-->`) e a mensagem `<== DIA DE PICO!` todos os dias que registraram o maior movimento (tratando empates).
*   **Formatação de Tabela:** Uso de `%-15s` no `printf` para alinhar as colunas dos nomes dos dias e das quantidades no console.

## 🛠️ Tecnologias e Conceitos Aplicados

*   **Linguagem:** C (C99 ou superior)
*   **Bibliotecas:** `<stdio.h>` (entrada/saída) e `<string.h>` (manipulação de strings).
*   **Conceitos de Lógica:**
    *   Declaração de vetores e matrizes.
    *   Laços de repetição `for` e `do-while`.
    *   Estruturas condicionais (`if/else`) para validação e cálculo do pico.
    *   Formatação de saída com especificadores de largura (`%15s`).