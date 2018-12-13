//te dwie linijki musicie już znać, więc nie będę je po raz kolejny tłumaczyć
#include <iostream>
using namespace std;
//tutaj jest lista (tzw array) - w niej będą zapisane wszystkie punkty planu dnia
string a[10] = {};
//tu jest funkcja na wpisanie punktów do listy
void planIn() {
  string b;
  for (int i; i<10; i++){
    cout << "Wpisz punkt numer " << i+1 <<": ";
    cin >> b;
    a[i] = b;
  }
}
//tu jest to samo, ale z naprawionymi spacjami; nie zwracajcie uwagi
void planIn2() {
  string b;
  for (int i; i<10; i++){
    cout << "Wpisz punkt numer " << i+1 <<": ";
    getline(cin, b);
    a[i] = b;
  }
}
//ta funkcja pyta się o numer punktu, po czym ten punkt wyświetla
void planOut() {
  int c;
  cout << "Wpisz numer punktu, który chcesz przeczytać: ";
  cin >> c;
  cout << "Punkt " << c <<": " << a[c-1] << "." << endl;
}
//int main(), czyli jak sama nazwa wskazuje to jest główna funkcja programu; ta, która jest początkiem programu. w nim na początku wywołujemy funkcję wpisania punktów, po czym funkcję wypisania punktów
int main() {
  planIn();
  //planIn2();
  
  while (1==1) {
    //while powtarza kod dopóki to, co jest w nawiasie jest prawdą. jako że 1 zawsze się równa 1, będzie się powtarzało nieszkończoność razy
    planOut();
  }
}
