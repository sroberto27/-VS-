
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
using namespace std;//quitar
  COORD coord={0,0}; // this is global variable
                                    //center of axis is set to the top left cornor of the screen
 void gotoxy(int x,int y)
 {
   coord.X=x;
 coord.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }
 void portada(){
 cout<<"\n __**_**\n _**___**\n _**___**_________****\n _**___**_______**___****\n _**__**_______*___**___**\n __**__*______*__**__***__**     Creador: Roberto Salazar\n ___**__*____*__**_____**__*      Lider en Programacion\n ____**_**__**_**________**\n ____**___**__**\n ___*___________*\n __*_____________*\n _*____0_____0____*\n _*_______@_______*\n _*_______________*\n ___*_____U_____*\n _____**_____*\n";
cout<<"\n\n    ****             ****   ****     ****          "<<endl;
    cout<<"    ****              ***   ***     *              "<<endl;
    cout<<" **********            **   **       ****        **********  "<<endl;
    cout<<" **********              ***             *       **********"<<endl;
    cout<<"    ****                  *         *****                    "<<endl;
    cout<<"    ****                                                    "<<endl;
 getch();
 system("CLS");
 }
void marco(){
int x,y;
for(x=0;x<18;x++){
                 gotoxy(0,x);cout<<"*";
                 gotoxy(43,x);cout<<"*";

}
for(y=0;y<43;y++){
                  gotoxy(y,0);cout<<"*";
                  gotoxy(y,17);cout<<"*";
}
gotoxy(15,20);cout<<"* MAS VS MENOS *";
gotoxy(45,14);cout<<"  **         **          **        ";
gotoxy(45,15);cout<<" ****  **** ****  ****  ****  **** ";
gotoxy(45,16);cout<<"  **         **          **        ";
gotoxy(45,17);cout<<"                                   ";
gotoxy(45,18);cout<<"        **         **          **  ";
gotoxy(45,19);cout<<" ****  **** ****  ****  ****  **** ";
gotoxy(45,20);cout<<"        **         **          **  ";
gotoxy(0,21);cout<<"  **         **          **         **         **          **         **       ";
gotoxy(0,22);cout<<" ****  **** ****  ****  **** ****  **** ****  ****  ****  **** ****  ****  ****";
gotoxy(0,23);cout<<"  **         **          **         **         **          **         **       ";
}
void marcoint(){
int y;

for(y=1;y<43;y++){
                  gotoxy(y,9);cout<<" ";
                  gotoxy(y,10);cout<<" ";
}
}
void marcointer(){
int x,y;
for(x=1;x<9;x++){
    for(y=1;y<43;y++){
    gotoxy(y,x);cout<<" ";
    }

}
for(x=11;x<17;x++){
    for(y=1;y<43;y++){
    gotoxy(y,x);cout<<" ";
    }

}
}
void num1(int x,int y){
gotoxy(x,y);cout<<" ****  "<<endl;
gotoxy(x,y);cout<<"** **  "<<endl;
gotoxy(x,y);cout<<"   **  "<<endl;
gotoxy(x,y);cout<<"   **  "<<endl;
gotoxy(x,y);cout<<"*******"<<endl;
gotoxy(x,y);cout<<"*******"<<endl;
}
void num2(int x,int y){
gotoxy(x,y);cout<<"*******"<<endl;
gotoxy(x,y);cout<<" ******"<<endl;
gotoxy(x,y);cout<<"   *** "<<endl;
gotoxy(x,y);cout<<"  ***  "<<endl;
gotoxy(x,y);cout<<" ******"<<endl;
gotoxy(x,y);cout<<"*******"<<endl;}
void num3(int x,int y){
gotoxy(x,y);cout<<"*******"<<endl;
gotoxy(x,y);cout<<"     **"<<endl;
gotoxy(x,y);cout<<"  *****"<<endl;
gotoxy(x,y);cout<<"  *****"<<endl;
gotoxy(x,y);cout<<"     **"<<endl;
gotoxy(x,y);cout<<"*******"<<endl;
}
void num0(int x,int y){
gotoxy(x,y);cout<<"*******"<<endl;
gotoxy(x,y);cout<<"*******"<<endl;
gotoxy(x,y);cout<<"**   **"<<endl;
gotoxy(x,y);cout<<"**   **"<<endl;
gotoxy(x,y);cout<<"*******"<<endl;
gotoxy(x,y);cout<<"*******"<<endl;
}

void puntaje(int p1, int p2,int partida){
    int x,y;

gotoxy(45,2);cout<<"jug 1      jug 2     ";
if(p1==0){
x=45;y=5;

gotoxy(x,y);cout<<"0";

}
if(p2==0){
x=55;y=5;

gotoxy(x,y);cout<<"0";
}
if(p1==1){
x=45;y=5;
gotoxy(x,y);cout<<"1";
}
if(p2==1){
x=55;y=5;
gotoxy(x,y);cout<<"1";
}
if(p1==2){
x=45;y=5;
gotoxy(x,y);cout<<"2";
}
if(p2==2){
x=55;y=5;
gotoxy(x,y);cout<<"2";
}
if(p1==3){
x=45;y=5;
gotoxy(x,y);cout<<"3";
}
if(p2==3){
x=55;y=5;
gotoxy(x,y);cout<<"3";
}
x=45;y=8;
gotoxy(x,y);cout<<"part= "<<partida;


}
void pintar_cuerpos(int x,int y,int a,int b,char j1,char j2){

gotoxy(x,y);cout<<j1;
gotoxy(x,y+1);cout<<j1;
gotoxy(x+1,y);cout<<j1;
gotoxy(x+1,y+1);cout<<j1;
gotoxy(a,b);cout<<j2;
gotoxy(a,b+1);cout<<j2;
gotoxy(a+1,b);cout<<j2;
gotoxy(a+1,b+1);cout<<j2;

}
void borrar_cuerpos(int x,int y,int a,int b){

gotoxy(x,y);cout<<" ";
gotoxy(x,y+1);cout<<" ";
gotoxy(x+1,y);cout<<" ";
gotoxy(x+1,y+1);cout<<" ";
gotoxy(a,b);cout<<" ";
gotoxy(a,b+1);cout<<" ";
gotoxy(a+1,b);cout<<" ";
gotoxy(a+1,b+1);cout<<" ";

}
int main(){

    char t,t2,j1,j2;
    int x,y,partida=1;
    int a,b,cont,p1,p2,g1,g2,v,ve;
    g1=g2=0;
    cont=0;
    a=35;
    b=9;
    x=y=9;
p1=p2=0;

portada();
marco();
    do{
ve=v=0;

int dir,di;
if(kbhit()){
    t=getch();
switch(t){
case 'd':
dir=1;
break;
case 'a':
dir=2;
break;
case 's':
dir=3;
break;
case 'w':
dir=4;
break;
case 'e':
dir=5;
break;
}

switch(t){
case 'l':
di=1;
break;
case 'j':
di=2;
break;
case 'k':
di=3;
break;
case 'i':
di=4;
break;
case 'o':
di=5;
break;
}
}

borrar_cuerpos(x,y,a,b);

    if(dir==1)x++;
    if(dir==2)x--;
    if(dir==3)y++;
    if(dir==4)y--;
    if(dir==5)ve=1;
    if(di==1)a++;
    if(di==2)a--;
    if(di==3)b++;
    if(di==4)b--;
    if(di==5)v=1;
/*if(partida<=2){
    if(dir==1)x++;
    if(dir==2)x--;
    if(dir==3)y++;
    if(dir==4)y--;
    if(di==1)a++;
    if(di==2)a--;
    if(di==3)b++;
    if(di==4)b--;
}
if(partida>2&&partida<5){
    if(dir==1)x++;
    if(dir==2)x--;
    if(dir==3)y++;
    if(dir==4)y--;
    if(di==1)a++;
    if(di==2)a--;
    if(di==3)b++;
    if(di==4)b--;
    if(dir==1)x++;
    if(dir==2)x--;
    if(dir==3)y++;
    if(dir==4)y--;
    if(di==1)a++;
    if(di==2)a--;
    if(di==3)b++;
    if(di==4)b--;}
if(partida>=5){
    if(dir==1)x++;
    if(dir==2)x--;
    if(dir==3)y++;
    if(dir==4)y--;
    if(di==1)a++;
    if(di==2)a--;
    if(di==3)b++;
    if(di==4)b--;
        if(dir==1)x++;
    if(dir==2)x--;
    if(dir==3)y++;
    if(dir==4)y--;
    if(di==1)a++;
    if(di==2)a--;
    if(di==3)b++;
    if(di==4)b--;
        if(dir==1)x++;
    if(dir==2)x--;
    if(dir==3)y++;
    if(dir==4)y--;
    if(di==1)a++;
    if(di==2)a--;
    if(di==3)b++;
    if(di==4)b--;
}*/


pintar_cuerpos(x,y,a,b,j1,j2);

if(   a==x && b==y||a+1==x && b==y+1||a==x+1 && b+1==y||a==x+1 && b==y+1||a+1==x && b+1==y||
      a==x && b==y+1 &&a+1==x+1 && b==y+1 || a+1==x && b+1==y+1&&a+1==x && b==y ||
      a==x+1 && b==y && a==x+1 && b+1==y+1||a+1==x+1 && b+1==y && a==x && b+1==y){

gotoxy(45,9);cout<<"juego terminado";
gotoxy(45,9);cout<<"               ";
dir=di=0;
    a=35;
    b=9;
    x=y=9;
cont++;
if(j1=='-'){
p1++;
}else{
p2++;
}
marcoint();
marcointer();
Sleep(250);
}

if(a==43||a+1==43||a==0 ||  b==17||b+1==17||b==0 ){
gotoxy(45,9);cout<<"juego terminado";
gotoxy(45,9);cout<<"               ";

dir=di=0;
    a=35;
    b=9;
    x=y=9;
    cont++;p1++;
    marco();
    marcointer();
    marcoint();
    Sleep(250);
}
if(x==43||x+1==43||x==0 ||y==17||y+1==17|| y==0  ){
dir=di=0;
gotoxy(45,9);cout<<"juego terminado";
gotoxy(45,9);cout<<"               ";

    a=35;
    b=9;
    x=y=9;
    cont++;p2++;
    marco();
    marcointer();
    marcoint();
    Sleep(250);
}
puntaje(p1,p2,partida);
if(cont%2==0){
j1='-';
j2='+';
}else{
j2='-';
j1='+';
}

if(p1==3||p2==3){
partida++;


    if(p1==3){
        g1++;
    gotoxy(55,12); cout<<"jugador 1 WIN";
    Sleep(1000);
    gotoxy(55,12);cout<<"             ";

    }
    if(p2==3){
        g2++;
    gotoxy(55,12);cout<<"jugador 2 WIN";
    Sleep(1000);
    gotoxy(55,12);cout<<"             ";

    }


p1=p2=0;
}

if(partida<=2){
Sleep(150);

}
if(partida>2&&partida<5){
Sleep(80);

}
if(partida>=5){
Sleep(50);

}
if(v==1){Sleep(35);}
if(ve==1){Sleep(35);}
    if(partida==9){
    partida=1;
  if(g1>g2){
    if(g1==g2){
    gotoxy(55,12);cout<<"   EMPATE :(  ";
    Sleep(1500);
    gotoxy(55,12);cout<<"              ";
    }else {
    gotoxy(55,12);cout<<"GENERAL 1 WINN";
    Sleep(1500);
    gotoxy(55,12);cout<<"              ";}
    }
    if(g1<g2){
    if(g1==g2){
    gotoxy(55,12);cout<<"   EMPATE :(  ";
    Sleep(1500);
    gotoxy(55,12);cout<<"              ";
    }else {
    gotoxy(55,12);cout<<"GENERAL 2 WINN";
    Sleep(1500);
    gotoxy(55,12);cout<<"              ";}
    }

    g1=g2=0;
    }
    }while(t!='0');


return 0;}
