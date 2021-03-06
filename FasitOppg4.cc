//Elevklasse_medPeikar.cc
//Alle objekter i det frie minne
#include <iostream>
#include <string>
#include "elevklasse_med_tabellar.cc"

using namespace std;

elev LagKadett();
void SkrivUt(elev *Kadetten);

void main(void)
{
	elev *Kadett=new elev;
	*Kadett=LagKadett();//returnerer ein elev 
	SkrivUt(Kadett); //Adresseoverf�ring, opererer p� det frie minnet
	delete Kadett;
}
elev LagKadett()
{
	elev *Kadetten=new elev;
	string Fnamn;
	double Karaktertabellen[3];
	int alder;
	cout<<"Oppgi fornamn: (eitt ord) og alder";
	cin>>Fnamn>>alder;
	Kadetten->SettNavn(Fnamn);  //Berre fornamn
	Kadetten->SettAlder(alder);
	for(int i=0;i<3;i++){
		cout<<"Oppgi karakter: "<<i+1<<":";
		cin>>Karaktertabellen[i];
	}
	Kadetten->SettKarakterar(Karaktertabellen);

	return *Kadetten;
	
}

void SkrivUt(elev *Kadetten)
{
	//Kadetten peikar p� det frie minnet der Kadett i main() peikar
	cout<< Kadetten->FinnNavn()<<" "<<" er "<<Kadetten->FinnAlder()<<" �r gamal"<<endl;
	double Ktab[3];
	Kadetten->FinnKarakterar(Ktab);
	for(int i=0;i<3;i++)
		cout<<"Karakter i fag: "<<i+1<<":"<<Ktab[i]<<endl;
		
}


/*
Oppg�ve 3
Lag ein klasse trekant og eit testprogram 
Testprogrammet skal ha 3 funksjonar: Nullstill(), Lag(), SkrivUt();

Oppg�ve 4
Lag klassen punkt og eit testprogram
Testprogrammet skal ha 3 funksjonar: Nullstill(), Lag(), SkrivUt();

Oppg�ve 5
Lag klassen kompleks og eit testprogram.
Testprogrammet skal ha 3 funksjonar: Nullstill(), Lag(), SkrivUt();

Oppg�ve 6
Lag ein ny klasse trekant der dei private dataene er side[0],side[1] og side[2] som
utgjer ein tabell double side[3].
Settfunksjonen skal leggja inn tabellen og Finnfunksjonen skal hente ut heile tabellen.
Arealfunksjonen skal bruke Herons formel til � rekne ut arealet.
Lag eit testprogram for � lage eit objekt Mintrekant og for utskrift av sidene og areal.


*/