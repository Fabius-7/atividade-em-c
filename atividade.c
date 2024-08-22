1)Qual biblioteca é necessaria incluir com diretivo #include para utilizar as funções de entrada padrão da linguagem  C?
<stdio. h>

2) O trecho de código realiza a leitura de um numero inteiro . Entretanto, ele contem tais erros. Corrijam-os e justifique sua resposta. 
int n;
scanf("%f", n);
Especificador de Formato %d: Como a variável n é do tipo int, o especificador de formato correto é %d para ler valores inteiros.
Endereço da Variável: O scanf precisa do endereço da variável para armazenar o valor lido. O operador & é usado para obter o endereço de uma variável.

3)Explique o trecho de codigo abaixo (linha2)
char C;
scanf("%c", de C);
while(getchar() != '\n')
scanf("%c", &C);: Lê um único caractere da entrada e armazena-o na variável C.
while (getchar() != '\n');: Remove quaisquer caracteres restantes no buffer até encontrar um caractere de nova linha.

4)Explique o trecho de codigo abaixo:
float largura, comprimento;
scanf("%f %f", &largura, &comprimento);
float: Tipo de dado usado para representar números de ponto flutuante (números com parte decimal).
largura e comprimento: Nomes das variáveis que armazenarão os valores lidos. Ambos são do tipo float.

5)Explique o trecho de codigo abaixo:
char nome[80];
scanf("%s", nome);
char nome[80];: Declara um array de caracteres com 80 elementos. 
"%s": Especificador de formato usado para ler uma sequência de caracteres (string). 

6)Explique o trecho de codigo abaixo:
printf("Ola, mundo!"),
printf("formato", argumentos);: A função printf pode incluir uma string de formato e, opcionalmente, uma lista de argumentos para substituir os especificadores de formato na string.