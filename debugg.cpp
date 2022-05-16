#include<iostream>
using namespace std;
int main()
{
cout<<"Programma per il calcolo della circonferenza e dell'area del cerchio\n";
cout<<"Cosa si desidera calcolare? Digitare 1 per la circonferenza o 2 per l'area\n";
tryagain:
char scelta;
cin>>scelta;
switch (scelta)
{case '1':
  { float r,d;
    do {
        cout<<"Inserire il raggio (positivo) per il calcolo della circonferenza\n";  
    cin>>r;} while (r<=0);
      d=2*3.14*r;
      cout<<"La misura della circonferenza e'\n";
      cout<<d;
      break;
}
case '2':
{ float x,y;
   do {
   cout<<"Inserire il raggio (positivo) per il calcolo dell'area del cerchio\n";
   cin>>x;} while (x<=0);
   y=(x*x)*3.14;
cout<<"Il risultato e' ";
cout<<y<<endl;
break;}

default:{ cout<<"Digitare 1 per la circonferenza o 2 per l'area\n";
        goto tryagain;        break;
}
}
cout<<"\nSi desidera riavviare[y/n]?\n";
char scelta2;
cin>>scelta2;
cout<<endl;
switch(scelta2)
{ case 'y': {cout<<"Digitare 1 per la circonferenza o 2 per l'area\n";
goto tryagain;}
case 'n':{cout<<"Grazie per aver utilizzato il programma\n";
          exit(0);}
}
return 0;
}
