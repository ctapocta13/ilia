/*
#include <iostream>
using namespace std;
int kozar;
int x,y;
int redcarts=0;
int bluecarts=0;
int bubn6=6,bubn7=7,bubn8=8,bubn9=9,bubn10=10,bubnValet=11,bubnDama=12,bubnKorol=13;
int cherv6=6, cherv7=7, cherv8=8, cherv9=9, cherv10=10, chervValet=11, chervDama=12, chervKorol=13;
int piki6=6, piki7=7, piki8=8, piki9=9, piki10=10, pikiValet=11, pikiDama=12,pikiKorol=13;
int tref6=6, tref7=7, tref8=8, tref9=9, tref10=10, trefValet=11, trefDama=12, trefKorol=13;
class bubn{
    public:
        void bubnbit
        {
            if(cartaAtaka>500 or )
        }
}
int kozr(int min,int max)
{
    srand(time(NULL));
    kozar=min+rand()%(max-min+1);
    return kozar;
    
}
int meshanina1(int min1,int max1)
{
    x=min1+rand()%(max1-min1+1);
    return x;
}
int meshanina2(int min2,int max2)
{
    y=min2+rand()%(max2-min2+1);
    return y;
}
int main()
{
 cout<<"Здравствуйте,игроки! Эта игра расчитана на 2 человек, к которым игра будет вдальнейшем обращаться как к RedPlayer (красный игрок) и BluePlayer (синий игрок),разделитесь и узнайте, кто же из вас дурак!"<<endl;
 kozr(1,4);
 int p=kozar;
 switch(p) {
     case 1:
         cout<<"В этой партии козари-Бубны!"<<endl;
         bubn6+=1000;
         bubn7+=1000;
         bubn8+=1000;
         bubn9+=1000;
         bubn10+=1000;
         bubnValet+=1000;
         bubnDama+=1000;
         bubnKorol+=1000;
         break;
     case 2:
         cout<<"В этой партии козари-Червы!"<<endl;
         cherv6+=1000;
         cherv7+=1000;
         cherv8+=1000;
         cherv9+=1000;
         cherv10+=1000;
         chervValet+=1000;
         chervDama+=1000;
         chervKorol+=1000;
         break;
     case 3:
         cout<<"В этой партии козари-Пики!"<<endl;
         piki6+=1000;
         piki7+=1000;
         piki8+=1000;
         piki9+=1000;
         piki10+=1000;
         pikiValet+=1000;
         pikiDama+=1000;
         pikiKorol+=1000;
         break;
     case 4:
         cout<<"В этой партии козари-Трефы!"<<endl;
         tref6+=1000;
         tref7+=1000;
         tref8+=1000;
         tref9+=1000;
         tref10+=1000;
         trefValet+=1000;
         trefDama+=1000;
         trefKorol+=1000;
         break;
}
 int koloda[8][4] = { { bubn6,cherv6,piki6,tref6},{bubn7,cherv7,piki7,tref7},{bubn8,cherv8,piki8,tref8},{bubn9,cherv9,piki9,tref9},{bubn10,cherv10,piki10,tref10},{bubnValet,chervValet,pikiValet,trefValet},{bubnDama,chervDama,pikiDama,trefDama},{bubnKorol,chervKorol,pikiKorol,trefKorol}};
 int BluePlayer[100] = {};
 int RedPlayer[100] = {};
 int sbros[40] = {};
 while (redcarts<6){
     meshanina1(0,8);
     meshanina2(0,4);
     if(koloda[x][y]>=1){
         RedPlayer[redcarts]=koloda[x][y];
         koloda[x][y]=0;
         int pr=RedPlayer[redcarts];
         cout<<pr<<",";
         redcarts+=1;
     } 
 }
 return 0;
}*/