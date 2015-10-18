/* 
 * File:   main.cpp
 * Author: Owner
 *
 * Created on April 11, 2015, 6:53 PM
 */

#include <cstdlib>
#include <iostream>


using namespace std;

//float getquotient(float div , float visor ){
//   
//     if (visor == 0){
//        cout << "YOU CAN FUCK RIGHT OFF \n";
//    }
//     
//    return div / visor;
//   
//   
//}
//
//
//float getproduct(float can ,float plier){
//    
//    return can * plier;
//}
//
//float getdifference(float poo, float choo){
//    
//    return poo - choo;
//}
//
//
//float getsum(float hot ,float dam){
//    
//  
//      return hot + dam; 
//    
//}
//
//
//void hello(){
// 
//    cout << "HELLO WORLD" << "\n;
//}
  
//void hello(int z){
//    for (int x=0; x<z; x++){
//    
//        cout<< "HELLO WORLD\n";
//    }
//    if (z == 0){
//        cout<< "PAAPOOF!\n";
//    }
//    else if (z < 0){
//        cout<< "THAT'S A NEGATIVE!\n";
//    }
//}

void change(){
    
    cout << "WHERE MY CHANGE AT?!";
}
        
void change(int pennies){
    
  if (pennies <= 0){
  cout<< "No money";    
   } 
  
  if (pennies >= 25 && pennies <= 99 ){
      cout<< "A Quarter\n";
  }
       
  if (pennies >= 10 && pennies <= 24 ){
      cout<< "A Dime\n";
  }
      
  if (pennies >= 5 && pennies <= 9){
      cout<< "A Nickel\n";
  }
  
  if (pennies >= 1 && pennies <= 4){
      cout<< "A Penny\n";
  }
    
  else if (pennies > 99){
      cout<< "A DOLLAR\n";
    }

  
}

void real_change(int change){
    int remainder = change;
    cout<< "Here's your change for " << change << " cents\n";
    do{
        if (remainder >= 25){
            remainder = remainder - 25;
            cout<< "Here, have a quarter\n";
        }

        if (remainder < 25 && remainder >= 10){
            remainder = remainder - 10;
            cout<< "Here, have a dime\n";
        }

        if (remainder < 10 && remainder >= 5){
            remainder = remainder - 5;
            cout<< "Here, have a nickel\n";
        }

        if (remainder < 5 && remainder > 0){
            remainder = remainder - 1;
            cout<< "Here, have a penny\n";
        }
        
    }
    while(remainder > 0);
    
    
    
    
    
}


int main(int argc, char** argv) 
{
  
//    hello();
//    
//   
//    int b = 9;
//    int c = 8;
//    float f = getsum(20.5, 10.4);
//    
//    
//    
//    cout << f << "\n"<< getsum(50, 40)<< "\n";
//    
//    
//    cout << getdifference(10.6, 10)<< "\n";
//    
//    
//    cout << getproduct(5.6, 8.1)<< "\n";
//    
//    
//    cout << getproduct(getsum(60.2,40), getdifference(70.5, 30)) << "\n";
//    
//    
//    cout << getquotient(2,0)<< "\n";
//    
//    float n = getsum(5, 0);
//    
//    if (n > 10)
//    {
//        cout<< " THAT'S A BIG NUMBER!\n";
//    }
//    else if (n > 5)
//    {
//        cout<< "THAT SHIT IS GREATER THAN FIVE";
//    }
//    else 
//    { 
//        cout<< " OH...\n";
//    }
//    
//    for (int x = 0; x<10; x++)
//    {
//       cout<< x << "\n"; 
//       
//       for (int y = 0; y<x; y=y+2)
//       {
//           cout<< "THE VALUE OF Y IS "<< y << "\n";
//       }
//    }
//    int i = 5;
//    while (i < 5)
//    {
//        cout<< i << "\n";
//        i++;
//    }
//    int o = 4;
//    do
//    {
//        cout<< o << "\n";
//        o++;
//    }
//    while(o < 4);
    
//    hello(-1);
    
    
    real_change(77);
    real_change(5);
    real_change(15);
    real_change(30);
    real_change(-3);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}

