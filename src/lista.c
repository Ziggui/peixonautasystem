#include "../include/listas.h"
#include <stdlib.h>

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