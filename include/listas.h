#ifndef LISTAS_H
#define LISTAS_H

#include "tipos.h"

void iniciar_lista_peixe(controle_lista_peixes_t *peixe);
void iniciar_lista_clientes(controle_lista_cliente_t *cliente);
void iniciar_lista_venda(controle_lista_venda_t *venda);

//Criar dado
peixe_t criar_novo_peixe();
cliente_t criar_novo_cliente();
vendas_t criar_nova_venda();

//Criar o nó
no_peixe_t *criar_novo_no_peixe(peixe_t peixe);
no_cliente_t *criar_novo_no_cliente(cliente_t cliente);
no_venda_t *criar_novo_no_venda(vendas_t venda);

//Inserir nó na lista
void inserir_no_lista_peixe(controle_lista_peixes_t *controle, no_peixe_t *no_peixe);
void inserir_no_lista_cliente(controle_lista_cliente_t *controle, no_cliente_t *no_cliente);
void inserir_no_lista_venda(controle_lista_venda_t *controle, no_venda_t *no_venda);


#endif