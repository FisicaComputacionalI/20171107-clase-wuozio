//ROCIO FLORES HERNANDEZ
//CLASE DEL 7 DE NOV DEL 2017
//COMO USAR EL SWITCH
#include <iostream>
using namespace std;
int main(){
  char variable;
cout<<"dame un valor entre A,B,C,D,F"<<endl;
cin>>variable;
switch(variable){
 case 'A':cout<<"EXCELENTE"<<endl;
   break;
 case 'B':cout<<"muy bien"<<endl;
   break;
 case 'C':cout<<"bien"<<endl;
   break;
 case 'D':cout<<"pasaste"<<endl;
   break;
 case 'F':cout<<"intentalo de nuevo mas tarde"<<endl;
   break;
 default:cout<<"opcion no valida"<<endl;
 }
return 0;
}
