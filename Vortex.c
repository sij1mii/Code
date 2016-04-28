#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#define A "⏹"
#define B "⚫"
#define C "⬜"
#define D " "

#define M 42//Mを増やす場合 c[n]-(増やす)
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
				if((x>c[n]-27&&((x==15&&y==9)||(x==14&&y==10)||
(x==13&&y==11)||(x==12&&y==12)||(x==11&&y==13)||
(x==10&&y==14)))||
(y<a[n]+9&&(x==9&&((y==15)||(y==16)||(y==17))))||
(x<a[n]+1&&((x==10&&y==18)||(x==11&&y==19)))||
(x<a[n]+1&&(y==19&&((x==12)||(x==13))))||
(x>c[n]-15&&(x==14&&y==18))||
(y>c[n]-11&&(x==15&&((y==17)||(y==16)||(y==15))))||
(x>c[n]-11&&(x==14&&y==14))||
(x>c[n]-11&&(y==13&&((x==13)||(x==12))))||
(x>c[n]-11&&(x==11&&y==14))||
(y<a[n]-6&&(x==10&&((y==15)||(y==16)||(y==17))))||
(y<a[n]-6&&(x==11&&y==18))||
(x<a[n]-13&&(y==18&&((x==12)||(x==13))))||
(y>c[n]+1&&(x==14&&((y==17)||(y==16)||(y==15))))||
(x>c[n]&&(y==14&&((x==13)||(x==12))))||
(y<a[n]-16&&(x==11&&((y==15)||(y==16)||(y==17))))||
(y<a[n]-17&&(x==12&&y==17))||
(y>c[n]+10&&(x==13&&((y==17)||(y==16)||(y==15))))||
(y<a[n]-23&&(x==12&&((y==15)||(y==16))))){
					printf(" %s", *masu1);
				}
      	else{
          printf(" %s", *masu3);
           //printf(" %s", *masu4);
        }
      }
      printf("\n");
    }
    usleep(200000);
    system("clear");
    n++;
  }while(n != M);
}
