#ifndef TIPOS_H
#define TIPOS_H

#include <stdbool.h>
#include <stdint.h>
#define T_STR 100

typedef char string[T_STR];

//Peixe
typedef struct peixe {
    uint8_t id;
    string especie;
    float qts_estoque; //kg
    float vlr_unitario; //kg
} peixe_t;

//Cliente
typedef struct cliente{
    uint8_t id;
    string nome;
    string telefone;
    bool status;
} cliente_t;

//Venda
typedef struct vendas{
    uint8_t id;
    uint8_t id_cliente;
    uint8_t id_peixe;
    float quantidade;
    float custo;
} vendas_t;

//Nó de peixe
typedef struct no_peixe{
    peixe_t peixe;
    struct no_peixe *prox;
} no_peixe_t;

//Nó de Cliente
typedef struct no_cliente{
    cliente_t cliente;
    struct no_cliente *prox;
} no_cliente_t;

//Nó de Venda
typedef struct no_venda{
    vendas_t venda;
    struct no_venda *prox;
} no_venda_t;

//Controle da lista de Peixes
typedef struct controle_lista_peixes {
    no_peixe_t *primeiro;
    no_peixe_t *ultimo;
} controle_lista_peixes_t;

//Controle da lista de Clientes
typedef struct controle_lista_cliente{
    no_cliente_t *primeiro;
    no_cliente_t *ultimo;
} controle_lista_cliente_t;

//Controle da lista de Vendas
typedef struct controle_lista_venda{
    no_venda_t *primeiro;
    no_venda_t *ultimo;
} controle_lista_venda_t;

#endif