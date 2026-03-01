#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    FILE *file;
    // Cria ou substitui o arquivo "exemplo.txt"

    //Calcula a média dos alunos
    file = fopen("exemplo.txt", "w");

    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    float nota1,nota2,nota3,media;

    int contalunos=1;
    char nome[10], sobrenome[10];

    while (contalunos<=3)
    {
        printf("Entre com o nome do aluno: \n");
        scanf("%s",nome);
        printf("Entre com o sobrenome do aluno: \n");
        scanf("%s",sobrenome);
        printf("Entre com a nota 1 do aluno: \n");
        scanf("%f",&nota1);
        printf("Entre com a nota 2 do aluno: \n");
        scanf("%f",&nota2);
        printf("Entre com a nota 3 do aluno: \n");
        scanf("%f",&nota3);
        media=(nota1+nota2+nota3)/3;
        if (media>=7)
        printf("APROVADO com média %.2f \n\n",media);
        else
            printf("REPROVADO com média %.2f \n\n",media);
        contalunos++;
        // Escreve texto no arquivo
        fprintf(file, "Aluno %s %s: Média: %.2f \n",nome, sobrenome, media);

    }


    // Fecha o arquivo
    fclose(file);
    printf("Arquivo criado com sucesso.\n");
    return 0;
}