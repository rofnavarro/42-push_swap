# push_swap
Meu primeiro projeto de estudo de algoritmo feito em linguagem C.

****

**Proposta**

Escrever um algoritmo que organize números aleatórios com somente duas pilhas com o menor número de movimentos possível.

****

**Movimentos**

sa (swap a): Troque os 2 primeiros elementos no topo da pilha a.
Faz nada se tiver somente um ou nenhum elemento.

sb (swap b): Troque os 2 primeiros elementos no topo da pilha b.
Faz nada se tiver somente um ou nenhum elemento.

ss : sa e sb ao mesmo tempo.


pa (push a): Pegue o primeiro elemento no topo de b e coloque-o no topo de a.
Faz nada se estiver vazia.

pb (push b): Pegue o primeiro elemento no topo de a e coloque-o no topo de b.
Faz nada se estiver vazia.


ra (rotate a): Deslocar todos os elementos da pilha a em 1 para cima.
O primeiro elemento vira o último.

rb (rotate b): Deslocar todos os elementos da pilha b em 1 para cima.
O primeiro elemento vira o último.

rr : ra e rb ao mesmo tempo.


rra (reverse rotate a): Deslocar todos os elementos da pilha a em 1 para baixo.
O último elemento vira o primeiro.

rrb (reverse rotate b): Deslocar todos os elementos da pilha b em 1 para baixo.
O último elemento vira o primeiro.

rrr : rra e rrb ao mesmo tempo.

