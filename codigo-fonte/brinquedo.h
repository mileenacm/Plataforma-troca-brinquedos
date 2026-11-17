//implementar o cadastro dos brinquedos
// ou seja, seus dados

typedef enum{
    disponivel,
    emprestado,
    aguardando_devolucao,
    indisponivel,

} situacao_emprestimo;

typedef struct {

    int id;
    char nome[100];
    char descricao[200];
    char categoria[50];
    char link_imagem[100];
    char condicao_do_brinquedo[100];
    situacao_emprestimo atual;

} dados_brinquedo;




