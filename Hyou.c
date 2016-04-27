//表表示
#include<stdio.h>

int field[30][30];

void my_init(int,int);
void my_field(int,int);

int main()
{
	int x,y;
	char str[BUFSIZ];

	printf("行を入力:");
	fgets(str,sizeof(str),stdin);
	sscanf(str,"%d",&y);

	printf("列を入力:");
	fgets(str,sizeof(str),stdin);
	sscanf(str,"%d",&x);

	my_init(y,x);
	my_field(y,x);

	return 0;	
}

void my_init(int a,int b)
{
	int i,j;
	int x, y,xx,yy;
	char str[80];

	printf("縦:横:入力 ");
	printf("Eで終了\n");
	while(str[0]!='E'){
		do{
			printf("縦: ");
			fgets(str,sizeof(str),stdin);
			sscanf(str,"%d",&x);
			if(x>b-1){
				printf("%d以下をもう一度入力\n",b);
			}
		}while(x>b-1);
		if(str[0]=='E')
			break;
		do{
			printf("横: ");
			fgets(str,sizeof(str),stdin);
			sscanf(str,"%d",&y);
			if(y>a-1){
				printf("%d以下をもう一度入力\n",a);
			}
		}while(y>a-1);
		if(str[0]=='E')
			break;
		for(i=0;i<30;i++){
			for(j=0;j<30;j++){
				field[x][y]=9;
			}
		}
	}
}

void my_field(int a,int b)
{
	int i,j;
	char str[BUFSIZ];
	FILE *fp;

	fp = fopen("Hyou.txt","a");	
//一行目表示
		for(i=0;i<a;i++){
		if(i==0){
			printf("   %d", i);
			fprintf(fp,"   %d",i);
		}
		else if(i<=10){
			printf(" %d", i);
			fprintf(fp," %d",i);
		}
		else{
			printf("%d",i);
			fprintf(fp,"%d",i);
		}
	}
	printf("\n");
	fprintf(fp,"\n");
//行番表示
		for(i=0;i<b;i++){
		if(i<10){
			printf(" %d", i);
		fprintf(fp," %d",i);
		}
		else{
			printf("%d", i);
		fprintf(fp,"%d",i);
		}
//マス目表示
		for(j=0;j<30;j++){
			if(field[i][j]==9){
				printf(" ⏹");
				fprintf(fp," ⏹");
			}
			else{
				printf(" ⬜");
				fprintf(fp," ⬜");
			}
		}
		printf("\n");
		fprintf(fp,"\n");
	}
	fclose(fp);
}
