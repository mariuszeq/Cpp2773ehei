#include <iostream>
#include <string>

using namespace std;

class NarzedziaTekstowe {
public:
    static int liczSamogloski(string slowo) {
        if (slowo.length() == 0) {
            return 0;
        }

        int liczbaSamoglosek = 0;
        string samogloski = "aąeęiouóyAĄEĘIOUÓY";

        for (int i = 0; i < slowo.length(); i++) {
            for (int j = 0; j < samogloski.length(); j++) {
                if (slowo[i] == samogloski[j]) {
                    liczbaSamoglosek++;
                    break;
                }
            }
        }
        return liczbaSamoglosek;
    }

    static string usunPowtorzenia(string slowo) {
        if (slowo.length() == 0) {
            return "";
        }

        string wynik = "";
        wynik += slowo[0];

        for (int i = 1; i < slowo.length(); i++) {
            if (slowo[i] != slowo[i - 1]) {
                wynik += slowo[i];
            }
        }

        return wynik;
    }
};

int main() {
    string tekst;

    cout << "Podaj tekst: ";
    cin >> tekst;

    int liczbaSamoglosek = NarzedziaTekstowe::liczSamogloski(tekst);
    cout << "Liczba samoglosek w podanym tekscie: " << liczbaSamoglosek << endl;

    string wynik = NarzedziaTekstowe::usunPowtorzenia(tekst);
    cout << "Tekst po usunięciu powtorzen: " << wynik << endl;

    return 0;
}
