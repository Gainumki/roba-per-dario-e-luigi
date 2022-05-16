// stessa cosa del programma del rettangolo

#include <iostream>//caricamento libreria per il passaggio dei dati in entrata e in uscita
using namespace std;//direttiva per l'uso dello spazio dei nomi standard

float r;//dichiarazione variabili in entrata
float A,C;//...e in uscita
float pigreco;//potrei anche importare una libreria che lo contiene ma penso vada bene anche approssimarlo

float errors;

int calc()
{
	pigreco = 3.14159;
    A=0;
    cin>>r;
    if(r<=0)
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
        A=r*r*pigreco;
        C=2*r*pigreco;
    }
}

int nonsocomechiamarequestafunzione()
{
	cout<<"PROGRAMMA PER LA MISURA DELL'AREA E DELLA CIRCONFERENZA DEL CERCHIO\n";
    cout<<"Inserire la misura del raggio\n";
    calc();
    if (not A==0)
    {
        cout<<"\nL'area vale "<<A<<endl;
        cout<<"\nLa circonferenza vale "<<C<<endl;
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
