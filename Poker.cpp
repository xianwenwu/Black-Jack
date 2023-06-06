#include "poker.h"
#include<iostream>
#include<string>
int randNum[NUM]; //定義了randNum陣列來存放隨機數

Poker::Poker()
{
 poker[0] = 0;
 for (int i = 0; i <= 13; i++)
 {
  poker[i] = i;          //|用建構函式對牌初始化
  poker[i + 13] = i;
  poker[i + 26] = i;
  poker[i + 39] = i;
 }
 pValue[0] = 0;
 for (int i = 0; i <= 52; i++)
 {
  if (poker[i] <= 10)
   pValue[i] = poker[i];
  else
   pValue[i] = 10;
 }
 pName[0] = "";
 for (int i = 0; i < 4; i++)
 {
  pName[1 + 13 * i] = "A";
  pName[2 + 13 * i] = "2";
  pName[3 + 13 * i] = "3";
  pName[4 + 13 * i] = "4";
  pName[5 + 13 * i] = "5";
  pName[6 + 13 * i] = "6";
  pName[7 + 13 * i] = "7";
  pName[8 + 13 * i] = "8";
  pName[9 + 13 * i] = "9";
  pName[10 + 13 * i] = "10";
  pName[11 + 13 * i] = "J";
  pName[12 + 13 * i] = "Q";
  pName[13 + 13 * i] = "K";
 }


 for (int i = 0; i < 5; i++)
 {
  player[i] = 0;
  landlord[i] = 0;
 }

}
void Poker::shuffle()
{
  cout << "遊戲開始，開始洗牌>>>>>" << endl;
 srand((int)time(0));
 for (int i = 0; i < NUM; i++)
 {
  randNum[i] = rand() * 51 / 32767 + 1;
 }
 player[0] = randNum[j++];    //產生1-52的隨機數
 player[1] = randNum[j++];    //產生1-52的隨機數
 landlord[0] = randNum[j++];  //產生1-52的隨機數
 landlord[1] = randNum[j++];  //產生1-52的隨機數

 playerN = 2;
 landlordN = 2;

 cout << "洗牌結束,你的牌為:" << getPlayer() << "  點數:" << getSumP() << endl;
}
string Poker::getPlayer()const
{
 int i;
 string pp = "";

 for (i = 0; i < playerN; i++)
  pp = pp + pName[player[i]] + " ";

 return pp;
}
string Poker::getLandlord()const
{
 int i;
 string lp = "";

 for (i = 0; i < landlordN; i++)
  lp = lp + pName[landlord[i]] + " ";

 return lp;
}
int Poker::getSumP()const  
{
 
}
int Poker::getSumL()const 
{
 
}
void Poker::playerAsk()
{
 
}
void Poker::landlordAsk()
{
 
}

void Poker::newGame()
{

}
void Poker::landlordProcess()
{
 
}
