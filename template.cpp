
#include <iostream> // #include è il comando che indica al computer di importare una libreria 
                    // una libreria è un insieme di definizioni che dai al computer per certi comandi
                    // iostream è una libreria utilizzata per input e output, infatti il nome iostream sta per "input output stream" (dall'inglese flusso di input e output)

using namespace std;    // using namespace std indica al computer che tutti i comandi appartengono alla libreria standard
                        // se non ci fosse questa linea tutti i seguenti comandi dovrebbero iniziare con std.
                        // [std sta anche per malattia sessualmente trasmissibile]

int main()  // int main() indica l'inizio del corpo principale del programma, int è il tipo di variabile che il programma restituisce alla fine della funzione
{           // main vuol dire principale in inglese 
            // è seguito da delle parentesi graffe che contengono il codice come tutte le funzioni
            // nel dichiarare una funzione non si mettono punti e virgola dopo le parentesi
            
    return 0;   // dice al programma di restituire una variabile con valore zero al completare la funzione
}


float x,y;  // float x,y è usato per dichiarare le variabili di tipo float x e y
            // una variabile float è un tipo di variabile che contiene un numero che può avere cifre decimali
            // si possono dichiarare più variabili in una linea di codice separandole con una virgola
            
cin>>x; // cin è utilizzato per prendere un input e mettere il contenuto dentro una variabile
        // le freccette partono da cin e vanno verso la variabile
        
if (x>=y)   // if è l'equivalente informatico di "se x allora y" con x che indica una condizione indicata nelle parentesi tonde e y che indica i comandi da svolgere contenuti dentro delle parentesi graffe
{           // alla mancanza delle parentesi graffe svolge la linea che viene subito dopo 

}

y=x;    // mettere un solo uguale serve a inserire qualcosa in una variabile
        // per vedere se due cose sono uguali bisogna mettere due uguali
        // si deve leggere sempre da destra verso sinistra

else    // il comando che indica cosa deve fare il programma in caso che la condizione di if sia falsa
{
    
}

endl // vai a capo, utilizzabile anche \n in mezzo ad un testo (endline, vuol dire vai a capo)

switch (x)  // esegue varii comandi in base al contenuto di x
{
    case '1':   // modo per scrivere le varie possibilità nello switch e cosa fare in caso ci fossero
    {
        break;  // dice al programma di smettere di leggere i case 
    }
    default:    // indica cosa fare al programma in caso che nessuno dei case sia vero (dall'inglese default vuol dire predefinito)
    {
        
    }
}

goto label;     // serve a tornare indietro ad una linea di codice etichettata con un label:
                // è utilizzato pochissimo perchè quando ce ne sono varii non si capisce mai niente

   do {     // dice al computer di fare quello che c'è in questa parentesi ma
   }  
   while ();    // solo mentre la condizione nelle parentesi tonde è vera
   
   