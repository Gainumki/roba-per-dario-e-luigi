#include <iostream>//caricamento libreria per il passaggio dei dati in entrata e in uscita
using namespace std;//direttiva per l'uso dello spazio dei nomi standard

float b,B,h;//dichiarazione variabili in entrata
float A;//...e in uscita
float errors; //il numero degli errori

int calc() //Funzione di calcolo
{
    A=0;
    cin>>b;
    cin>>B;
    cin>>h;
    if(b<=0 or B<=0 or h<=0)
    {
        errors  = errors + 1;
        if(errors <= 1) // Verifica che il programma non stia continuando a bloccarsi
        {
            cout<<"\nDati non corretti, inserire misure positive\n";
            calc();	
        } 
        else 
        {
            if(errors <= 2)
            {
                cout<<"\nDati non corretti.\n";
                calc();	
            }
            else
            {
                    cout<<"\nSi e' verificato un errore nel calcolo dell'area.\n";
                    return 0;	
			}
        }
    }
    else
    {
        A=(b+B)*h/2;
    }
}

int nonsocomechiamarequestafunzione() // Titolo, riavvio
{
	errors = 0;
	cout<<"PROGRAMMA PER LA MISURA DELL'AREA DEL TRAPEZIO\n";
    cout<<"Inserire le misure delle basi e dell'altezza\n";
    calc();
    if (not A==0)
    {
        cout<<"\nL'area vale "<<A<<endl;
        char scelta;
        cout<<"\nSi desidera riavviare? [Y/N]\n";
        cin>>scelta;
        if(scelta=='y' or scelta=='Y')
		{
			cout<<endl;
		    nonsocomechiamarequestafunzione();	
	    }
    }
}

int main()//dichiarazione del corpo principale del programma
{
    nonsocomechiamarequestafunzione();
    cout<<"\nIn uscita...";
    return 0;
}
