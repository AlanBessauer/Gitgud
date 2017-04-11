%Defina um predicado somaQuad(X,Y,Q) que seja verdadeiro se Q for a soma dos quadrados de X e Y. Exemplos de uso:

somaQuad(X,Y,Q):- Q is X**2 + Y**2.

%Defina um predicado zeroInit(L) que é verdadeiro se L for uma lista que inicia com o número 0 (zero). Exemplo de uso:
zeroInit(L):-L = [C | _], C=0.

%Defina um predicado hasEqHeads(L1,L2) que seja verdadeiro se as listas L1 e L2 possuírem o mesmo primeiro elemento. Exemplos de uso:
hasEqHeads(L1,L2):- L1 = [X|_], L2 =[V|_], X == V.

%Defina um predicado has5(L) que seja verdadeiro se L for uma lista de 5 elementos. Lembre de como funciona a unificação em Prolog e resolva este exercício sem usar o predicado pré-definido length. Exemplos de uso:
has5(L):- L = [_ | _], L = [_,_,_,_,_].

%Defina um predicado hasN(L,N) que seja verdadeiro se L for uma lista de N elementos. Agora você pode usar um predicado pré-definido.
hasN(L,N):- L = [C | Z], length([C|Z],X), X == N.

%Defina um predicado isBin(L) que seja verdadeiro se L for uma lista contendo somente elementos 0 e 1. Use recursão. Exemplo:
isBin([]).
isBin(L):- L=[X|T], X>=0, X=<1, isBin(T).

%Defina um predicado mesmaPosicao(A,L1,L2) para verificar se um elemento A está na mesma posição nas listas L1 e L2. Assuma que L1 e L2 sejam permutações de uma lista de elementos distintos, sem repetições. Dica: procure auxílio em predicados pré-definidos. Exemplo de uso:
mesmaPosicao(A,L1,L2):- L1 = [X|_], L2 = [Z|_],A == X, A == Z.
mesmaPosicao(A,L1,L2):-L1 = [_|T], L2 = [_|V], mesmaPosicao(A,T,V).

%Defina um predicado repete5(E,L) que seja verdadeiro se a lista L for composta por exatamente 5 repetições do elemento E. Não use recursão. Exemplos:
repete5(E,L):- L=[E,E,E,E,E].

%Defina um predicado recursivo sumQuads(L,S) que seja verdadeiro se S for o somatório dos quadrados dos elementos da lista L.
sumQuads([],S):- S == 0.
sumQuads(L,S):- L=[X|T], V is S - X**2, sumQuads(T,V).

Defina um predicado recursivo mapop(L1,L2) que seja verdadeiro se a lista L2 for formada aplicando-se a operação 2*x+1 a cada elemento x da lista L1.
mapop([],[]).
mapop(L1,L2):-  L1=[X|T], L2=[N|Z], N is (X*2)+1, mapop(T,Z).

%Defina um predicado recursivo repete(N,E,L) que seja verdadeiro se a lista L for composta por exatamente N repetições do elemento E.
repete(0,_,[]).
repete(N,E,L):-  L =[Z|T], E == Z, X is N-1, repete(X,E,T)  .

%Defina um predicado positivos(L1,L2), de forma que L2 seja uma lista só com os elementos positivos de L1, conforme o exemplo abaixo:
positivos([],[]).
positivos(L1,L2):- L1 = [H|T],
H>0, L2 =[H|V], positivos(T,V).
positivos(L1,L2):- L1 = [H|T],
H=<0, positivos(T,L2).
