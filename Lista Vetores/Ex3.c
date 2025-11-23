#include <stdio.h>

int main() {
    int estoque[10];
    int i, produto_escolhido, total_vendido = 0;

    printf("=== Problema 3: Inventario de Loja ===\n");
    printf("--- Estoque Inicial ---\n");
    
    for(i = 0; i < 10; i++) {
        printf("Quantidade do Produto %d: ", i + 1);
        scanf("%d", &estoque[i]);
    }

    printf("\n--- Simulacao de 5 Vendas ---\n");

    for(i = 0; i < 5; i++) {
        printf("Venda %d/5 - Qual produto foi vendido (1-10)? ", i+1);
        scanf("%d", &produto_escolhido);

        
        int indice = produto_escolhido - 1;

        if(indice >= 0 && indice < 10) {
            if(estoque[indice] > 0) {
                estoque[indice]--;
                total_vendido++;
                printf("Venda realizada! Produto %d agora tem %d unidades.\n", produto_escolhido, estoque[indice]);
            } else {
                printf("Erro: Produto esgotado!\n");
            }
        } else {
            printf("Erro: Produto invalido.\n");
            i--;
        }
    }

    printf("\n=== RELATORIO FINAL ===\n");
    printf("Produtos esgotados: ");
    for(i = 0; i < 10; i++) {
        if(estoque[i] == 0) printf("Prod %d, ", i+1);
    }
    
    printf("\nProdutos com estoque baixo (<5): ");
    for(i = 0; i < 10; i++) {
        if(estoque[i] < 5) printf("Prod %d, ", i+1);
    }

    printf("\nTotal de unidades vendidas: %d\n", total_vendido);

    return 0;
}