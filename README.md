# Vector

### Napisz klasę Vector implementującą wektor n-elementowy współrzędnych rzeczywistych. Klasa powinna zawierać następujące pola:

 * int n; // liczba elementów wektora
 * double* elem; // tablica współrzędnych wektora

### Zaimplementuj następujące funkcje składowe:

 * Vector(); // konstruktor pustego wektora (zawiera 0 elementów)
 * Vector(int n); // konstruktor tworzący wektor n-elementowy
 * Vector(const Vector&); // konstruktor kopiujący
 * Vector& operator=(const Vector&); // operator podstawienia
 * ~Vector(); // destruktor
 * double& at(int); // dostęp do elementu wektora ze sprawdzeniem poprawności indeksu
 * double& operator[](int); // nie sprawdza poprawności indeksu
 * size_t size() const; // zwraca liczbę elementów wektora
 * Vector operator+=(const Vector& v); // operator += (dodaj wektor v do bieżącego wektora)
 * Vector operator*=(double d); // operator *= (pomnóż bieżący wektor przez d)
### oraz funkcje zewnętrzne:

 * Vector operator+(const Vector& v1, const Vector& v2); // suma v1 + v2
 * double operator*(const Vector& v1, const Vector& v2); // iloczyn skalarny v1 i v2
 
### Funkcja main() powinna testować działanie wszystkich wymienionych wyżej funkcji.