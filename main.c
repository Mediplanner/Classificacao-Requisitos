#include <stdio.h>
#include <locale.h>
#include <string.h>

#define MAX_REQUISITOS 100

typedef struct {
    char nome[100];
    int impactoUsuario;
    int viabilidadeTecnica;
    char prioridade[10];
} Requisito;

void classificarPrioridade(Requisito *requisito) {
    if (requisito->impactoUsuario > 5 && requisito->viabilidadeTecnica > 5) {
        strcpy(requisito->prioridade, "Alta");
    } else { 
        if (requisito->impactoUsuario > 3 && requisito->viabilidadeTecnica > 3) {
        strcpy(requisito->prioridade, "Média");
        } else {
        strcpy(requisito->prioridade, "Baixa");
        }
    }
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    Requisito requisitos[MAX_REQUISITOS];
    int n, i;

    printf("Quantos requisitos deseja inserir? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Nome do requisito %d: ", i + 1);
        scanf("%s", requisitos[i].nome);
        printf("Impacto no usuário final (0-10): ");
        scanf("%d", &requisitos[i].impactoUsuario);
        printf("Viabilidade técnica (0-10): ");
        scanf("%d", &requisitos[i].viabilidadeTecnica);

        classificarPrioridade(&requisitos[i]);
    }

    printf("\nClassificação dos requisitos:\n");
    for (i = 0; i < n; i++) {
        printf("Requisito: %s, Prioridade: %s\n", requisitos[i].nome, requisitos[i].prioridade);
    }

    return 0;
}
