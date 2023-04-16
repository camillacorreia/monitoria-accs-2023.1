#include <iostream>

using namespace std;

int main()
{
    int num_locais;
    int total_suprimentos = 0;

    cout << "Digite a quantidade de locais que Joel terá que vasculhar (entre 1 e 10): ";
    cin >> num_locais;

    for (int i = 1; i <= num_locais; i++)
    {
      cout << "Vasculhando o local " << i << endl;

      int suprimentos;
      cout << "Digite a quantidade de suprimentos encontrados: ";
      cin >> suprimentos;

      total_suprimentos += suprimentos;
      cout << "Total de suprimentos acumulados: " << total_suprimentos << endl;
    }

    cout << "Joel encontrou um total de " << total_suprimentos << " suprimentos!" << endl;

    return 0;
}
