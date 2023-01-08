# Kolokwium  

Napisz program, który będzie służył do wykonywania różnych operacji na pewnej tablicy znaków.  

W funkcji `main` powinna znajdować się zmienna `lokalna` `n` informująca, ile znaków znajduje się w tablicy.  

Sama tablica powinna być zadeklarowana dla `20` znaków i powinna być `globalna`.  

Głównym elementem funkcji `main` powinna być `nieskończona pętla`, w której za pomocą instrukcji `case/switch` program prosi użytkownika o wybranie znaku odpowiadającemu następnej akcji. 

 Jeśli użytkownik wybierze `e` program powinien zakończyć działanie.  

Jeśli użytkownik wybierze `w` program powinien wywołać funkcję typu `void` która wypisze elementy tablicy, lub zwróci komunikat błędu, jeśli `n==0`.  

Jeśli użytkownik wybierze `d` program powinien wywołać funkcję typu `void` która sprawdzi czy w tablicy jest miejsce na nowy element. Jeśli tak to program poprosi użytkownika o podanie liczby. Jeśli podana liczba odpowiada kodowi `ASCII` program powinien wstawić znak odpowiadający tej liczbie do tablicy, jeśli podana liczba nie odpowiada kodowi `ASCII` program powinien wyświetlić ostrzeżenie i zapytać czy wstawić znak odpowiadający kodowi `ASCII` reszty z dzielenia liczby przez `256`. 

Jeśli użytkownik wybierze `D` program powinien zachować się analogicznie jak dla opcji `d`. Tutaj zakładamy, że użytkownik może podać jeden dowolny zank, ale zakładamy, że zostanie on podany poprawnie. 

Jeśli użytkownik wybierze `u` program powinien poprosić o indeks elementu i wywołać funkcję `rekurencyjną` typu `void` która usunie go z tablicy oraz zmniejszy zmienną `n` o jeden, jednocześnie przesuwając pozostałe elementy tak, aby tablica po wywołaniu zawierała wszystkie pozostałe elementy znajdujące się na `n` pierwszych miejscach zachowując oryginalną kolejność.

Jeśli użytkownik wybierze `s` program powinien wywołać funkcję typu `int` która zwróci sumę kwadratów kodów `ASCII` znaków znajdujących się w tablicy, program główny powinien wypisać tę sumę na ekran. Jeśli funkcja zostanie wywołana dla kiedy tablica posiada `0` znaków funkcja powinna zwrócić liczbę, która pozwoli programowi głównemu zwrócić odpowiedni komunikat zamiast `Suma=0`. 

Jeśli użytkownik wybierze `t` program powinien wywołać funkcję typu `void` która poprosi użytkownika o podanie liczby kolumn, a następnie wypisze zawartość tablicy w tylu kolumnach. 

```
Przykład: 3 kolumny dla tablicy [a, b, c, d, e, f, g, h] 

a b c
d e f
g h
``` 

Jeśli użytkownik wybierze `T` program powinien wywołać funkcję typu `void` która działa analogicznie jak w przypadku `t`, ale podajemy liczbę wierszy, a wypisana tabela jest transponowana. 

```
Przykład: 3 wiersze dla tablicy [a, b, c, d, e, f, g, h] 

a d g 

b e h

c f 

```  

Jeśli użytkownik wybierze coś innego niż przewidziano w powyższych krokach program powinien poinformować go o błędnym wyborze i ponownie przedstawić dostępne opcje. 

 
