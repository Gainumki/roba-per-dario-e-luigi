// mi scusi se ho riciclato il codice ma la funzione svolta è quasi la stessa e non vedevo il punto di riscrivere il programma da zero

#include <iostream>//caricamento libreria per il passaggio dei dati in entrata e in uscita
using namespace std;//direttiva per l'uso dello spazio dei nomi standard

float b,h;//dichiarazione variabili in entrata
float A,P;//...e in uscita
float errors;

int calc()
{
    A=0;
    cin>>b;
    cin>>h;
    if(b<=0 or h<=0)
    {
        errors  = errors + 1;
        if(errors <= 1)
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
        A=b*h;
        P=2*b+2*h;
    }
}

int nonsocomechiamarequestafunzione()
{
	cout<<"PROGRAMMA PER LA MISURA DELL'AREA E DEL PERIMETRO DEL RETTANGOLO\n";
    cout<<"Inserire le misure della base e dell'altezza\n";
    calc();
    if (not A==0)
    {
        cout<<"\nL'area vale "<<A<<endl;
        cout<<"\nIl perimetro vale "<<P<<endl;
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
    errors = 0;
    nonsocomechiamarequestafunzione();
    cout<<"\nIn uscita...";
    return 0;
}
