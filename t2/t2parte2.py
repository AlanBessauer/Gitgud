import itertools
import random
from random import randrange

'''
   Programacao funcional para gerar SVG:
   - gera uma lista de coordenadas de retangulos
   - define uma lista de estilos (cores), em qualquer quantidade
   - aplica os estilos aos retangulos, gerando uma lista com todos os dados para o SVG
   - coloca os dados no formato SVG, concatenando strings
'''

def svgRect(rs):
   (((x,y),w,h),style) = rs
   return "<rect x='%.3f' y='%.3f' width='%.2f' height='%.2f' style='%s'/>\n" % (x,y,w,h,style)

def svgImage(w, h, rs):
   return "<svg width='%.2f' height='%.2f' xmlns='http://www.w3.org/2000/svg'>\n" % (w,h) + \
          ''.join(map(svgRect, rs)) + "</svg>"

def applyStyles(rects, styles):
   return list(zip(rects, itertools.cycle(styles)))

# TODO: modifique essa funcao para gerar mais retangulos
def genRects(n, w, h):
   return [((n,0),w,h)for n in range(0,500,50)]

def writeFile(fname, contents):
   f = open(fname, 'w')
   f.write(contents)
   f.close()

def stylish(n):
    return["fill:rgb({},{},{})".format(randrange(0, 255),randrange(0, 255),randrange(0, 255)) for n in range(n)]

    
def main():
   maxWidth = 1000
   maxHeight = 100
   rects = genRects(10,50,50)
   n = int(input(),10)
   styles = stylish(n)
   rectstyles = applyStyles(rects, styles)
   writeFile("mycolors.svg", svgImage(maxWidth, maxHeight, rectstyles))
   

if __name__ == '__main__':
   main()
