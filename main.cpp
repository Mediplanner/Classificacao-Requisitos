//Software Medplanner (Programa Em Baixo Valor)
//Versão 0.1
//Autor: Pedro Henrique Garcia Dos Santos

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <limits.h>
#include <iostream>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>

int main(){

//Comando De Regionalização
	setlocale(LC_ALL, "Portuguese");

//Tamanho Da Tela do Programa
	CONSOLE_FONT_INFOEX font;
	
	font.cbSize = sizeof(font); 
	font.nFont = 0;
	font.dwFontSize.X = 0;
	font.dwFontSize.Y = 22;
	font.FontFamily = FF_MODERN;
	font.FontWeight = FW_BOLD;
	wcscpy(font.FaceName, L"Consolas");
	
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &font);
	//Obs 1: False - Somente Na Janela Atual
	//Obs 2: True - Tamanho Máximo Da Janela
	
	//Título Do Software
    SetConsoleTitle("Medplanner in Low Value - Version 0.1");
    
	//Variáveis 1 - Opções
	char comando[9] = "color ";
    char cores[3];
    
	//Cor Das Letras Do Menu Principal Da Seleção De Cores Do Sistema (Classic Command Prompt)
	system("color 0A");
		
//Menu Da Seleção De Cores Do Sistema
    printf("  __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __\n");
    printf(" |                                                  ................                                                  |\n");
    printf(" |                                                 | # MEDPLANNER # |                                                 |\n");
    printf(" |                                                 |   Version 0.1  |                                                 |\n");
    printf(" |                                                  ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨                                                  |\n");
    printf(" |                                                  ................                                                  |\n");
    printf(" |                                                 |### - MENU - ###|                                                 |\n");
    printf(" |                                                  ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨                                                  |\n");
    printf(" |                                                  |  |  |  |  |  |                                                  |\n");
    printf(" |                                                  V  V  V  V  V  V                                                  |\n");
    printf(" |                                              ------------------------                                              |\n");
    printf(" |                                           < Escolha As Cores Do Sistema >                                          |\n");
    printf(" |                                              ------------------------                                              |\n");
    printf(" |\t\t\t\t\t ______________________________________                                       |\n");
    printf(" |\t\t\t\t\t|0 - Preto\t|8 - Cinza             |                                      |\n");
    printf(" |\t\t\t\t\t|1 - Azul\t|9 - Azul Claro        |                                      |\n");
    printf(" |\t\t\t\t\t|2 - Verde\t|A - Verde Claro       |                                      |\n");
    printf(" |\t\t\t\t\t|3 - Verde Água\t|B - Verde Água Claro  |                                      |\n");
    printf(" |\t\t\t\t\t|4 - Vermelho\t|C - Vermelho Claro    |                                      |\n");
    printf(" |\t\t\t\t\t|5 - Roxo\t|D - Lilás             |                                      |\n");
    printf(" |\t\t\t\t\t|6 - Amarelo\t|E - Amarelo Claro     |                                      |\n");
    printf(" |\t\t\t\t\t|7 - Branco\t|F - Branco Brilhante  |                                      |\n");
    printf(" |                                       **************************************                                       |\n");
    printf(" |                                      ----------------------------------------                                      |\n");
    printf(" |__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __|\n\n");
   
    //Seleção Das Cores
    printf(" \ta) Cor Do Plano De Fundo: ");
    scanf(" %c", &cores[0]);
	getchar();
    printf("\n");
    printf(" \tb) Cor Do Texto: ");
    scanf("%c", &cores[1]);
    
    //Condicionando Se As Seleções Escolhidas Pelo Usuário 
    cores[2] = '\0'; // Adiciona o caractere nulo ao final da string
    strcat(comando, cores);
    system(comando);
    
    //Clear Screen
    system("cls");
	 
//Start Screen
    printf("  __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __\n");
    printf(" |                    #                                                                           #                   |\n");
    printf(" |                    #                      YPP5Y?!^.            .:^~!77?7                       #                   |\n");
    printf(" |                    #                      5GGGGBBGPJ!.      .^!7???????7                       #                   |\n");
    printf(" |                    #                      5GGGGYYPGBGP?:  .~7???7!!????7                       #                   |\n");
    printf(" |                    #                      5GGGG:    !GGGY????^    .????7                       #                   |\n");
    printf(" |                    #                      5GGGG:     ~GY????^     .????7                       #                   |\n");
    printf(" |                    #                      5GGGG:      J????7      .????7                       #                   |\n");
    printf(" |                    #                      YGPPP:      ~????~      .7???7                       #                   |\n");
    printf(" |                    #                                                                           #                   |\n");
    printf(" |                    #                                ..........                                 #                   |\n");
    printf(" |                    #                               |MEDPLANNER|                                #                   |\n");
    printf(" |                    #                                ¨¨¨¨¨¨¨¨¨¨                                 #                   |\n");
    printf(" |                    #                                   ####                                    #                   |\n");
    printf(" |                    #                                ,,,,,,,,,,                                 #                   |\n");
    printf(" |                    #                               |BEM VINDO!|                                #                   |\n");
    printf(" |                    #                                **********                                 #                   |\n");
    printf(" | _ _ _ _ _ _ _ _ _  #_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _# _ _ _ _ _ _ _ _ _ |\n\n");
	printf("\t\t\t\t\t\t Como Podemos Te Ajudar?\n\n");
	printf("\t\t\t\t\t **** Digite Uma Das Opções Abaixo ****\n");
	printf("                                              ____________________________ \n");
	printf("                                             | 1 - Cadastro | 3 - Voltar  |\n");
	printf("                                             | 2 -  Login   | 4 - Sair    |\n");
	printf("                                              ****************************\n\n");
	
	printf("\t- Digite Uma Opção ==> ");

	system("pause > NULL");
	return 0;
}
