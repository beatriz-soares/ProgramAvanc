#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

char * mstrcat( char * dest, char * source){
  int contador = 0;
  while (dest[contador] != '\0'){
    contador++;
  }
  while (*source != '\0'){
    dest[contador]=*source;
    source++;
    contador++;
  }
  dest[contador] = '\0';
  return dest;
}

// float * transposta(float *x, int nl, int nc){
//   float y[10];
//   memcpy(y, x, 10*sizeof(float));
//   for (int i=0; i<nl; i++){
//     for (int j=0; j<nc; j++){
//       cout<<y[i*nc + j]<<"  ";
//     }
//     cout<<endl;
//   }
//   cout<<"novinha\n";
//     for (int i=0; i<nl; i++){
//       for (int j=0; j<nc; j++){
//         y[j*nl + i]=x[i*nc + j];
//         cout<<y[i*nc + j]<<' ';
//       }
// cout<<endl;
//     }
// }

void transmite(char x, int c){
  char m[6][6]={'a'};
  int correspondente = x;
  int resto, i=5;
  do{
    resto = correspondente%2;
    cout<<correspondente<<" resto 2 deu "<<resto;
    if (resto==0)
      m[i][c]='0';
    else
      m[i][c]='1';
    correspondente = correspondente/2;
    cout<<" e a divisao por dois deu "<<correspondente<<endl;
    i--;
  }while(correspondente>0);
  cout<<" e esse foi o resultado \n\n";
  for (int i=0; i<6; i++){
    cout<<m[i][c]<<endl;
  }
}
void prepara(char *x, int nc){
  int correspondente=0;
  for (int i=0; i<nc; i++){
    if (x[i]=='1'){
      correspondente += pow(2,nc-1-i);
    }
  }
  char letra = correspondente;
  cout<<correspondente<<endl<<letra;
  transmite(letra, 5);
}



int main(){
  // char destino[100]="Eu gosto";
  // char origem[100]=" de dieta";
  // char *resultado=mstrcat(destino, origem);
  // puts(resultado);
  char x[6] = {'1', '1', '0', '0', '0', '0'};
  prepara(x, 6);
  return 0;
}
