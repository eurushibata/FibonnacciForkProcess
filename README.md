FibonnacciForkProcess
=====================

Fibonnacci series generated from a fork process (Sistemas Operacionais 1.2013 - Aula 4 / Exercício 1)

=====================

Usage: gcc main.c ; ./a.out 7
Return: 13

=====================

Faça um programa C que gere a seqüência de Fibonacci. Use a chamada fork() para que a seqüência seja gerada pelo processo filho. O processo pai deverá invocar a chamada wait() para esperar pelo término da execução do filho. O nro da seqüência será passado pela linha de comando. Garanta que somente nros positivos sejam considerados para a geração da seqüência.