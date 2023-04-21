/*
Esse programa vai permitir que o user jogue Pedra, Papel, Tesoura, Lagarto, Spock
*/
#include <iostream>
#include <stdlib.h>

int main(){
  //Para gerar numeros aleatorios e eles continuarem alternando
  srand(time(NULL));
  //Faz com que o numero aleatorio gerado sempre seja 1, 2 ou 3
  int computer = rand() % 4 + 1;//pega o numero gerado divide por 4, fazendo com que o resto so possa ser 0, 1, 2, 3 e 4 e ai que adicionamos o +1, ele faz com que nunca tenhamos o 0 e possamos ter o 5
  //Variavel que vai receber o input do user com a escolha
  int user = 0;
  //Introducao
  std::cout << "=================================\n";
  std::cout << "rock paper scissors lizard spock!\n";
  std::cout << "=================================\n";
  //Opcoes pro user jogar
  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  std::cout << "4) 🦎\n";
  std::cout << "5) 🖖\n";

  std::cout << "shoot! ";
  //Input para inserir a escolha e guarda-la na variavel user
  std::cin >> user;
  //Variaveis que dirao ao programa o que o valor inserido pelo user significa, e o que o valor gerado por ele significa
  int r = 1;
  int p = 2;
  int sc = 3;
  int l = 4;
  int sp = 5;
  //Aqui mostrara para o user a jogada da maquina
  std::cout << "computer: " << computer << "\n";
  //Aqui sao as possibilidades do jogo, onde e definido quem ganhou. So foram colocadas as possibilidades de ganho do user pois td o resto e derrota entao se encaixam no else
  if (user == r && computer == sc){
    std::cout << "you win!\n";
  }
  else if (user == r && computer == l){
    std::cout << "you win!\n";
  }
  else if (user == p && computer == r){
    std::cout << "you win!\n";
  }
  else if (user == p && computer == sp){
    std::cout << "you win!\n";
  }
  else if (user == sc && computer == p){
    std::cout << "you win!\n";
  }
  else if (user == sc && computer == l){
    std::cout << "you win!\n";
  }
  else if (user == l && computer == p){
    std::cout << "you win!\n";
  }
  else if (user == l && computer == sp){
    std::cout << "you win!\n";
  }
  else if (user == sp && computer == r){
    std::cout << "you win!\n";
  }
  else if (user == sp && computer == sc){
    std::cout << "you win!\n";
  }
  else if (user == computer){
    std::cout << "draw!\n";
  }
  else {
    std::cout << "you lose!\n";
  }

}