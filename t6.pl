zeroInit(L):-L = [C | _], C=0 .

has5(L):- L = [_ | _], L = [_,_,_,_,_].

hasN(L,N):- L = [C | Z], length([C|Z],X), X == N.

potN0(0, [1]).
potN0(N, L):- (N=\=0 -> pow(2, N , X); X = 1),L = [X|Z], N1 is N-1, potN0(N1, Z).

zipmult([],[],[]).
zipmult(L1, L2, L3):- L1 = [C | Z], L2 = [X | Y],L3 =[M|N], M is C*X, zipmult(Z,Y,N).
potencias(0, [1]).
potencias(N,L):- interpow(0,N,L).

interpow(0, 0,[]).
interpow(X, X,[]).
interpow(Y, N, L):- (Y=\=N -> pow(2, Y, X);pow(2, N, X)), L = [X|Z], Y1 is Y+1,interpow(Y1, N, Z).

mesmaposicao(A, L1, L2):- L1 = [Y|Z], L2 = [G,H], Y = A, G = A, mesmaposicao(A,Z, H).

positivos([],[]).
positivos(L1,L2):- L1 = [H|T],
H>0, L2 =[H|V], positivos(T,V).
positivos(L1,L2):- L1 = [H|T],
H=<0, positivos(T,L2).
