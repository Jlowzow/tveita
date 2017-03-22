//rom.h
//definerer klassen Rom

class Rom{
public:
	Rom(); //KonstruktÝr utan argument
	Rom(int defaultromnr,char defaultdekk);//KonstruktÝr med 2 argument
	void settRomnr(int NyttRomnr);
	void settDekk(char NyttDekk);
	int finnRomnr() const;
	char finnDekk() const;

private:
	int romnr;
	char dekk;
};


