#Escreva uma função que receba uma lista de nomes e retorne uma lista com a string "Sr. " adicionada ao início de cada nome.
def Sr(ls):
    return list(map(lambda x:'Sr.'+ x ,ls))

#Escreva uma função que, dada uma lista de números, calcule 3n*2 + 2/n + 1 para cada número n da lista.
def adddoida(ln):
    return list(map(lambda x: (3*x)*2 + 2/x + 1,ln))

#Escreva uma função que, dada uma lista de idades de pessoas no ano atual, retorne uma lista somente com as idades de quem nasceu depois de 1970. Para testar a condição, sua função deverá subtrair a idade do ano atual. Exemplo de uso:
def idades(n):
    return list(filter(lambda x: x<2017-1970,n))

#Crie uma função que receba uma lista de nomes e retorne outra lista com somente aqueles nomes que terminarem com a letra 'a'.
def enda(ls):
    return list(filter(lambda x:x[-1] =='a',["maria", "joao","zedocaminhao"]))

#O código abaixo é escrito em Python imperativo. Escreva um código equivalente usando programação funcional.
def numbers(x):
    return list(map(lambda x:x*2,x))
