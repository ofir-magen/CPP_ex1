#include "snowman.hpp"
#include <iostream>// need to cheak 
#include <stdexcept> // need to cheak 

using namespace std;
namespace ariel{

string hat(int a){
string s;
if(a==1){
    s=" _===_ " ;
}
if(a==2){
    s=" ___ \n .....";
}
if(a==3){
    s= "   _  \n  /_\\ ";
}
if(a==4){
    s=" ___ \n (_*_)";
}
return s ;
}

string nose(int a){
string s;
if(a==1){
    s=",";
}
if(a==2){
    s=".";
}
if(a==3){
    s= "_";
}
if(a==4){
    s=" ";
}
return s ;
}

string eye_l(int a){
 string s;
if(a==1){
    s=".";
}
if(a==2){
    s="o";
}
if(a==3){
    s= "O";
}
if(a==4){
    s="-";
}
return s ;
}

string eye_r(int a){
 string s;
if(a==1){
    s=".";
}
if(a==2){
    s="o";
}
if(a==3){
    s= "O";
}
if(a==4){
    s="-";
}
return s ;
}

string arm_l_up(int a){
string s;
if(a==1){
    s=" " ;
}
if(a==2){
    s="\\";
}
if(a==3){
    s= " ";
}
if(a==4){
    s=" ";
}
return s ;
}

string arm_r_up(int a){
 string s;
if(a==1){
    s=" " ;
}
if(a==2){
    s="/";
}
if(a==3){
    s= " ";
}
if(a==4){
    s=" ";
}
return s ;
}

string arm_l(int a){
string s;
if(a==1){
    s="<" ;
}
if(a==2){
    s=" ";
}
if(a==3){
    s= "/";
}
if(a==4){
    s=" ";
}
return s ;
}

string arm_r(int a){
string s;
if(a==1){
    s=">" ;
}
if(a==2){
    s=" ";
}
if(a==3){
    s= "\\";
}
if(a==4){
    s=" ";
}
return s ;
}

string torso(int a){
string s;
if(a==1){
    s=" : ";
}
if(a==2){
    s="] [";
}
if(a==3){
    s= "> <";
}
if(a==4){
    s="   ";
}
return s ;
}

string base(int a){
 string s;
if(a==1){
    s=" : ";
}
if(a==2){
    s="\" \"";
}
if(a==3){
    s=" ___ ";
}
if(a==4){
    s="   ";
}
return s ;
}


 string snowman(int a){
// we need to chaek the input 

int h,n,l,r,x,y,t,b;
string level_1 ,level_2 ,level_3, level_4;
int c=a/10000000;

if(c <1 || c>4){

cout << "is not OK" << endl;
}

b=a%10;
a=a/10;
t=a%10;
a=a/10;
y=a%10;
a=a/10;
x=a%10;
a=a/10;
r=a%10;
a=a/10;
l=a%10;
a=a/10;
n=a%10;
a=a/10;
h=a%10;
a=a/10;



    if(a){}
if(a==1){}
if(a==2){}
if(a==3){}
if(a==4){} 
level_1+=hat(h);
level_2 += "\n" + arm_l_up(x) + "(" + eye_l(l) + nose(n) + eye_r(r) + ")" + arm_r_up(y) + "\n";
level_3 += arm_l(x) + "(" + torso(t) + ")" + arm_r(y) + "\n";
level_4 +=  " (" + base(b) + ")";
 return (level_1 + level_2 + level_3 + level_4);

}
}