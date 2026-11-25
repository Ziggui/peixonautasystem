#include "../include/listas.h"
#include "../include/utils.h"
#include <stdlib.h>
#include <stdio.h>

void iniciar_lista_peixe(controle_lista_peixes_t *peixe)
{
    peixe->primeiro    = NULL;
    peixe->ultimo      = NULL;
}
void iniciar_lista_clientes(controle_lista_cliente_t *cliente)
{
    cliente->primeiro    = NULL;
    cliente->ultimo      = NULL;
}
void iniciar_lista_venda(controle_lista_venda_t *venda)
{
    venda->primeiro    = NULL;
    venda->ultimo      = NULL;
}

//Criar dado
peixe_t criar_novo_peixe()
{
    peixe_t peixe;

    printf("Identificação......: ");
    scanf("%i", &peixe.id);
    getchar();

    printf("Espécie............: ");
    fgets(peixe.especie, T_STR, stdin);
    retirar_enter(peixe.especie);
    formatar_maiuscula(peixe.especie);

    printf("Quantidade Estoque.: ");
    scanf("%f", &peixe.qtd_estoque);

    printf("Valor em Quilo.....: ");
    scanf("%f", &peixe.vlr_unitario);

    return peixe;    
}
cliente_t criar_novo_cliente()
{
    cliente_t cliente;

    printf("Identificação......: ");
    scanf("%i", &cliente.id);
    getchar();

    printf("Nome do Cliente....: ");
    fgets(cliente.nome, T_STR, stdin);
    retirar_enter(cliente.nome);
    formatar_maiuscula(peixe.nome);

    printf("Contato Cliente....: ");
    fgets(cliente.telefone, T_STR, stdin);
    retirar_enter(cliente.telefone);

    cliente.status = true; //true -> ativo

    return peixe;   
}

venda_t criar_nova_venda()
{
    venda_t venda;
    return venda;
}

//Criar o nó

no_peixe_t *criar_novo_no_peixe(peixe_t peixe)
{
    no_peixe_t *novo_no = NULL;

    novo_no = malloc(sizeof(no_peixe_t));

    novo_no->peixe = peixe;
    novo_no->prox  = NULL;
    return novo_no;
}

no_cliente_t *criar_novo_no_cliente(cliente_t cliente)
{
    no_cliente_t *novo_no = NULL;

    novo_no = malloc(sizeof(no_cliente_t));

    novo_no->cliente = cliente;
    novo_no->prox  = NULL;
    return novo_no;
}

no_venda_t *criar_novo_no_venda(venda_t venda)
{
    no_venda_t *novo_no = NULL;

    novo_no = malloc(sizeof(no_venda_t));

    novo_no->venda = venda;
    novo_no->prox  = NULL;
    return novo_no;
}

//Inserir nó na lista
void inserir_no_lista_peixe(controle_lista_peixes_t *controle, no_peixe_t *no_peixe)
{
    if (!controle->primeiro && !controle->ultimo){
        controle->primeiro = controle->ultimo = no_peixe;
    }
    else {
        controle->ultimo->prox = no_peixe;
    }
}

void inserir_no_lista_cliente(controle_lista_cliente_t *controle, no_cliente_t *no_cliente)
{
    if (!controle->primeiro && !controle->ultimo){
        controle->primeiro = controle->ultimo = no_cliente;
    }
    else {
        controle->ultimo->prox = no_cliente;
    }
}

void inserir_no_lista_venda(controle_lista_venda_t *controle, no_venda_t *no_venda)
{
    if (!controle->primeiro && !controle->ultimo){
        controle->primeiro = controle->ultimo = no_venda;
    }
    else {
        controle->ultimo->prox = no_venda;
    }
}