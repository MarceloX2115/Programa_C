# Lista de Exercícios – Ponteiros em C

Este repositório contém a resolução de uma série de exercícios utilizando **ponteiros na linguagem C**.  
O objetivo é praticar a manipulação de endereços de memória, vetores, matrizes e variáveis por meio de ponteiros.

---

## O que são Ponteiros em C?

Ponteiros são variáveis que armazenam **endereços de memória** em vez de valores diretamente.  
Com eles, é possível acessar e modificar o conteúdo de outras variáveis, manipular vetores, matrizes, strings e trabalhar com alocação dinâmica.

Exemplo básico:
```
int x = 10;
int *p = &x;  // p recebe o endereço de x
printf("Valor: %d\n", *p);  // imprime o valor armazenado em x
```
# Como os Ponteiros Foram Utilizados Nesta Atividade?

1. **Acesso direto a variáveis** – Utilizamos ponteiros para mostrar valores e seus endereços de memória.

2. **Vetores** – Usamos aritmética de ponteiros (*(ptr + i)) para percorrer e modificar vetores.

3. **Matrizes** – Manipulamos elementos de matrizes por meio de ponteiros para acessar posições específicas.

4. **Alocação dinâmica** – Em alguns exercícios, utilizamos malloc() para alocar memória de forma dinâmica.

5. **Troca de valores** – Usamos ponteiros para inverter posições de notas em vetores.

# Como os Ponteiros Foram Utilizados Nesta Atividade?

1. **Acesso direto a variáveis** – Utilizamos ponteiros para mostrar valores e seus endereços de memória.
2. **Vetores** – Usamos aritmética de ponteiros (*(ptr + i)) para percorrer e modificar vetores.
3. **Matrizes** – Manipulamos elementos de matrizes por meio de ponteiros para acessar posições específicas.
4. **Alocação dinâmica** – Em alguns exercícios, utilizamos malloc() para alocar memória de forma dinâmica.
5. **Troca de valores** – Usamos ponteiros para inverter posições de notas em vetores.

# Estrutura do Projeto

* cofrinho.c – Ponteiro para inteiro, mostra valor e endereço.

* idade_aluno.c – Lê idade e imprime via ponteiro.

* precos_produtos.c – Vetor de preços, mostra desconto com ponteiro.

* horas_trabalho.c – Vetor dinâmico de horas trabalhadas, soma total.

* inverter_notas.c – Inverte vetor de notas usando ponteiros.

* notas_matriz.c – Matriz 3x3, mostra notas e soma diagonal principal.

* volei_pontuacao.c – Matriz 4x4, faz cálculos diversos usando ponteiros.
