#Defina uma função somaQuad(x,y) que calcule a soma dos quadrados de dois números x e y.
def somaQuad(x,y):
    return x*2 + y*2

#Crie uma função hasEqHeads(l1,l2) que verifique se as listas l1 e l2 possuem o mesmo primeiro elemento.
def hasEqHeads(l1,l2):
    if (l1[0] ==l2[0]):
        return True
#Escreva uma função que receba uma lista de nomes e retorne uma lista com a string "Sr. " adicionada ao início de cada nome. Defina uma função auxiliar para ajudar neste exercício.
def addSr(s):
    return "Sr." + s

def ex3(ls):
    return list(map(addSr,ls))

#Crie uma função que receba uma string e retorne o número de espaços nela contidos. Defina uma função auxiliar para ajudar neste exercício.
def sespaco(ls):
    return len(list(filter(lambda x:x == " ",ls)))

#Escreva uma função que, dada uma lista de números, calcule 3n*2 + 2/n + 1 para cada número n da lista. Defina uma função auxiliar para ajudar neste exercício.
def adddoida(ln):
    return list(map(lambda x: (3*x)*2 + 2/x + 1,ln))

#Escreva uma função que, dada uma lista de números, retorne uma lista com apenas os que forem negativos. Defina uma função auxiliar para ajudar neste exercício.
def numneg(ln):
    return list(filter(lambda x: x<0,ln))

#Escreva uma função que receba uma lista de números e retorne somente os que estiverem entre 1 e 100, inclusive. Defina uma função auxiliar para ajudar neste exercício.
def inbetween(ln):
    return list(filter(lambda x:x>0 and x<100, ln))

#Escreva uma função que receba uma lista de números e retorne somente aqueles que forem pares. Defina uma função auxiliar para ajudar neste exercício.
def numpar(ln):
    return list(filter(lambda x:x%2==0, ln))

#Crie uma função charFound(c,s) que verifique se o caracter c está contido na string. O resultado deve ser True ou False. Você não deve usar o operador in. Defina uma função auxiliar para ajudar neste exercício.
def charfound(c,s):
	x = len(s)
	if len(s)==1:
		return False
	elif c == s[x-1]:
		return True
	else:
		return charfound(c,s[0:x-1])


#Escreva uma função que receba uma lista de strings e retorne uma nova lista com adição de marcações HTML (p.ex.: <B> e </B>) antes e depois de cada string.
def dude(s):
    return list(map(lambda x:"<B>" + x + "</B>", s))

