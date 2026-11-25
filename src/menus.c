#include "../include/menus.h"
#include <stdio.h>

int menu_principal()
{
    int opcao;

    printf("0======================0\n");
    printf("0   Peixonauta System  0\n");
    printf("0======================0\n\n");
    printf("------------------------\n");
    printf("1. Estoque\n");
    printf("2. Clientes\n");
    printf("3. Vendas\n");
    printf("0. Sair do Programa\n");
    printf("------------------------\n");
    printf("===: ");
    scanf("%i", &opcao);
    getchar();

    return opcao;
}

int menu_estoque()
{
    int opcao;

    printf("0======================0\n");
    printf("0        Estoque       0\n");
    printf("0======================0\n\n");
    printf("------------------------\n");
    printf("1. Incluir item\n");
    printf("2. Excluir item\n");
    printf("3. Consultar item por especie\n");
    printf("4. Listar itens em estoque\n");
    printf("5. Listar itens com estoque abaixo de um valor\n");
    printf("0. Voltar ao Menu Principal\n");
    printf("------------------------\n");
    printf("===: ");
    scanf("%i", &opcao);
    getchar();

    return opcao;

}

int menu_clientes()
{
    int opcao;

    printf("0======================0\n");
    printf("0       Clientes       0\n");
    printf("0======================0\n\n");
    printf("------------------------\n");
    printf("1. Incluir novo cliente\n");
    printf("2. Excluir cliente\n");
    printf("3. Listar Clientes cadastrados\n");
    printf("4. Consultar cliente por nome\n");
    printf("5. Listar Clientes Ativos\n");
    printf("0. Voltar ao Menu Principal\n");
    printf("------------------------\n");
    printf("===: ");
    scanf("%i", &opcao);
    getchar();

    return opcao;
}

int menu_vendas()
{
    int opcao;

    printf("0======================0\n");
    printf("0         Vendas       0\n");
    printf("0======================0\n\n");
    printf("------------------------\n");
    printf("1. Incluir nova venda\n");
    printf("2. Listar vendas por cliente\n");
    printf("3. Listar todas as vendas\n");
    printf("4. Listar vendas por especie\n");
    printf("0. Voltar ao Menu Principal\n");
    printf("------------------------\n");
    printf("===: ");
    scanf("%i", &opcao);
    getchar();

    return opcao;

}
