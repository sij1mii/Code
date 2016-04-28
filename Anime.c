#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#define A "■"
#define B "●"
#define C "□"
#define D " "

#define M 120//Mを増やす場合 c[n]-(増やす)
#define X 24
#define Y 30

char masu1[4][4]={A,A};
char masu2[4][4]={B,B};
char masu3[4][4]={C,C};
char masu4[4][4]={D,D};

void set1();

int main()
{
  while(1){
    set1();
  }
  return 0;
}
void set1()
  {
    int i,x,y,j,n = 0;
    int a[M],b[M],c[M],d[70];
  
    do{
      printf("%d\n", n);
  
      for(i=0,j=M;i<M;i++,j--){
        a[i]=i;
        b[i]=i;
        c[i]=j;
      }
      for(i=0;i<Y;i++){
        if(i==0){
          printf("    %d", i);
        }
        else if(i>=1 && i<10){
          printf(" %d", i);
        }
        else{
          printf("%d", i);
        }
      }
      printf("\n");
      for(x=0;x<X;x++){
        if(x<10){
          printf(" %d", x);
        }
        else{
          printf("%d", x);
        }
        for(y=0;y<Y;y++){
      else{
           //printf(" %s", *masu3);
           printf(" %s", *masu4);
         }
       }
       printf("\n");
    }
    usleep(200000);
    system("clear");
    n++;
  }while(n != M);
}
