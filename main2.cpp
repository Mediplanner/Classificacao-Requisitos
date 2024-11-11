#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <conio.h>

int main() {
    // Comando de Regionalização
    setlocale(LC_ALL, "Portuguese");

    // Tamanho Da Tela do Programa
    CONSOLE_FONT_INFOEX font;
    font.cbSize = sizeof(font); 
    font.nFont = 0;
    font.dwFontSize.X = 0;
    font.dwFontSize.Y = 22;
    font.FontFamily = FF_MODERN;
    font.FontWeight = FW_BOLD;
    wcscpy(font.FaceName, L"Consolas");
    SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &font);

    // Título Do Software
    SetConsoleTitle("Medplanner in Low Value - Version 0.1");

    // Classic Command Prompt
    system("color 0A");

    // Variáveis
    int x;
    char y[50];

    printf("Menu de Opções\n");
    printf("1 - Cadastro | 2 - Login | 3 - Voltar | 4 - Sair\n");
    printf("- Digite Uma Opção ==> ");
    
    fflush(stdin); // limpa o buffer
    scanf("%d", &x);

    // Opções de Escolha
    switch(x) {
        case 1:
            printf("\nATENÇÃO! FUNÇÃO NÃO DISPONÍVEL NO MOMENTO!\n");
            break;
        case 2: {
            while (1) {
                // Limpa A Tela
                system("cls");

                // Variáveis
                char usuario[50], senha[50], c;
                int i = 0; // inicializar 'i'
                char usuariocorreto[] = "usuario";
                char senhacorreta[] = "senha123";

                // Declarando Usuário E Senha
                printf("\nCPF: ");
                scanf("%s", usuario); // remover '&'
                fflush(stdin);

                printf("\nSenha: ");
                
                // Senha Com Símbolos De Asteriscos (*)
                while((c = _getch()) != '\r') {
                    if (c == 8 && i > 0) { // 8 é o código ASCII para backspace
                        printf("\b \b"); // remove um caractere e o substitui por espaço
                        i--;
                    } else if (c != 8) {
                        senha[i++] = c;
                        printf("*");
                    }
                }
                senha[i] = '\0';

                // Confirmação De Dados
                if (strcmp(usuario, usuariocorreto) == 0 && strcmp(senha, senhacorreta) == 0) {
                    system("cls");
                    printf("\nO Nome DE Usuário E A Senha Estão Corretos\n");
                    break;
                } else {
                    printf("\nDados De Login Incorretos\n");
                    printf("*Aperte Enter Para Continuar\n");
                    _getch(); // espera uma tecla para continuar
                }
            }
            break;
        }
        case 3:
            printf("\nATENÇÃO! FUNÇÃO NÃO DISPONÍVEL NO MOMENTO!\n");
            break;
        case 4:
            printf("\nATENÇÃO! FUNÇÃO NÃO DISPONÍVEL NO MOMENTO!\n");
            break;
        default:
            printf("\nVocê Não Escolheu Nenhuma Das Opções Disponíveis\n");
    }

    system("pause > NULL");
    return 0;
}
