#include<stdio.h>

void menu() {

    int opcao;

    printf("Bem-vindo. Que operacao deseja realizar?\n");
    printf("            \n");
    printf("1 - Registar um novo usuario.\n");
    printf("2 - Registar uma nova atividade.\n");
    printf("3 - Ver as atividades planeadas.\n");
    printf("4 - Seguidores.\n");
    printf("5 - Outros.\n");
    printf("6 - Historico de informacao introduzida.\n");




}



void main() {

    menu();

}

/*anotações tiradas enquanto fui fazendo o menu:

Opção 1 do menu: Ter uma função para fazer as informações que vão ser necessárias para serem impressas
no ficheiro 1 que o prof pede.

Opção 2 - Ao registar a atividade, rgegistá-la num tipo de histórico (necessário uma função para isso)
para depois só imprimir no segundo ficheiro que o professor pede. Também fazer uma função para dar origem
às informações do ficheiro 3.


Opção 3 - Ter a função com o calendário, para os pontos 4, 5, 6 e tudo o qiue inclua o utilizador ter de
colocar um certo período de tempo.

Opção 4 - Funcionalidade de seguir e ver seguidores. Função que mostre quem podemos seguir e quem já
seguimos.

Opção 5 - Tudo o que é coisas para gerar mas que não tenham cenas diretamente relacionadas com as outras
opções. Ter opção do ponto 7 de ver as médias. Ter opção tambem do ponto 8,10 e 11.

Opção 6 - Função que apanhe toda a informação inserida pelo utilizador, talvez separadas por categorias.
Ou seja, "Participantes" e "Atividades"

*/

