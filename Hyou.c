//表表示
#include<stdio.h>

int field[30][30];

void my_init();
void my_field();

int main()
{
	my_init();
	my_field();

	return 0;	
}

void my_init()
{
	int i,j;
	int x, y;
	char str[80];

	printf("縦:横:入力 ");
	printf("Eで終了\n");
	while(str[0]!='E'){
		printf("縦: ");
		fgets(str,sizeof(str),stdin);
		sscanf(str,"%d",&x);
		if(str[0]=='E')
			break;

		printf("横: ");
		fgets(str,sizeof(str),stdin);
		sscanf(str,"%d",&y);
		if(str[0]=='E')
			break;

		for(i=0;i<30;i++){
			for(j=0;j<30;j++){
				field[x][y]=9;
			}
		}
	}
}

void my_field()
{
	int i,j;
	FILE *fp;

	fp = fopen("Hyou.txt","a");	
//一行目表示
	for(i=0;i<30;i++){
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
	for(i=0;i<30;i++){
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
