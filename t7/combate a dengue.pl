regra1(K):- K = [f,_,_,_,_,_,_].
regra1(K):- K = [_,f,_,_,_,_,_].
regra1(K):- K = [_,_,f,_,_,_,_].

regra2(K):- K = [h,g|_].

regra3(K):- K = [_,l,_,_,_,_,_].
regra3(K):- K = [_,_,l,_,_,_,_].
regra3(K):- K = [_,_,_,l,_,_,_].
regra3(K):- K = [_,_,_,_,l,_,_].
regra3(K):- K = [_,_,_,_,_,l,_].

regra4(K):- K = [m,_,_,_,_,_,_].
regra4(K):- K = [_,_,_,_,_,_,m].

regra5(K):- K = [_,_,_,_,p,_,_].
regra5(K):- K = [_,_,_,_,_,p,_].
regra5(K):- K = [_,_,_,_,_,_,p].

perm(List, [H|Perm]) :- delete(H, List, Rest), perm(Rest, Perm).
perm([],[]).

delete(X, [X|T], T).
delete(X, [H|T], [H|NT]) :- delete(X, T, NT).
visitas(K):-K = [_,_,_,_,_,_,_],
	Casas =[m,l,f,h,g,p,t],
	perm(Casas,K),
	regra1(K),
	regra2(K),
	regra3(K),
	regra4(K),
	regra5(K).


/* Quest˜ao 2. Se em um trecho do percurso visitarmos
as casas T, L e F, exatamente nesta ordem, qual a
posic˜ao que G foi visitada?
(A) Segunda.
(B) Terceira.
(C) Quarta.
(D) Quinta.
(E) Sexta.

?- visitas([_,g,_,_,_,_,_]).
?- visitas([_,_,g,_,_,_,_]).
?- visitas([_,_,_,g,_,_,_]).
?- visitas([_,_,_,_,g,_,_]).
?- visitas([_,_,_,_,_,g,_]).
 */


/*
Quest˜ao 1. Qual das seguintes op¸c˜oes ´e uma lista
completa e correta da ordem que as sete casas devem
ser visitadas?
(A) F, T, H, L, P, G e M.
(B) H, G, F, L, T, P e M.
(C) L, T, F, H G, M e P.
(D) M, F, D, H, L, G e T.
(E) M, L, H, G, F, P e T.

?-visitas([f,t,h,l,p,g,m]).
?-visitas([h,g,f,l,t,p,m]).
?-visitas([l,t,f,h,g,m,p]).
?-visitas([m,f,d,h,l,g,t]).
?-visitas([m,l,h,g,f,p,t]).
*/

/*
Quest˜ao 3. Se a casa H ´e a primeira a ser visitada,
qual a quarta casa a ser visitada?
(A) F.
(B) G.
(C) L.
(D) M.
(E) P.

?-visitas([h,_,_,f,_,_,_]).
?-visitas([h,_,_,g,_,_,_]).
?-visitas([h,_,_,l,_,_,_]).
?-visitas([h,_,_,m,_,_,_]).
?-visitas([h,_,_,p,_,_,_]).
*/
