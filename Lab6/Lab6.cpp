#include <iostream>

using namespace std;

void zadanie1() {
    int n;
    int nLicznik = 0;
    cout << "Podaj n: ";
        cin >> n;
    cout << endl;
    for (int i = 5; i<=n; i++) {
        if (i%5==0 and i%3!=0) {
            nLicznik++;
        }
    }
    cout << "Liczb naturalnych podzielnych p. 5 i niepodzielnych p. 3 jest " << nLicznik <<endl;
}

void zadanie2() {

    struct uczen {
        string imie,nazwisko;
        int inf,mat,bio,pol;
    };

    uczen uczen1,uczen2,uczen3,uczen4,uczen5,uczen6;
    cout << "Podaj imie ucznia 1 : ";
        cin >> uczen1.imie;
    cout << "Podaj nazwisko ucznia 1 : ";
        cin >> uczen1.nazwisko;
    cout << "Podaj ocene z informatyki ucznia 1 : ";
        cin >> uczen1.inf;
    cout << "Podaj ocene z matematyki ucznia 1 : ";
        cin >> uczen1.mat;
    cout << "Podaj ocene z biologii ucznia 1 : ";
        cin >> uczen1.bio;
    cout << "Podaj ocene z j. polskiego ucznia 1 : ";
        cin >> uczen1.pol;

    cout << "Podaj imie ucznia 2 : ";
        cin >> uczen2.imie;
    cout << "Podaj nazwisko ucznia 2 : ";
        cin >> uczen2.nazwisko;
    cout << "Podaj ocene z informatyki ucznia 2 : ";
        cin >> uczen2.inf;
    cout << "Podaj ocene z matematyki ucznia 2 : ";
        cin >> uczen2.mat;
    cout << "Podaj ocene z biologii ucznia 2 : ";
        cin >> uczen2.bio;
    cout << "Podaj ocene z j. polskiego ucznia 2 : ";
        cin >> uczen2.pol;

    cout << "Podaj imie ucznia 3 : ";
        cin >> uczen3.imie;
    cout << "Podaj nazwisko ucznia 3 : ";
        cin >> uczen3.nazwisko;
    cout << "Podaj ocene z informatyki ucznia 3 : ";
        cin >> uczen3.inf;
    cout << "Podaj ocene z matematyki ucznia 3 : ";
        cin >> uczen3.mat;
    cout << "Podaj ocene z biologii ucznia 3 : ";
        cin >> uczen3.bio;
    cout << "Podaj ocene z j. polskiego ucznia 3 : ";
        cin >> uczen3.pol;

    cout << "Podaj imie ucznia 4 : ";
        cin >> uczen4.imie;
    cout << "Podaj nazwisko ucznia 4 : ";
        cin >> uczen4.nazwisko;
    cout << "Podaj ocene z informatyki ucznia 4 : ";
        cin >> uczen4.inf;
    cout << "Podaj ocene z matematyki ucznia 4 : ";
        cin >> uczen4.mat;
    cout << "Podaj ocene z biologii ucznia 4 : ";
        cin >> uczen4.bio;
    cout << "Podaj ocene z j. polskiego ucznia 4 : ";
        cin >> uczen4.pol;
    
    int nIdx,nMat,nInf,nBio,nPol;
    string sImie,sNazw;
    cout << "Podaj indeks ucznia ktorego ucznia sprawdzamy (1-4)" << endl;
        cin >> nIdx;
    switch (nIdx)
    {
    case 1:
        sImie = uczen1.imie;
        sNazw = uczen1.nazwisko;
        nInf =  uczen1.inf;
        nMat =  uczen1.mat;
        nBio =  uczen1.bio;
        nPol =  uczen1.pol;
    case 2:
        sImie = uczen2.imie;
        sNazw = uczen2.nazwisko;
        nInf =  uczen2.inf;
        nMat =  uczen2.mat;
        nBio =  uczen2.bio;
        nPol =  uczen2.pol;
    case 3:
        sImie = uczen3.imie;
        sNazw = uczen3.nazwisko;
        nInf =  uczen3.inf;
        nMat =  uczen3.mat;
        nBio =  uczen3.bio;
        nPol =  uczen3.pol;
    case 4:
        sImie = uczen4.imie;
        sNazw = uczen4.nazwisko;
        nInf =  uczen4.inf;
        nMat =  uczen4.mat;
        nBio =  uczen4.bio;
        nPol =  uczen4.pol;
    default:
        break;
    }

    cout << sImie << ' ' << sNazw << endl;
    cout << "Informatyka: " << nInf << endl;
    cout << "Matematyka: " << nMat << endl;
    cout << "Biologia: " << nBio << endl;
    cout << "J. polski: " << nPol << endl;
    cout << endl;
}

void zadanie3() {

};

void zadanie4() {
    int n;
    string sNapis;
    cout << "Wpisz poczatkowy ciag znakow: ";
        cin >> sNapis;
    cout <<endl;
    cout << "Podaj ile razy dodajemy cos do napisu: ";
        cin >> n;
    cout << endl;
    cout << "Podaj po kolei ciagi znakow do dopisania: " << endl;
    for (int i = 0; i < n; i++) {
        string sWczyt;
        cin >> sWczyt;
        sNapis += sWczyt;
    }
    cout << endl << sNapis << endl;
}

int main()
{
    zadanie1();
    zadanie2();
    zadanie4();

    return 0;
}
