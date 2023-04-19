#include <iostream>

int main (){
  //Variables with the points for each house
  int g = 0;
  int h = 0;
  int r = 0;
  int s = 0;
  //Variables that will receive the answers
  int a1;
  int a2;
  int a3;
  int a4;
  //Variable that will take the max and help decide which house was sorted
  int max = 0;
  //Introduction
  std::cout << "=====================\n";
  std::cout << "The Sorting Hat Quiz!\n";
  std::cout << "=====================\n";
  //First question
  std::cout << "Q1) When I'm dead, I want people to remember me as:\n";
  std::cout << "1) The Good\n";
  std::cout << "2) The Great\n";
  std::cout << "3) The Wise\n";
  std::cout << "4) The Bold\n";
  //Recieve the first answer
  std::cin >> a1;
  //Distribute the points for each house based on the first answer
  switch (a1){
    case 1:
      h += 1;
      break;
    case 2:
      s += 1;
      break;
    case 3:
      r += 1;
      break;
    case 4:
      g += 1;
      break;
    default:
      std::cout << "Invalid Output.\n";//If the input was not one of the possible answers will output this
  }
  //Second question
  std::cout << "Q2) Dawn or Dusk?\n";
  std::cout << "1) Dawn\n";
  std::cout << "2) Dusk\n";
  //Recieve the second answer
  std::cin >> a2;
  //Distribute the points for each house based on the second answer
  switch (a2){
    case 1:
      g += 1;
      r += 1;
      break;
    case 2:
      s += 1;
      h += 1;
      break;
    default:
      std::cout << "Invalid Output.\n";//If the input was not one of the possible answers will output this
  }
   //Third question
  std::cout << "Q3) Which kind of instrument most pleases your ear?\n";
  std::cout << "1) The violin\n";
  std::cout << "2) The trumpet\n";
  std::cout << "3) The piano\n";
  std::cout << "4) The drum\n";
  //Recieve the third answer
  std::cin >> a3;
  //Distribute the points for each house based on the third answer
  switch (a3){
    case 1:
      s += 1;
      break;
    case 2:
      h += 1;
      break;
    case 3:
      r += 1;
      break;
    case 4:
      g += 1;
      break;
    default:
      std::cout << "Invalid Output.\n";//If the input was not one of the possible answers will output this
  }
  //Fouth question
  std::cout << "Q4) Which road tempts you the most?\n";
  std::cout << "1) The wide, sunny grassy lane\n";
  std::cout << "2) The narrow, dark, lantern-lit alley\n";
  std::cout << "3) The twisting, leaf-stewn path through woods\n";
  std::cout << "4) The cobbled street lined (ancient buildings)\n";
  //Recieve the fourth answer
  std::cin >> a4;
  //Distribute the points for each house based on the first answer
  switch (a4){
    case 1:
      h += 1;
      break;
    case 2:
      s += 1;
      break;
    case 3:
      g += 1;
      break;
    case 4:
      r += 1;
      break;
    default:
      std::cout << "Invalid Output.\n";//If the input was not one of the possible answer will output this
  }
  //String that will output the sorted house
  std::string house;
  //Now the program will see which house has more points
  if (g > max){
    max = g;
    house = "Gryffindor";
  }
  if (h > max){
    max = h;
    house = "Hufflepuff";
  }
  if (r > max){
    max = r;
    house = "Ravenclaw";
  }
  if (s > max){
    max = s;
    house = "Slytherin";
  }
  std::cout << house << "!\n";

}