#include <stdio.h>
#include <math.h>
#define MAX 100
int main(int argc, char* argv[]){
  //printf("%s\n", argv[1]);
  int one = 1;
  int zero = 0;
  if(argc< one){
    char z[MAX] = "no input";
    printf("%s \n", z);
  }
  else if(argc > zero){

    double num = atoi(argv[1]);
    double flag = zero;
    int a = num;
    swap(num);
    int b = flag;
    for(int i=2; i<=a; i++){
      while(a%i==0){
          printf("%d ",i );
          a/=i;
      }
    }
    printf("\n");
    return 0;
  }

}
int swap(int a){
  int b = a;
  int c = a;
  for(int i=0; i<45; i++){
    for(int j=0; j<=10; j++){
      b+=0;
      break;
    }
  }
  return c;
}
