#include<stdio.h>
#include<string.h>

char playerOneColor[50],playerTwoColor[50],playerThreeColor[50],playerFourColor[50];

void move(int a,int b,int x, int y, int satr , int soton , int gamescreen[100][100]){
	int i, j , p ;
	x--; y--; a--; b--;
	if((x==a || x==a+1 || x==a-1) & (y==b || y==b+1 || y==b-1)){
			gamescreen[x][y]=gamescreen[a][b];
			gamescreen[a][b]=0;	
		//chap safhe
		for(i=1 ; i<=soton ; i++)
			printf("        %d" , i);
		printf("\n\n");
		for(p=0 ; p<satr ; p++){
			printf("%d    " , p+1);
			for(j=0 ; j<satr ; j++){
				if(gamescreen[p][j]==1)
						printf("%s |", playerOneColor);
				else if(gamescreen[p][j]==2)
						printf("%s     |", playerTwoColor);
				else if(gamescreen[p][j]==3)
						printf("%s |", playerThreeColor);
				else if(gamescreen[p][j]==4)
						printf("%s |", playerFourColor);
				else
					printf("      |  ");
			}
			printf("\n");
			printf("     ____________________________________________________________________________________________________");
			printf("\n\n");
		}
	}
	else
		printf("\nin harekat mojaz nist");
}

int checkNobat(int i){
	int arryO[51]={1,5,9,13,17,21,25,29,33,37,41,45,49,53,57,61,65,69,73,77,81,85,89,93,97,101,105,109,113,117,121,125,129,133,137,141,145,149,153,157,161,165,169,173,177,181,185,189,193};
	int arryT[51]={2,6,10,14,18,22,26,30,34,38,42,46,50,54,58,62,66,70,74,78,82,86,90,94,98,102,106,110,114,118,122,126,130,134,138,142,146,150,154,158,162,166,170,174,178,182,186,190,194};
	int j;
	for(j=0;j<50;j++){
		if(i==arryO[j])
			return 1;
		else if(i==arryT[j])
			return 2;
		else
			return 3;
	}
}


