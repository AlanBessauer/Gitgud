def addsufix(x,s):
   return [s+x for w in s]

def countshort(w):
   return len([w for w in w if len(w)<5])

def stripVowels(str):
    return[str for str in str if not str in 'aeiouAEIOU']

def hideChars(s):
    return"".join(['-' if not c==' ' else c for c in s])

def gentable(x):
     return [(n,n*n) for n in range(1,x)]

def func(ls):
    return "".join([s[0]+s[-1]for s in ls])



