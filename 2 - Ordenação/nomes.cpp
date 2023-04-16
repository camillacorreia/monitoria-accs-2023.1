#include <iostream>
#include <string>

using namespace std;

int main()
{
  int qtd_nomes;
  cin >> qtd_nomes;

  string nomes_winx[qtd_nomes];

  // Pede ao usuário para digitar o nome de cada fada
  cout << "Digite o nome das fadas:" << endl;
  for (int i = 0; i < qtd_nomes; i++)
  {
    cout << "Winx " << i + 1 << ": ";
    getline(cin, nomes_winx[i]);
  }

  // Ordena os nomes em ordem alfabética usando o algoritmo de inserção
  for (int i = 1; i < qtd_nomes; i++)
  {
    string chave = nomes_winx[i];
    int j = i - 1;
    while (j >= 0 && nomes_winx[j] > chave)
    {
      nomes_winx[j + 1] = nomes_winx[j];
      j = j - 1;
    }
    nomes_winx[j + 1] = chave;
  }

  // Exibe os nomes em ordem alfabética
  cout << "As fadas em ordem alfabética são:" << endl;
  for (int i = 0; i < qtd_nomes; i++)
  {
    cout << nomes_winx[i] << endl;
  }

  return 0;
}
