package t8;

import java.util.Random;


/**
 *
 * @author
 */
public class Bolacha{
    Forma f;
    int tipo;
    protected final int REDONDA = 0,
                        RETANGULAR = 1,
                        TRIANGULAR = 2;
    
    public Bolacha(Ponto p){
        Random r = new Random();
        tipo = r.nextInt(3);
        // System.out.format(" %d ", tipo);
        if (tipo == REDONDA){
            Circulo c = new Circulo(p, (r.nextInt(2)) + 1);
            f = (Forma) c;
        }
        if(tipo == RETANGULAR){
            Retangulo rt = new Retangulo(p, ((r.nextInt(6))+2) , ((r.nextInt(4))+6)); 
            f = (Forma) rt;
        }
        if(tipo == TRIANGULAR){
            Triangulo t = new Triangulo(p, ((r.nextInt(4))+4) , ((r.nextInt(6))+3) );
            f = (Forma) t;
        }
    }
    
    public float getarea(){
        return f.getArea();
    }
    
    public Ponto getPonto(){
        return f.getPonto();
    }
    
    public int getTipo(){
        return tipo;
    }
    
}  
