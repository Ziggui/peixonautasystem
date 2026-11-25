#include "../include/menus.h"
#include "../include/listas.h"

int main()
{
    controle_lista_peixes_t lista_peixes;
    controle_lista_cliente_t lista_clientes;
    controle_lista_venda_t lista_vendas;

    //Iniciar listas
    iniciar_lista_peixe(&lista_peixes);
    iniciar_lista_clientes(&lista_clientes);
    iniciar_lista_venda(&lista_vendas);

    //Menus
    int opc_menu_principal, opc_menu_cliente, opc_menu_peixes, opc_menu_vendas;

    do {
        opc_menu_principal = menu_principal();

        switch (opc_menu_principal){
            case 1: do {

                    opc_menu_peixes = menu_estoque();

                    switch (opc_menu_peixes){
                        case 1: break;
                        case 2: break;
                        case 3: break;
                        case 4: break;
                        case 5: break;
                    }
            } while (opc_menu_peixes != 0);
            break;

            case 2: do {

                    opc_menu_cliente = menu_clientes();

                    switch (opc_menu_cliente){
                        case 1: break;
                        case 2: break;
                        case 3: break;
                        case 4: break;
                        case 5: break;
                    }
            } while (opc_menu_cliente != 0);
            break;

            case 3: do {

                    opc_menu_vendas = menu_vendas();

                    switch (opc_menu_vendas){
                        case 1: break;
                        case 2: break;
                        case 3: break;
                        case 4: break;
                    }
            } while (opc_menu_vendas != 0);
            break;
        }


    } while (opc_menu_principal != 0);

    return 0;
}