#include "broek.cpp"
#include <iostream>


const int n=5;
//Definering av template:

template <class Type1> class Busk1
{
public:
	void sort();
	Type1 tabell[n];  //public tabell tilgjengeleg direkte i aplikasjon
private:
	void byttom(Type1 &a, Type1 &b);
};

//-------Implementering av funksjonar i template----------
template <class Type1> void Busk1<Type1>::sort()
{
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(tabell[i]<tabell[j])
				byttom(tabell[i], tabell[j]);
}

template <class Type1> void Busk1<Type1>::byttom(Type1 &a, Type1 &b)
{
	Type1 hjelp=a;
	a=b;
	b=hjelp;
}

//-------HovedProg--------
void main()
{
	Broek B;
	int teller, nevner;

	Busk1<Broek> reknmedbroek;

	cout<<"Skriv inn 5 broeker: ";
	for(int i=0;i<n;i++)
	{
		cin>>teller>>nevner;
		B.settBroek(teller,nevner);
		reknmedbroek.tabell[i]=B;
	}
	reknmedbroek.sort();
	cout<<"Sorteringen er: "<<endl;
	for(int i=0;i<n;i++)
	{
		B=reknmedbroek.tabell[i];
		cout<<B.finnTeller()<<"/"<<B.finnNevner()<<" ";
	}
	system ("pause");
}

//Oppg�ve: Bruk template Busk1 til � sortere ein tabell med komplekse tal.
//Du m� d� ha ein operator <  som f.eks. betyr mindre modulus.
//Lagre programmet i ein kaalog der klassen Kompleks er definert og implementert