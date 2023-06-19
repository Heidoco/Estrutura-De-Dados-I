#include "tabela_hash.h"

int main()
{
    Hash tab[N];
    hsh_set(tab,10,"aaa","fjajdf@gmail.com", "A");
    hsh_set(tab,2,"bbb","bbbb@gmail.com", "B");
    hsh_set(tab,1,"ccc","ccccc@gmail.com", "C");
    hsh_set(tab,22,"ddd","ddddd@gmail.com", "D");

    hsh_get(tab,10);
    printf("Buscar a matricula 10: %d\n",hsh_get(tab,10)->matricula);
    hsh_remove(tab, 10);
    printf("Matricula 10 removida: \n");
    hsh_get(tab, 10);
    hsh_imprime(tab);
    return 0;
}
