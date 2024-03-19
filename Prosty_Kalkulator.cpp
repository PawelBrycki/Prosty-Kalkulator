#include <iostream>

class kalkulator{
private:
    float argument1;
    float argument2;
    float wynik;
    int operacja;

public:
    void ustaw_argument1()
    {
        std::cout <<"Podaj liczbe1: ";
        std::cin >> argument1;
    }

    void ustaw_argument2()
    {

        std::cout <<"Podaj liczbe2: ";
        std::cin >> argument2;
    }

    void wykonaj_dodawanie()
    {
        wynik = argument1 + argument2;
    }

    void wykonaj_odejmowanie()
    {
        wynik = argument1 - argument2;
    }

    bool wykonaj_dzielenie()
    {
        if (argument2 != 0) {
            wynik = argument1 / argument2;
            return true;
        } else {
            std::cout << "BLAD!! Nie dzielimy przez 0!" << std::endl;
            return false;
        }
    }

    void wykonaj_mnozenie()
    {
        wynik = argument1*argument2;
    }
    float podaj_wynik()
    {
        return wynik;
    }

    int ustaw_operacje();
};


int kalkulator::ustaw_operacje()
{
    std::cout << "Wybierz Operacje:" << std::endl;
    std::cout << " 1.Dodawanie  2.Odejmowanie  3.Dzielenie  4.Mnozenie" << std::endl;
    std::cout << "Podaj operacje jaka chcesz wykonac: ";
    std::cin >> operacja;
    return operacja;
}



int main()
{
    kalkulator test;

    std::cout << "Witaj, w kalkulatorze stworzonym przez Pawel Brycki" << std::endl;

    test.ustaw_argument1();
    test.ustaw_argument2();

    int wybrana_operacja = test.ustaw_operacje();


    if(wybrana_operacja == 1)
    {
        test.wykonaj_dodawanie();
        std::cout << "Wynik dodawania to: " << test.podaj_wynik() << std::endl;
    }
    else if(wybrana_operacja == 2)
    {
        test.wykonaj_odejmowanie();
        std::cout << "Wynik odejmowania to: " << test.podaj_wynik() << std::endl;
    }
    else if(wybrana_operacja == 3)
    {
        if(test.wykonaj_dzielenie())
        {
            std::cout << "Wynik dzielenia to: " << test.podaj_wynik() << std::endl;
        }
    }
    else if(wybrana_operacja == 4)
    {
        test.wykonaj_mnozenie();
        std::cout << "Wynik mnozenia to: " << test.podaj_wynik() << std::endl;
    }

    return 0;
}
