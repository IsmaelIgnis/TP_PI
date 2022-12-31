#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct dadosParticipante {
    char nome[70];
    int numPraticante;
    int idade;
    int telefone;
} Dados;


typedef struct atividades {

    int numPraticante;
    char data[10];
    char nomeAtividade[50];
    char hora[10];
    int tempoDeDuracao;
    int distancia;
    char unidadesDeMedida[20];

}Atividades;

typedef struct planos {

    int numPraticante;
    char dataInicio[20];
    char dataFinal[20];
    char horaDeInicio[10];
    char horaDeFim[10];
    char nomeAtividade[100];
    int distanciaRealizada;
    char unidadesDeMedida[20];

}Planos;


//LER DADOS (ficheiro Dados.txt)
int lerDadosDeParticipante(Dados pessoas[]) {
    FILE* fp;
    int i;

    fp = fopen("Dados.txt", "r");
    if (fp != NULL) {
        for (i = 0; !feof(fp); i++) {
            fscanf(fp, "%d;%[^;];%d;%d\n", &pessoas[i].numPraticante, pessoas[i].nome, &pessoas[i].telefone, &pessoas[i].idade);
        }
        fclose(fp);
        return i;
    }
    else {
        printf("Erro ao abrir o ficheiro\n");
        return -1;
    }
}

int lerAtividades(Atividades atividades[]) {

    FILE* fp1;
    int i;

    fp1 = fopen("Atividades.txt", "r");
    if (fp1 != NULL) {
        for (i = 0; !feof(fp1); i++) {
            fscanf(fp1, "%d;%[^;];%[^;];%[^;];%d;%d;%s\n", &atividades[i].numPraticante, atividades[i].data,
                atividades[i].hora, atividades[i].nomeAtividade,
                &atividades[i].tempoDeDuracao, &atividades[i].distancia, atividades[i].unidadesDeMedida);
        }
        fclose(fp1);
        return i;
    }
    else {
        printf("Erro ao abrir o ficheiro\n");
        return -1;
    }
}


int lerPlanos(Planos atividades[]) {

    FILE* fp2;
    int i;

    fp2 = fopen("Planos.txt", "r");
    if (fp2 != NULL) {
        for (i = 0; !feof(fp2); i++) {
            fscanf(fp2, "%d;%[^;];%[^;];%[^;];%[^;];%[^;];%d;%[^;]\n", &atividades[i].numPraticante, atividades[i].dataInicio,
                atividades[i].dataFinal, &atividades[i].horaDeInicio, &atividades[i].horaDeFim, atividades[i].nomeAtividade,
                &atividades[i].distanciaRealizada, atividades[i].unidadesDeMedida);
        }
        fclose(fp2);
        return i;
    }
    else {
        printf("Erro ao abrir o ficheiro\n");
        return -1;
    }

}

int ex4()
{
    Dados people[100];
    Atividades activities[100];
    Planos data[100];

    read_file("dados_praticantes.txt", "Dados", people, 100);
    read_file("ativ_praticantes.txt", "Atividades", activities, 100);
    read_file("dp_praticantes.txt", "Plantos", data, 100);

    char nomeAtividade[100];
    char dataInicio[11];
    char dataFinal[11];
    printf("Insere o nome da atividade: ");
    gets(nomeAtividade[100]);
    printf("Insere a data de inicio (DD-MM-YYYY): ");
    gets(dataInicio[11]);
    printf("Insere a data de fim (DD-MM-YYY): ");
    gets(dataFinal[11]);


    int num_participants = 0;
    for (int i = 0; i < 100; i++) {
        if (strcmp(activities[i].nomeAtividade, nomeAtividade) == 0) {
            if (strcmp(data[i].dataInicio, dataInicio) >= 0 && strcmp(data[i].dataFinal, dataFinal) <= 0) {
                num_participants++;
            }
        }
    }


    printf("Number of participants in %s from %s to %s: %d\n", nomeAtividade, dataInicio, dataFinal, num_participants);

    return 0;


}


void main() {

    int input;

    printf("Bem-vindo. Que operacao deseja realizar?\n");
    printf("            \n");
    printf("1 - Registar um novo usuario.\n");
    printf("2 - Registar uma nova atividade.\n");
    printf("3 - Ver as atividades planeadas.\n");
    printf("4 - Seguidores.\n");
    printf("5 - Outros.\n");
    printf("6 - Historico de informacao introduzida.\n");
    printf("0 - Sair.");


    scanf("%d", &input);
     if (input == 0)
    {
        return 0;
    }
    switch (input)
    {
    case 1:
        if (input == 1)
        {
           ;
        }
        break;
    case 2:
        if (input == 2)
        {
           ;
        }
        break;
    case 3:
        if (input == 3)
        {
            ;
        }
        break;

    default:
        printf("Enter a valid number");
        break;
    }

}





/*anotações tiradas enquanto fui fazendo o menu:
Opção 1 do menu: Ter uma função para fazer as informações que vão ser necessárias para serem impressas
no ficheiro 1 que o prof pede. (feito)
Opção 2 - Ao registar a atividade, rgegistá-la num tipo de histórico (necessário uma função para isso)
para depois só imprimir no segundo ficheiro que o professor pede. (feito) Também fazer uma função para dar origem
às informações do ficheiro 3. (feito)
Opção 3 - Ter a função com o calendário, para os pontos 4, 5, 6 e tudo o qiue inclua o utilizador ter de
colocar um certo período de tempo.
Opção 4 - Funcionalidade de seguir e ver seguidores. Função que mostre quem podemos seguir e quem já
seguimos.
Opção 5 - Tudo o que é coisas para gerar mas que não tenham cenas diretamente relacionadas com as outras
opções. Ter opção do ponto 7 de ver as médias. Ter opção tambem do ponto 8,10 e 11.
Opção 6 - Função que apanhe toda a informação inserida pelo utilizador, talvez separadas por categorias.
Ou seja, "Participantes" e "Atividades"
*/
