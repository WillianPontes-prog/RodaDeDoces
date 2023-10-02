# RodaDeDoces
Um problema simples proposto feito para o aprendizado
enunciado abaixo:

Kleitim e Marquim conseguiram juntar vários doces depois de uma noite de
halloween. Mas seu amigo Xandim estava doente e não conseguiu ir junto. Com
pena de seu amigo, os dois decidiram juntar todos os doces e jogar um jogo para
separá-los entre os três.
Primeiro, os doces n doces são dispostos em uma forma circular e foram
numerados de 1 a n. Então, Kleitim escolhe um número qualquer k e Marquim
escolhe outro número m. Kleitim começa no doce de número 1 e anda k doces no
sentido crescente (o doce 1 conta como o primeiro espaço e segue de 1 para 2, de
3 para 4, de 4 para 5, etc.), depois, Marquim anda m doces no sentido decrescente
(o doce n conta como o primeiro espaço e segue de n para n-1, de n-1 para n-2, de
n-2 para n-3, etc.). Os dois, então, pegam o doce no espaço em que terminaram seu
turno. Caso ambos acabem no mesmo doce, esse é separado e dado para Xandim.
Eles repetem o processo até que não haja mais doces sobrando.
Faça um código que leia uma quantidade n de doces, um número k e um
número m e printe as posições nas quais Kleitim e Marquim terminaram cada turno.

Entrada
A entrada consiste em três valores dados em uma única linha, separados por
espaços. O primeiro valor é n, referente à quantidade toal de doces, o segundo é k,
referente à quantidade de espaços que Kleitim anda a cada turno, e o último é m,
referente à quantidade de espaços que Marquim anda a cada turno.
Segue o exemplo de entrada:

10 7 2

Saída
A saída deve mostrar os números dos espaços finais de Kleitim e Marquim a
cada turno. Então, caso os dois terminem na mesma casa, é necessário printar os
dois valores na mesma linha, sendo o primeiro referente ao Kleitim e o segundo ao 
Marquim. Caso ambos terminem na mesma casa, é preciso que o número da casa
seja impresso apenas uma vez.
Segue o exemplo de resposta para a entrada acima:

7 9
5 6
8 3
2 1
4
10
