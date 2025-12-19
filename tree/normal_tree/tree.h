typedef struct tree{
    int info;
    struct tree* left;
    struct tree* right;
}Tree;

Tree* inicializa();

int estaVazia(Tree* t);

Tree* criaNo(int n, Tree* left, Tree* right);
Tree* libera(Tree* t);

int busca(Tree*t, int n);

void imprimeEmPre(Tree* t);
void imprimeEmOrdem(Tree* t);
void imprimeEmPos(Tree* t);

int buscaBinaria(Tree*t ,int n);
Tree* inserir(Tree* t, int n);
