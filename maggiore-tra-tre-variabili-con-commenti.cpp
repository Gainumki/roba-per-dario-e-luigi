
#include <iostream> // #include è il comando che indica al computer di importare una libreria 
                    // una libreria è un insieme di definizioni che dai al computer per certi comandi
                    // iostream è una libreria utilizzata per input e output, infatti il nome iostream sta per "input output stream" (dall'inglese flusso di input e output)

using namespace std;    // using namespace std indica al computer che tutti i comandi appartengono alla libreria standard
                        // se non ci fosse questa linea tutti i seguenti comandi dovrebbero iniziare con std.
                        // [std sta anche per malattia sessualmente trasmissibile]

int main()  // int main() indica l'inizio del corpo principale del programma, int è il tipo di variabile che il programma restituisce alla fine della funzione
            // main vuol dire principale in inglese 
{
    float x,y;  // float x,y è usato per dichiarare le variabili di tipo float x e y, che sono utilizzate come i due spazi di memoria dedicati ai 3 numeri di cui si deve trovare il maggiore
                // una variabile float è un tipo di variabile che contiene un numero che può avere cifre decimali

    cin>>x;  // cin è utilizzato per prendere un input e mettere il contenuto dentro una variabile
             // le freccette partono da cin e vanno verso la variabile
    cin>>y;  // guarda la descrizione di cin>>x
    
    if (x>=y) // if è l'equivalente informatico di "se x allora y", in questo caso è utilizzato per vedere se x è maggiore o uguale a y
    
        y=x;  // mettere un solo uguale serve a inserire qualcosa in una variabile
              // per vedere se due cose sono uguali bisogna mettere due uguali

    cin>>x;  // questo input verso x serve a scrivere la nostra terza variabile sulla variabile minore
    
    if (x>=y)  // se x è maggiore o uguale a y allora lascia una riga e scrivi la variabile x
        cout<<endl<<x;
    else       // altrimenti lascia una riga e scrivi la variabile y
        cout<<endl<<y;
    return 0;  // dice al programma di restituire una variabile con valore zero
}
 