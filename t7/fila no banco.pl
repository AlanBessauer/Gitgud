tempogasto(A,B,C):- A is 1*(60/2), B is 1*(60/1.5), C is 1*(60/0.5).
tempototal(X):- X is 2*2+2*1.5+2*0.5.
tempocliente(X):- X is 100/2.
/*
Questao 6. O tempo que cada um dos caixas A,
B e C demora para atender um ´unico cliente ´e respectivamente
de:
(A) 60 seg., 120 seg. e 180 seg.
(B) 30 seg., 20 seg. e 60 seg.
(C) 1 min., 2 min. e 2 min.
(D) 30 seg., 40 seg. e 2 min.
(E) 0,5 min., 20 seg. e 120 seg.

?-tempogasto(60,120.0,180.0).
?-tempogasto(30,20.0,60.0).
?-tempogasto(60,120.0,120.0).
?-tempogasto(30,40.0,120.0).
?-tempogasto(30,20.0,120.0).

Questao 7. Depois de 2 minutos quantos clientes foram
ao todo atendidos nos trˆes caixas?
(A) 6.
(B) 7.
(C) 8.
(D) 9.
(E) 9,5.

?-tempototal(6.0).
?-tempototal(7.0).
?-tempototal(8.0).
?-tempototal(9.0).
?-tempototal(9.5).

Questao 8. Se somente o caixa A estiver atendendo,
em quanto tempo os 100 clientes ser˜ao atendidos?
(A) 20 min.
(B) 25 min.
(C) 30 min.
(D) 40 min.
(E) 50 min.

?-tempocliente(20).
?-tempocliente(25).
?-tempocliente(30).
?-tempocliente(40).
?-tempocliente(50).
