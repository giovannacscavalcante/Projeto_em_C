// Diretivas (Cabeçalho)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#define MAX_ALUNOS 50
#define MAX_PROFS 50
//--------------------------------------

// Variáveis e Struct
typedef struct{
	char nome[50];
	char idioma[20];
	char turno[20];
	int ativo;
	float notas[4];
} Aluno;
Aluno alunos[MAX_ALUNOS];

typedef struct{
	char nome[50];
	char cpf[20];
	char rg[20];
	char telefone[20];
	char email[20];
	char idioma[20];
	char turno[20];
	int ativo;
} Professor;
Professor profs[MAX_PROFS];
//--------------------------------------

//Protótipos das Funções
void tela_login();
void menu();
void cadastrar_aluno();
void listar_alunos();
void excluir_aluno();
void cadastrar_prof();
void listar_prof();
void excluir_prof();
void pesquisar_aluno();
void pesquisar_prof();
//void nota_aluno();
void aprovados();
void reprovados();
//--------------------------------------

// Programa Principal
int main(){
	system("chcp 1252 > nul");
	printf("                ()\n");
    printf("                /\\  \n");          
    printf("               |==| \n");         
    printf("               ==== \n");         
    printf("                XX  \n");        
    printf("               xXXx \n");       
    printf("               XXXX \n");       
    printf("               XXXX \t\t     Bem-Vindo - Welcome - Bienvenido - Bienvenue\n"); 
	printf("               XXXX \n");       
	printf("              xXXXXx\t              * Sistema de Administração Escolar GIO-D *\n");
	printf("              XXXXXX\n");
	printf("              XXXXXX\t\t          - Escola de Idiomas Gio Florença -\n");
	printf("             xXXXXXXx\n");
	printf("             XXXXXXXX\n");
	printf("            xXXXXXXXXx\n");
	printf("            XXXXXXXXXX                      	           			\n");
	printf("           XXXXX  XXXXX                   	      	  /\\ \\			\n");
	printf("          xXXXX    XXXXx                   	         / /\\ \\		\n");
	printf("         XXXXXxxxxxxXXXXX                  	        / /__\\ \\		\n");
	printf("       xXXXXX--------XXXXXx                 	        \\/:..:\\/		\n");
	printf("    xXXXXXX           XXXXXXx\n");
	printf(" xxXXXXXXX             XXXXXXXxx\t\t  created by IRON CODE\n");
	printf("				                 .:.:.:.:.:.:.:.:.:.:.:");
	printf("\n\n");
		system("pause");
		system("cls");
		tela_login();
		
		system("pause");   
   return 0;
}


//--------------------------------------

// Função da Tela de Login
void tela_login(){
	
		system("color 07");
		printf(" __    _____	 _____    __  __  \n");	
printf("|  |  |  _  \\ 	/     \\  |  \\|  |\n");	
printf("|  |  |     /   |  |  |  |      |\n");
printf("|__|  |__|__\\	\\_____/  |__|\\__|\n");


printf(" _____    _____    ____     _____				 \n");
printf("/     \\  /     \\  |    \\   |  ___|                   \n");
printf("|  <--<  |  |  |   | |  |  |  ___|                   \n");
printf("\\_____/  \\_____/  |____/   |_____|             \n");
		printf("\n");
 		printf(":.:.:.:.:.::.:.:.:.:.::.:.:.:.:.::.:.:.:.:.::.:.:.:.:.:\n");
 			printf("\n");
 		//printf("---------------------------------------------\n");
 		printf("    Escola de Idiomas Gio Florença - Tela de Log in  \n");
 		//printf("---------------------------------------------\n");
 			printf("\n");
 		printf(":.:.:.:.:.::.:.:.:.:.::.:.:.:.:.::.:.:.:.:.::.:.:.:.:.:\n\n");
	    char login[20] = "admin";
	    char login1[20];
	    char senha[20] = "123";
	    char senha1[20];        
	    int verificar_login = 0;
	
	    while(!verificar_login){
	    	system("color 07");
	        printf("\tLogin: ");
	        gets(login1);
	
	        printf("\tSenha: ");
	        gets(senha1);
	
	    if (strcmp(login, login1) == 0 && strcmp(senha, senha1) == 0){
	        verificar_login = 1;
	        printf("\7");
	        menu();
	        
	    }else
	    	system("color 04");
	        printf("\tERRO! ;-( Login ou senha Incorretos! Tente Novamente.\n\n");  
	        system("pause");
	        printf("\n");
	    }	
}
//--------------------------------------

// Função do Menu Principal	
void menu(){
		int opcao;
	do{
		system("color F0");
		system("cls");
		printf(":.:.:.:.:.::.:.:.:.:.::.:.:.:.:.::.:.:.:.:.::.:.:.:.:.::.::.::.::.::.::.::.::.::.:.:\n");
		printf("\n");
 		printf("\tSEJA BEM VINDO! (^_^)      			created by Iron Code\n");
 		printf("\n");
 		printf(":.:.:.:.:.::.:.:.:.:.::.:.:.:.:.::.:.:.:.:.::.:.:.:.:.::.::.::.::.::.::.::.::.::.:.:\n");
		printf("\n\t\t\t  [1] >> Cadastrar Notas do Aluno");
		printf("\n\t\t\t  [2] >> Listar Alunos");
		printf("\n\t\t\t  [3] >> Apagar Registro de Aluno");
		printf("\n\t\t\t  ===================================\n");
		printf("\n\t\t\t  [4] >> Cadastrar Professor");
		printf("\n\t\t\t  [5] >> Listar Professores");
		printf("\n\t\t\t  [6] >> Apagar Registro de Professor");
		printf("\n\t\t\t  ===================================\n");
		printf("\n\t\t\t  [7] >> Pesquisar Aluno por nome");
		printf("\n\t\t\t  [8] >> Pesquisar Professor por nome");
		printf("\n\t\t\t  ===================================\n");
		printf("\n\t\t\t  [9] >> Listar Alunos Aprovados ");
		printf("\n\t\t\t  [10] >> Listar Alunos Reprovados");
		printf("\n\t\t\t  ===================================\n");
		printf("\n\t\t\t  [0] >> Sair\n");
		printf("\n\t\t\t  Informe a opção digitada ->> ");
		scanf("%d", &opcao);
		getchar();
		switch(opcao){
			case 1:
				cadastrar_aluno();
				break;
			case 2:
				listar_alunos();
				break;
			case 3:
				excluir_aluno();
				break;
			case 4:
				cadastrar_prof();
				break;
			case 5:
				listar_prof();
				break;
			case 6:
				excluir_prof();
				break;
			case 7:
				pesquisar_aluno();
				break;
			case 8:
				pesquisar_prof();
				break;
			case 9:
				aprovados();
				break;
			case 10:
				reprovados();
				break;
			default:
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				printf("Deseja mesmo sair do sistema? =( \n Digite [ 0 ] para confirmar.\n");
				break;
		}	
		getchar();
	} while(opcao != 0);
}
//--------------------------------------	

// Função para cadastrar o aluno
void cadastrar_aluno(){
char nome[50];
char idioma[20];
char turno[20];
	float notas[4];
	int opcao, op;

	do{
		system("cls");
		printf(":.:.:.:.:.::.:.:.:.:.::.:.:.:.:.::.:.:.:.:.::.:.:.:.:.::.:.:.:.:.:\n");
		printf("\n");
 		printf("\t\t    CADASTRAR NOTA DOS ALUNOS\n");
 		printf("\n");
 		printf(":.:.:.:.:.::.:.:.:.:.::.:.:.:.:.::.:.:.:.:.::.:.:.:.:.::.:.:.:.:.:\n");
		printf("\nNome: ");
		fgets(nome,sizeof(nome),stdin);
		printf(" _____________\n");
		printf("|    IDIOMA   |\n");
		printf("|_____________|\n");
		printf("|  Inglês     |\n");
		printf("|  Espanhol   |\n");
		printf("|  Francês    |\n");
		printf("|-------------|\n");
		printf("Digite o curso do aluno(a) %s >> ", nome);
		fgets(idioma,sizeof(idioma),stdin);
		printf(" _____________\n");
		printf("|    TURNO    |\n");
		printf("|_____________|\n");
		printf("|  Matutino   |\n");
		printf("|  Vespertino |\n");
		printf("|  Noturno    |\n");
		printf("|-------------|\n");
		fflush(stdin);
		printf("Digite o turno do aluno(a) %s >> ",nome);
		fgets(turno,sizeof(turno),stdin);
		printf("\n");
		printf("Agora informe as notas referente a cada módulo:\n\n");
		printf("1º Módulo: ");
		scanf("%f", &notas[0]);
		printf("2º Módulo: ");
		scanf("%f", &notas[1]);
		printf("3º Módulo: ");
		scanf("%f", &notas[2]);
		printf("4º Módulo: ");
		scanf("%f", &notas[3]);

		for (int i = 0; i < MAX_ALUNOS; ++i)
		{
			if (alunos[i].ativo == 0)
			{
				alunos[i].notas[0] = notas[0];
				alunos[i].notas[1] = notas[1];
				alunos[i].notas[2] = notas[2];
				alunos[i].notas[3] = notas[3];
				strcpy(alunos[i].nome, nome);
				strcpy(alunos[i].idioma, idioma);
				strcpy(alunos[i].turno, turno);
				alunos[i].ativo=1;
				break;
			}
		}
		printf("\n");
		printf("[1] - Novo Cadastro\n");
		printf("[0] - Voltar\n");
		scanf("%d", &opcao);
		getchar();
	}while(opcao != 0);
}
//--------------------------------------

// Função para listar todos os alunos
void listar_alunos(){
	system("color 3F");
		system("cls");
		printf(":.:.:.:.:.::.:.:.:.:.::.:.:.:.:.::.:.:.:.:.::.:.:.:.:.::.:.:.:.:.:\n");
		printf("\n");
 		printf("\t\t    LISTAGEM GERAL DOS ALUNOS\n");
 		printf("\n");
 		printf(":.:.:.:.:.::.:.:.:.:.::.:.:.:.:.::.:.:.:.:.::.:.:.:.:.::.:.:.:.:.:\n\n");
	for(int i = 0; i < MAX_ALUNOS; ++i){

		if (alunos[i].ativo == 1){
			printf("Matrícula: %d\n", i + 1);
			printf("Nome: %s", alunos[i].nome); 
			printf("Matéria: %s", alunos[i].idioma);
			printf("\n");
			printf("1º MOD.: %.1f\n", alunos[i].notas[0]);
			printf("2º MOD.: %.1f\n", alunos[i].notas[1]);
			printf("3º MOD.: %.1f\n", alunos[i].notas[2]);
			printf("4º MOD.: %.1f\n", alunos[i].notas[3]);
			printf("---------------------\n");
		}
	}
}
//--------------------------------------	

// Função para excluir alunos
void excluir_aluno(){
	
	int cod;
	listar_alunos();
	system("color FC");
	printf("-_--_--_--_--_--_--_--_--_--_--_--_--_--_--_-\n");
 	printf("\tAPAGAR REGISTROS DE ALUNOS\n");
 	printf("-_--_--_--_--_--_--_--_--_--_--_--_--_--_--_-\n\n");
	printf("\n Informe o codigo do aluno a ser apagado: ");
	scanf("%d", &cod);
	--cod;
	alunos[cod].ativo = 0;
	printf("Aluno excluido com sucesso\n");
	getchar();
}
//--------------------------------------

// Função para cadastrar o Professor
void cadastrar_prof(){
	char nome[50];
	char cpf[20];
	char rg[20];
	char telefone[20];
	char email[20];
	char idioma[20];
	char turno[20];
	int opcao;
	
	do{
		system("color 8F");
		system("cls");
		printf(":.:.:.:.:.::.:.:.:.:.::.:.:.:.:.::.:.:.:.:.::.:.:.:.:.::.:.:.:.:.:\n");
		printf("\n");
 		printf("\t\t    CADASTRAR PROFESSORES\n");
 		printf("\n");
 		printf(":.:.:.:.:.::.:.:.:.:.::.:.:.:.:.::.:.:.:.:.::.:.:.:.:.::.:.:.:.:.:\n");
		printf("Nome: ");
		fflush(stdin);
		fgets(nome,sizeof(nome),stdin);
		
		printf("Cpf: ");
		fflush(stdin);
		fgets(cpf,sizeof(cpf),stdin);
		
		printf("RG: ");
		fflush(stdin);
		fgets(rg,sizeof(rg),stdin);
		
		printf("Telefone: ");
		fflush(stdin);
		fgets(telefone,sizeof(telefone),stdin);
		
		printf("Email: ");
		fflush(stdin);
		fgets(email,sizeof(email),stdin);
		
		printf(" _____________\n");
		printf("|    IDIOMA   |\n");
		printf("|_____________|\n");
		printf("|  Inglês     |\n");
		printf("|  Espanhol   |\n");
		printf("|  Francês    |\n");
		printf("|-------------|\n");
		printf("Digite o curso a ser ministrado pelo Professor(a) %s >> ", nome);
		fgets(idioma,sizeof(idioma),stdin);
		printf(" _____________\n");
		printf("|    TURNO    |\n");
		printf("|_____________|\n");
		printf("|  Matutino   |\n");
		printf("|  Vespertino |\n");
		printf("|  Noturno    |\n");
		printf("|-------------|\n");
		fflush(stdin);
		printf("Digite o turno do Professor(a) %s >> ",nome);
		fgets(turno,sizeof(turno),stdin);
		
		

		for (int i = 0; i < MAX_PROFS; ++i)
		{
			if (profs[i].ativo == 0)
			{
				strcpy(profs[i].nome, nome);
				strcpy(profs[i].cpf, cpf);
				strcpy(profs[i].rg, rg);
				strcpy(profs[i].telefone, telefone);
				strcpy(profs[i].email, email);
				strcpy(profs[i].idioma, idioma);
				strcpy(profs[i].turno, turno);
				profs[i].ativo=1;
				break;
			}
		}
		
		printf("\n");
		printf("[1] - Novo Cadastro\n");
		printf("[0] - Voltar\n");
		scanf("%d", &opcao);
	}while(opcao != 0);
}
//--------------------------------------

// Função para listar todos os professores
void listar_prof(){
	system("color 8F");
	system("cls");
	printf(":.:.:.:.:.::.:.:.:.:.::.:.:.:.:.::.:.:.:.:.::.:.:.:.:.::.:.:.:.:.:\n");
		printf("\n");
 		printf("\t\t    LISTAGEM GERAL DOS PROFESSORES\n");
 		printf("\n");
 		printf(":.:.:.:.:.::.:.:.:.:.::.:.:.:.:.::.:.:.:.:.::.:.:.:.:.::.:.:.:.:.:\n\n");
	for(int i = 0; i < MAX_PROFS; ++i){

		if (profs[i].ativo == 1){
			printf("Código: %d\n", i + 1);
			printf("Nome: %s", profs[i].nome); // colocar o \n antes não aparecem os resultados.
			printf("CPF: %s", profs[i].cpf);
			printf("RG: %s", profs[i].rg);
			printf("Telefone: %s", profs[i].telefone);
			printf("Email: %s", profs[i].email);
			printf("Idioma: %s", profs[i].idioma);
			printf("Turno: %s", profs[i].turno);
			printf("------------------------\n");
		}
	}
}
//--------------------------------------

// Função para excluir professores
void excluir_prof(){
	int cod;
	listar_prof();
	system("color FC");
	printf("-_--_--_--_--_--_--_--_--_--_--_--_--_--_--_-\n");
 	printf("\tAPAGAR REGISTROS DE PROFESSORES\n");
 	printf("-_--_--_--_--_--_--_--_--_--_--_--_--_--_--_-\n\n");
	printf("\n Informe o codigo do professor a ser apagado: ");
	scanf("%d", &cod);
	--cod;
	profs[cod].ativo = 0;
	printf("Professor excluido com sucesso\n");
	getchar();
}
//--------------------------------------

// Função Pesquisar Aluno
void pesquisar_aluno(){
	char nome[50];
	int op;
	do{
		system("cls");
		printf("Pesquisar nome do aluno: ");
		fgets(nome,sizeof(nome),stdin);
		for (int i = 0; i < MAX_ALUNOS; ++i){
			
			if(strstr(alunos[i].nome,nome) != NULL){
				printf("\n");
				printf("Mátricula do Aluno: %d\n", i + 1);
				printf("Nome: %s\n", alunos[i].nome); // colocar o \n antes não aparecem os resultados.
				printf("1º Bim.: %0.1f\n", alunos[i].notas[0]);
				printf("2º Bim.: %0.1f\n", alunos[i].notas[1]);
				printf("3º Bim.: %0.1f\n", alunos[i].notas[2]);
				printf("4º Bim.: %0.1f\n", alunos[i].notas[3]);
				printf("\n---------------------\n");
			}
		}
		printf("\nDeseja fazer outra pesquisa? [0 / 1]");
		scanf("%d", &op);
		getchar();
	}while(op != 0);
}
//--------------------------------------

// Funcão para pesquisar professores
void pesquisar_prof(){
	char nome[50];
	int op;
	do{
		system("color 8F");
		system("cls");
		printf("Pesquisar nome do professor: ");
		fgets(nome,sizeof(nome),stdin);
		for(int i = 0; i < MAX_PROFS; ++i){

		if (strstr(profs[i].nome,nome)!=NULL){
			printf("\n");
			printf("Código: %d\n", i + 1);
			printf("Nome: %s", profs[i].nome); // colocar o \n antes não aparecem os resultados.
			printf("CPF: %s", profs[i].cpf);
			printf("RG: %s", profs[i].rg);
			printf("Telefone: %s", profs[i].telefone);
			printf("Email: %s", profs[i].email);
			printf("Idioma: %s", profs[i].idioma);
			printf("Turno: %s", profs[i].turno);
			printf("------------------------\n");
		}
	}
		printf("\nDeseja fazer outra pesquisa? [0 / 1]");
		scanf("%d", &op);
		getchar();
	}while(op != 0);
}
//--------------------------------------

// Listar alunos aprovados
void aprovados(){
	system("system color 2F");
	system("cls");
	
	float media;
	printf("===================================\n");
	printf(" Listagem de Alunos Aprovados  (^.^)\n");
	printf("===================================\n");
	for(int i = 0; i < MAX_ALUNOS; ++i){

		if (alunos[i].ativo == 1){
			
			media = 0;
media = alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2] + alunos[i].notas[3];
			media = media / 4;
			if(media > 7){
				printf("Matrícula: %d\n", i + 1);
				printf("Nome: %s\n", alunos[i].nome); // colocar o \n antes não aparecem os resultados.
				printf("1º MOD.: %0.1f\n", alunos[i].notas[0]);
				printf("2º MOD.: %0.1f\n", alunos[i].notas[1]);
				printf("3º MOD.: %0.1f\n", alunos[i].notas[2]);
				printf("4º MOD.: %0.1f\n", alunos[i].notas[3]);
				printf("Média: %.1f", media);
				printf("\n---------------------\n");
			}
			
		
		}
	}
}
//--------------------------------------

// Listar alunos reprovados
void reprovados(){
		system("cls");
		system("color FC");
	
	float media;
	printf("====================================\n");
	printf("Listagem de Alunos Reprovados  [o_o]\n");
	printf("====================================\n");
	for(int i = 0; i < MAX_ALUNOS; ++i){

		if (alunos[i].ativo == 1){
			
			media = 0;
			media = alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2] + alunos[i].notas[3];
			media = media / 4;
			if(media < 7){
				printf("\n");
				printf("Matrícula: %d\n", i + 1);
				printf("Nome: %s\n", alunos[i].nome);
				printf("1º MOD.: %.1f\n", alunos[i].notas[0]);
				printf("2º MOD.: %.1f\n", alunos[i].notas[1]);
				printf("3º MOD.: %.1f\n", alunos[i].notas[2]);
				printf("4º MOD.: %.1f\n", alunos[i].notas[3]);
				printf("Média %.1f", media);
				printf("\n---------------------\n");
			}
			
		
		}
	}
}
//--------------------------------------	
	
