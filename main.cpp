#include <iostream>
#include <fstream>
#include <string>
#include "Sculptor.h"

int main() {
  //----EXEMPLO----//
  Sculptor exemplo(60, 60, 60);

  //VOXEL
  exemplo.setColor(1, 0, 1, 1);
  exemplo.putVoxel(5, 5, 5);

  
  //BLOCO DE VOXEL
  exemplo.setColor(1,1,0,1);
  exemplo.putBox(0, 7, 1, 7, 0, 7);
  exemplo.cutBox(4, 7, 4, 7, 0, 7);
  
  //ESFERA
  exemplo.setColor(0, 0, 1, 1);
  exemplo.putSphere(15, 15, 15, 7);
  exemplo.cutSphere(12, 15, 12, 5);
  
  //ELIPSOIDE
  exemplo.setColor(1, 0.58, 0.62, 1);
  exemplo.putEllipsoid(30, 15, 30, 7, 3, 10);
  exemplo.cutEllipsoid(30, 15, 25, 5, 2, 14);
  
  //ARQUIVO
  std::cout << "O EXEMPLO FOI CRIADO!" << std::endl;
  exemplo.writeOFF("exemplo.off");
  std::cout << "\n";
  
  //----ESCULTURA PLANETA TERRA----//
  Sculptor terra(30, 30, 30);

  //ESPACO
  terra.setColor(0, 0, 0, 1);
  terra.putBox(0, 30, 1, 30, 0, 1);

  terra.setColor(0, 0, 0, 1);
  terra.putBox(29, 30, 1, 30, 0, 30);

  terra.setColor(0, 0, 0, 1);
  terra.putBox(0, 1, 1, 30, 0, 30);

  terra.setColor(0, 0, 0, 1);
  terra.putBox(0, 30, 29, 30, 0, 30);

  terra.setColor(0, 0, 0, 1);
  terra.putBox(0, 30, 0, 1, 0, 30);

  //TERRA - AGUA
   terra.setColor(0, 0, 1,1);
   terra.putSphere(17,11,15,8);

  //POLO SUL
   
   terra.setColor(1, 1, 1, 1);
   terra.putEllipsoid(17,5, 15, 4, 2, 4);

  //POLO NORTE
   terra.setColor(1,1, 1, 1);
   terra.putEllipsoid(17, 15, 15, 6, 4, 5);

  //TERRA - TERRA
  terra.setColor(0, 1, 0, 1);
  terra.putEllipsoid(15, 11, 15, 6, 7, 6);
  
  terra.setColor(0, 1, 0, 1);
  terra.putEllipsoid(17, 11, 16, 6, 7, 7);

  terra.setColor(0, 1, 0, 1);
  terra.putEllipsoid(19, 11, 15, 6, 7, 5);

  //LUA
  terra.setColor(0.95, 0.95, 1, 1);
  terra.putSphere(4, 15, 15, 3);

  std::cout << "O ARQUIVO FOI CRIADO!" << std::endl;
  terra.writeOFF("terra.off");

}
