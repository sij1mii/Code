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
				//左色
				if((y==a[n-4])&&((n>3&&n<7 && x==c[n-4]-100)||
(n>6&&n<12 && x==a[n-4]+15)||(n>11&&n<17 && x==c[n-4]-90)||
(n>16&&n<22 && x==a[n-4]+5)||(n>21&&n<27 && x==c[n-4]-80)||
(n>26&&n<32 && x==a[n-4]-5)||(n>31&&n<37 && x==c[n-4]))){
					printf("\x1b[36m");
					printf(" %s", *masu2);
					printf("\x1b[0m");
				}
				//左 c[n](M-n-100=(x=20))(n+x=100)) a[n](n+14=(x=20))
				else if((x>c[n]-100 &&((n<32&&(x==20&&y==0))||
(n<33&&(x==19&&y==1))||(n<34&&(x==18&&y==2))))||
(x>c[n]-99 && (n<35&&(x==18&&y==3)))||
(x<a[n]+15 && ((n<36&&((x==19&&y==4))||(n<37&&(x==20&&y==5))||
(n<38&&(x==21&&y==6))||(n<39&&(x==22&&y==7))))||
(x<a[n]+14 && (n<40&&(x==22&&y==8)))||
(x>c[n]-90 && ((n<41&&(x==21&&y==9))||(n<42&&(x==20&&y==10))||
(n<43&&(x==19&&y==11))||(n<44&&(x==18&&y==12))))||
(x>c[n]-89 && (n<45&&(x==18&&y==13)))||
(x<a[n]+5 && ((n<46&&(x==19&&y==14))||(n<47&&(x==20&&y==15))||
(n<48&&(x==21&&y==16))||(n<49&&(x==22&&y==17))))||
(x<a[n]+4 && (n<50&&(x==22&&y==18)))||
(x>c[n]-80 && ((n<51&&(x==21&&y==19))||(n<53&&(x==20&&y==20))||
(n<54&&(x==19&&y==21))||(n<55&&(x==18&&y==22))))||
(x>c[n]-79 && (n<56&&(x==18&&y==23)))||
(x<a[n]-5 && ((n<57&&(x==19&&y==24))||(n<58&&(x==20&&y==25))||
(n<59&&(x==21&&y==26))||(n<60&&(x==22&&y==27))))||
(x<a[n]-6 && (n<61&&(x==22&&y==28)))||
(x>c[n]-70 && (n<62&&(x==21&&y==29))))){
					printf(" %s", *masu1);
				}
				//右色
				else if((y==c[n-4]-91)&&((n>3&&n<7 && x==c[n-4]-100)||
(n>6&&n<12 && x==a[n-4]+15)||(n>11&&n<17 && x==c[n-4]-90)||
(n>16&&n<22 && x==a[n-4]+5)||(n>21&&n<27 && x==c[n-4]-80)||
(n>26&&n<32 && x==a[n-4]-5)||(n>31&&n<37 && x==c[n-4]-70))){
					printf("\x1b[36m");
					printf(" %s", *masu2);
					printf("\x1b[0m");
				}
				//右
				else if((x>c[n]-100 && ((n<32&&(x==20&&y==29))||
(n<33&&(x==19&&y==28))||(n<34&&(x==18&&y==27))))||
(x>c[n]-99 && (n<35&&(x==18&&y==26)))||
(x<a[n]+15 && ((n<36&&(x==19&&y==25))||(n<37&&(x==20&&y==24))||
(n<38&&(x==21&&y==23))||(n<39&&(x==22&&y==22))))||
(x<a[n]+14 && (n<40&&(x==22&&y==21)))||
(x>c[n]-90 && ((n<41&&(x==21&&y==20))||(n<42&&(x==20&&y==19))||
(n<43&&(x==19&&y==18))||(n<44&&(x==18&&y==17))))||
(x>c[n]-89 && (n<45&&(x==18&&y==16)))||
(x<a[n]+5 && ((n<46&&(x==19&&y==15))||(n<47&&(x==20&&y==14))||
(n<48&&(x==21&&y==13))||(n<49&&(x==22&&y==12))))||
(x<a[n]+4 && (n<50&&(x==22&&y==11)))||
(x>c[n]-80 && ((n<51&&(x==21&&y==10))||(n<52&&(x==20&&y==9))||
(n<53&&(x==19&&y==8))||(n<54&&(x==18&&y==7))))||
(x>c[n]-79 && (n<55&&(x==18&&y==6)))||
(x<a[n]-5 && ((n<56&&(x==19&&y==5))||(n<57&&(x==20&&y==4))||
(n<58&&(x==21&&y==3))||(n<59&&(x==22&&y==2))))||
(x<a[n]-4 && (n<60&&(x==22&&y==1)))||
(x>c[n]-70 && (n<61&&(x==21&&y==0)))){
					printf(" %s", *masu1);
				}
				//上1_1
				else if((x<a[n]-31 && ((n<60&&(x==0&&y==9))||
(n<61&&(x==1&&y==8))||(n<62&&(x==2&&y==7))||(n<63&&(x==3&&y==6))||
(n<64&&(x==4&&y==6))||(n<65&&(x==5&&y==7))||(n<66&&(x==6&&y==8))||
(n<67&&(x==7&&y==9))||(n<68&&(x==8&&y==10))||(n<69&&(x==9&&y==11))||
(n<70&&(x==10&&y==12))||(n<71&&(x==11&&y==12))||
(n<72&&(x==12&&y==11))||(n<73&&(x==13&&y==10))||
(n<74&&(x==14&&y==9))||(n<75&&(x==15&&y==8))||
(n<76&&(x==16&&y==7))||(n<77&&(x==17&&y==6))||(n<78&&(x==18&&y==6))||
(n<79&&(x==19&&y==7))||(n<80&&(x==20&&y==8))||(n<81&&(x==21&&y==9))||
(n<82&&(x==22&&y==10))||(n<83&&(x==23&&y==11))))){
					printf(" %s", *masu2);
				}
				//上1_2
				else if((x<a[n]-32 && ((n<62&&(x==0&&y==8))||
(n<63&&(x==1&&y==7))||(n<64&&(x==2&&y==6))||(n<63&&(x==3&&y==5))||
(n<66&&(x==4&&y==5))||(n<67&&(x==5&&y==6))||(n<66&&(x==6&&y==7))||
(n<69&&(x==7&&y==8))||(n<70&&(x==8&&y==9))||(n<69&&(x==9&&y==10))||
(n<72&&(x==10&&y==11))||(n<73&&(x==11&&y==11))||
(n<74&&(x==12&&y==10))||(n<75&&(x==13&&y==9))||
(n<76&&(x==14&&y==8))||(n<77&&(x==15&&y==7))||
(n<78&&(x==16&&y==6))||(n<79&&(x==17&&y==5))||(n<78&&(x==18&&y==5))||
(n<81&&(x==19&&y==6))||(n<82&&(x==20&&y==7))||(n<81&&(x==21&&y==8))||
(n<84&&(x==22&&y==9))||(n<85&&(x==23&&y==10))))){
					printf(" %s", *masu2);
				}
				//上1_3
				else if((x<a[n]-33 && ((n<64&&(x==0&&y==10))||
(n<65&&(x==1&&y==9))||(n<66&&(x==2&&y==8))||(n<67&&(x==3&&y==7))||
(n<68&&(x==4&&y==7))||(n<69&&(x==5&&y==8))||(n<70&&(x==6&&y==9))||
(n<71&&(x==7&&y==10))||(n<72&&(x==8&&y==11))||(n<73&&(x==9&&y==12))||
(n<74&&(x==10&&y==13))||(n<75&&(x==11&&y==13))||
(n<76&&(x==12&&y==12))||(n<77&&(x==13&&y==11))||
(n<78&&(x==14&&y==10))||(n<79&&(x==15&&y==9))||
(n<80&&(x==16&&y==8))||(n<81&&(x==17&&y==7))||(n<82&&(x==18&&y==7))||
(n<83&&(x==19&&y==8))||(n<84&&(x==20&&y==9))||(n<85&&(x==21&&y==10))||
(n<86&&(x==22&&y==11))||(n<87&&(x==23&&y==12))))){
					printf(" %s", *masu2);
				}
				//上2_1
				else if((x<a[n]-31 && ((n<60&&(x==0&&y==19))||
(n<61&&(x==1&&y==20))||(n<62&&(x==2&&y==21))||(n<63&&(x==3&&y==22))||
(n<64&&(x==4&&y==22))||(n<65&&(x==5&&y==21))||(n<66&&(x==6&&y==20))||
(n<67&&(x==7&&y==19))||(n<68&&(x==8&&y==18))||(n<69&&(x==9&&y==17))||
(n<70&&(x==10&&y==16))||(n<71&&(x==11&&y==16))||
(n<72&&(x==12&&y==17))||(n<73&&(x==13&&y==18))||
(n<74&&(x==14&&y==19))||(n<75&&(x==15&&y==20))||
(n<76&&(x==16&&y==21))||(n<77&&(x==17&&y==22))||
(n<78&&(x==18&&y==22))||(n<79&&(x==19&&y==21))||
(n<80&&(x==20&&y==20))||(n<81&&(x==21&&y==19))||
(n<82&&(x==22&&y==18))||(n<83&&(x==23&&y==17))))){
					printf(" %s", *masu2);
				}
				//上2_2
				else if((x<a[n]-32 && ((n<62&&(x==0&&y==18))||
(n<63&&(x==1&&y==19))||(n<64&&(x==2&&y==20))||(n<65&&(x==3&&y==21))||
(n<66&&(x==4&&y==21))||(n<67&&(x==5&&y==20))||(n<68&&(x==6&&y==19))||
(n<69&&(x==7&&y==18))||(n<70&&(x==8&&y==17))||(n<71&&(x==9&&y==16))||
(n<72&&(x==10&&y==15))||(n<73&&(x==11&&y==15))||
(n<74&&(x==12&&y==16))||(n<75&&(x==13&&y==17))||
(n<76&&(x==14&&y==18))||(n<77&&(x==15&&y==19))||
(n<78&&(x==16&&y==20))||(n<79&&(x==17&&y==21))||
(n<78&&(x==18&&y==21))||(n<81&&(x==19&&y==20))||
(n<82&&(x==20&&y==19))||(n<83&&(x==21&&y==18))||
(n<84&&(x==22&&y==17))||(n<85&&(x==23&&y==16))))){
					printf(" %s", *masu2);
				}
				//上2_3
				else if((x<a[n]-33 && ((n<64&&(x==0&&y==20))||
(n<65&&(x==1&&y==21))||(n<66&&(x==2&&y==22))||(n<67&&(x==3&&y==23))||
(n<68&&(x==4&&y==23))||(n<69&&(x==5&&y==22))||(n<70&&(x==6&&y==21))||
(n<71&&(x==7&&y==20))||(n<72&&(x==8&&y==19))||(n<73&&(x==9&&y==18))||
(n<74&&(x==10&&y==17))||(n<75&&(x==11&&y==17))||
(n<76&&(x==12&&y==18))||(n<77&&(x==13&&y==19))||
(n<78&&(x==14&&y==20))||(n<79&&(x==15&&y==21))||
(n<80&&(x==16&&y==22))||(n<81&&(x==17&&y==23))||
(n<82&&(x==18&&y==23))||(n<83&&(x==19&&y==22))||
(n<84&&(x==20&&y==21))||(n<85&&(x==21&&y==20))||
				(n<86&&(x==22&&y==19))||(n<87&&(x==23&&y==18))))){
									printf(" %s", *masu2);
				}
				//下1_1 (M-n(57)=(63-23)=40)
				else if((x>c[n]-40 && ((n<80&&(x==23&&y==9))||
(n<81&&(x==22&&y==8))||(n<82&&(x==21&&y==7))||(n<83&&(x==20&&y==6))||
(n<84&&(x==19&&y==5))||(n<85&&(x==18&&y==4))||(n<86&&(x==17&&y==4))||
(n<87&&(x==16&&y==5))||(n<88&&(x==15&&y==6))||(n<89&&(x==14&&y==7))||
(n<90&&(x==13&&y==8))||(n<91&&(x==12&&y==9))||(n<92&&(x==11&&y==10))||
(n<93&&(x==10&&y==10))||(n<94&&(x==9&&y==9))||(n<95&&(x==8&&y==8))||
(n<96&&(x==7&&y==7))||(n<97&&(x==6&&y==6))||(n<98&&(x==5&&y==5))||
(n<99&&(x==4&&y==4))||(n<100&&(x==3&&y==4))||(n<101&&(x==2&&y==5))||
(n<102&&(x==1&&y==6))||(n<103&&(x==0&&y==7))))){
					printf(" %s",*masu1);
				}
				//下1_2
				else if((x>c[n]-38 && ((n<82&&(x==23&&y==8))||
(n<83&&(x==22&&y==7))||(n<84&&(x==21&&y==6))||(n<85&&(x==20&&y==5))||
(n<86&&(x==19&&y==4))||(n<87&&(x==18&&y==3))||(n<88&&(x==17&&y==3))||
(n<89&&(x==16&&y==4))||(n<90&&(x==15&&y==5))||(n<91&&(x==14&&y==6))||
(n<92&&(x==13&&y==7))||(n<93&&(x==12&&y==8))||(n<94&&(x==11&&y==9))||
(n<95&&(x==10&&y==9))||(n<96&&(x==9&&y==8))||(n<97&&(x==8&&y==7))||
(n<98&&(x==7&&y==6))||(n<99&&(x==6&&y==5))||(n<100&&(x==5&&y==4))||
(n<101&&(x==4&&y==3))||(n<102&&(x==3&&y==3))||(n<103&&(x==2&&y==4))||
(n<104&&(x==1&&y==5))||(n<105&&(x==0&&y==6))))){
					printf(" %s",*masu1);
				}
				//下1_3
				else if((x>c[n]-36 && ((n<84&&(x==23&&y==7))||
(n<85&&(x==22&&y==6))||(n<86&&(x==21&&y==5))||(n<87&&(x==20&&y==4))||
(n<88&&(x==19&&y==3))||(n<89&&(x==18&&y==2))||(n<90&&(x==17&&y==2))||
(n<91&&(x==16&&y==3))||(n<92&&(x==15&&y==4))||(n<93&&(x==14&&y==5))||
(n<94&&(x==13&&y==6))||(n<95&&(x==12&&y==7))||(n<96&&(x==11&&y==8))||
(n<97&&(x==10&&y==8))||(n<98&&(x==9&&y==7))||(n<99&&(x==8&&y==6))||
(n<100&&(x==7&&y==5))||(n<101&&(x==6&&y==4))||(n<102&&(x==5&&y==3))||
(n<103&&(x==4&&y==2))||(n<104&&(x==3&&y==2))||(n<105&&(x==2&&y==3))||
(n<106&&(x==1&&y==4))||(n<107&&(x==0&&y==5))))){
					printf(" %s",*masu1);
				}
				//下2_1
				else if ((x>c[n]-40 && ((n<80&&(x==23&&y==19))||
(n<81&&(x==22&&y==20))||(n<82&&(x==21&&y==21))||
(n<83&&(x==20&&y==22))||(n<84&&(x==19&&y==23))||
(n<85&&(x==18&&y==24))||(n<86&&(x==17&&y==24))||
(n<87&&(x==16&&y==23))||(n<88&&(x==15&&y==22))||
(n<89&&(x==14&&y==21))||(n<90&&(x==13&&y==20))||
(n<91&&(x==12&&y==19))||(n<92&&(x==11&&y==18))||
(n<93&&(x==10&&y==18))||(n<94&&(x==9&&y==19))||(n<95&&(x==8&&y==20))||
(n<96&&(x==7&&y==21))||(n<97&&(x==6&&y==22))||(n<98&&(x==5&&y==23))||
(n<99&&(x==4&&y==24))||(n<100&&(x==3&&y==24))||(n<101&&(x==2&&y==23))||
(n<102&&(x==1&&y==22))||(n<103&&(x==0&&y==21))))){
					printf(" %s",*masu1);
				}
				//下2_2
				else if ((x>c[n]-38 && ((n<82&&(x==23&&y==20))||
(n<83&&(x==22&&y==21))||(n<84&&(x==21&&y==22))||
(n<85&&(x==20&&y==23))||(n<86&&(x==19&&y==24))||
(n<87&&(x==18&&y==25))||(n<88&&(x==17&&y==25))||
(n<89&&(x==16&&y==24))||(n<90&&(x==15&&y==23))||
(n<91&&(x==14&&y==22))||(n<92&&(x==13&&y==21))||
(n<93&&(x==12&&y==20))||(n<94&&(x==11&&y==19))||
(n<95&&(x==10&&y==19))||(n<96&&(x==9&&y==20))||(n<95&&(x==8&&y==21))||
(n<98&&(x==7&&y==22))||(n<99&&(x==6&&y==23))||(n<98&&(x==5&&y==24))||
(n<101&&(x==4&&y==25))||(n<102&&(x==3&&y==25))||
(n<101&&(x==2&&y==24))||(n<104&&(x==1&&y==23))||
(n<105&&(x==0&&y==22))))){
					printf(" %s",*masu1);
				}
				//下2_3
				else if ((x>c[n]-36 && ((n<84&&(x==23&&y==21))||
(n<85&&(x==22&&y==22))||(n<86&&(x==21&&y==23))||
(n<87&&(x==20&&y==24))||(n<88&&(x==19&&y==25))||
(n<89&&(x==18&&y==26))||(n<90&&(x==17&&y==26))||
(n<91&&(x==16&&y==25))||(n<92&&(x==15&&y==24))||
(n<93&&(x==14&&y==23))||(n<94&&(x==13&&y==22))||
(n<95&&(x==12&&y==21))||(n<96&&(x==11&&y==20))||
(n<97&&(x==10&&y==20))||(n<98&&(x==9&&y==21))||(n<97&&(x==8&&y==22))||
(n<100&&(x==7&&y==23))||(n<101&&(x==6&&y==24))||
(n<100&&(x==5&&y==25))||(n<103&&(x==4&&y==26))||
(n<104&&(x==3&&y==26))||(n<105&&(x==2&&y==25))||
(n<106&&(x==1&&y==24))||(n<107&&(x==0&&y==23))))){
					printf(" %s",*masu1);
				}
				//上固定型1
				else if((x==a[n]-70&&((y==a[13])||(y==a[14])))||
(x==a[n]-71&&((y==a[12])||(y==a[15])))||
(x==a[n]-72&&((y==a[12])||(y==a[15])))||
(x==a[n]-73&&((y==a[13])||(y==a[14])))){
					//printf("%d",a[n-50]-1);
					printf(" %s", *masu2);
				}
				//上固定型2
				else if((x==a[n]-75&&((y==a[13])||(y==a[14])))||
(x==a[n]-76&&((y==a[12])||(y==a[15])))||
(x==a[n]-77&&((y==a[12])||(y==a[15])))||
(x==a[n]-78&&((y==a[13])||(y==a[14])))){
					//printf("%d",a[n-50]-1);
					printf(" %s", *masu2);
				}
				//上固定型3
				else if((x==a[n]-82&&((y==a[13])||(y==a[14])))||
(x==a[n]-83&&((y==a[12])||(y==a[15])))||
(x==a[n]-84&&((y==a[12])||(y==a[15])))||
(x==a[n]-85&&((y==a[13])||(y==a[14])))){
					//printf("%d",a[n-50]-1);
					printf(" %s", *masu2);
				}
				/*				else if((x==a[n]-31)&&((n>30&&n<36 && y==c[n]-30)||
(n>35&&n<43 && y==a[n]-31)||(n>42&&n<50 && y==c[n]-17)||
(n>49&&n<58 && y==a[n]-46)||(n>57&&n<61 && y==c[n]-1))){
					printf(" %s", *masu1);
				}
				else if((x==a[n-1]-31)&&((n>31&&n<37 && y==c[n]-29)||
(n>36&&n<44 && y==a[n]-32)||(n>43&&n<51 && y==c[n]-16)||
(n>50&&n<59 && y==a[n]-47)||(n>58&&n<62 && y==c[n]))){
					printf(" %s", *masu1);
				}
				else if((x==a[n-2]-31)&&((n>32&&n<38 && y==c[n]-28)||
(n>37&&n<45 && y==a[n]-33)||(n>44&&n<52 && y==c[n]-15)||
(n>51&&n<60 && y==a[n]-48)||(n>59&&n<63 && y==c[n]+1))){
					printf(" %s", *masu1);
				}
				else if((x==a[n-3]-31)&&((n>33&&n<39 && y==c[n]-27)||
(n>38&&n<46 && y==a[n]-34)||(n>45&&n<53 && y==c[n]-14)||
(n>52&&n<61 && y==a[n]-49)||(n>60&&n<64 && y==c[n]+2))){
					printf(" %s", *masu1);
				}*/
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