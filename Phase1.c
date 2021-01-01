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

void makegamescreen(int satr , int soton , int playersNumber , int*arry , int gamescreen[100][100]){
	int p, s , x , y , i , j;
	int arryOne[6]={1 , 2 , 3 , 4 , 5 , 4};
	for(s=0 , p=0 ; p<6 ; p++)
		if(arryOne[p]!=arry[p])
			s++;
	// khone haye samt chap	paeen (player 1)
	//1	
	x=satr-1;
	gamescreen[x][0]=1;
	//2
	x=satr-2;
	gamescreen[x][0]=1;
	x=satr-1;
	gamescreen[x][1]=1;
	//3
	x=satr-3;
	gamescreen[x][0]=1;
	x=satr-2;
	gamescreen[x][1]=1;
	x=satr-1;
	gamescreen[x][2]=1;
	//4
	x=satr-4;
	gamescreen[x][0]=1;
	x=satr-3;
	gamescreen[x][1]=1;
	x=satr-2;
	gamescreen[x][2]=1;
	x=satr-1;
	gamescreen[x][3]=1;
	//3 vs meghdary az 5
	x=satr-4;
	gamescreen[x][1]=1;
	x=satr-3;
	gamescreen[x][2]=1;
	x=satr-2;
	gamescreen[x][3]=1;
	// khone haye samt rast	paeen (player 2)
	//1
	x=satr-1;	y=soton-1;
	gamescreen[x][y]=2;
	//2
	x=satr-1; y=soton-2;
	gamescreen[x][y]=2;
	x=satr-2; y=soton-1;
	gamescreen[x][y]=2;
	//3
	x=satr-1;	y=soton-3;
	gamescreen[x][y]=2;
	x=satr-2; y=soton-2;
	gamescreen[x][y]=2;
	x=satr-3;	y=soton-1;
	gamescreen[x][y]=2;
	//4
	x=satr-1;	y=soton-4;
	gamescreen[x][y]=2;
	x=satr-2; y=soton-3;
	gamescreen[x][y]=2;
	x=satr-3;	y=soton-2;
	gamescreen[x][y]=2;
	x=satr-4;	y=soton-1;
	gamescreen[x][y]=2;
	//3 va meghdary az 5
	x=satr-2; y=soton-4;
	gamescreen[x][y]=2;
	x=satr-3;	y=soton-3;
	gamescreen[x][y]=2;
	x=satr-4;	y=soton-2;
	gamescreen[x][y]=2;

	if(s==0){
		// khone haye samt chap	paeen (player 1)
		//baghiye 5
		x=satr-5;
		gamescreen[x][0]=1;
		x=satr-1;
		gamescreen[x][4]=1;
		
		//4
		x=satr-5;
		gamescreen[x][1]=1;
		x=satr-4;
		gamescreen[x][2]=1;
		x=satr-3;
		gamescreen[x][3]=1;
		x=satr-2;
		gamescreen[x][4]=1;
		
		// khone haye samt rast	paeen (player 2)
		//baghiye 5
		x=satr-1;	y=soton-5;
		gamescreen[x][y]=2;
		x=satr-5;	y=soton-1;
		gamescreen[x][y]=2;
		//4
		x=satr-2; y=soton-5;
		gamescreen[x][y]=2;
		x=satr-3;	y=soton-4;
		gamescreen[x][y]=2;
		x=satr-4; y=soton-3;
		gamescreen[x][y]=2;
		x=satr-5;	y=soton-2;
		gamescreen[x][y]=2;
	}
	
	if(playersNumber==4){
			
		//khone chap bala (player 3)
		//1
		gamescreen[0][0]=3;
		//2
		gamescreen[1][0]=3;
		gamescreen[0][1]=3;
		//3
		gamescreen[2][0]=3;
		gamescreen[1][1]=3;
		gamescreen[0][2]=3;
		//4
		gamescreen[3][0]=3;
		gamescreen[2][1]=3;
		gamescreen[1][2]=3;
		gamescreen[0][3]=3;
		//3 va meghdari az 5
		gamescreen[3][1]=3;
		gamescreen[2][2]=3;
		gamescreen[1][3]=3;
		
		//khone rast bala (player 4)
		//1
		y=soton-1;
		gamescreen[0][y]=4;
		//2
		y=soton-2;
		gamescreen[0][y]=4;
		y=soton-1;
		gamescreen[1][y]=4;
		//3
		y=soton-3;
		gamescreen[0][y]=4;
		y=soton-2;
		gamescreen[1][y]=4;
		y=soton-1;
		gamescreen[2][y]=4;
		//4
		y=soton-4;
		gamescreen[0][y]=4;
		y=soton-3;
		gamescreen[1][y]=4;
		y=soton-2;
		gamescreen[2][y]=4;
		y=soton-1;
		gamescreen[3][y]=4;
		//3 va meghdari az 5
		y=soton-4;
		gamescreen[1][y]=4;
		y=soton-3;
		gamescreen[2][y]=4;
		y=soton-2;
		gamescreen[3][y]=4;
		
		if(s==0){
			//baghie 5
			gamescreen[0][4]=3;
			gamescreen[4][0]=3;
			//4
			gamescreen[4][1]=3;
			gamescreen[3][2]=3;
			gamescreen[2][3]=3;
			gamescreen[1][4]=3;
			
			//khone rast bala (player 4)
			//baghie 5
			y=soton-5;
			gamescreen[0][y]=4;
			y=soton-1;
			gamescreen[4][y]=4;
			//4
			y=soton-5;
			gamescreen[1][y]=4;
			y=soton-4;
			gamescreen[2][y]=4;
			y=soton-3;
			gamescreen[3][y]=4;
			y=soton-2;
			gamescreen[4][y]=4;
		}
	}
	
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
				printf("%s  |", playerThreeColor);
			else if(gamescreen[p][j]==4)
				printf("%s     |", playerFourColor);
			else
				printf("      |  ");
		}
		printf("\n");
		printf("     ____________________________________________________________________________________________________");
		printf("\n\n");
	}
}

int main(){
	int tol , arz , playersNumber , i , exite , j , n , w , a , b , z , f;
	int arry[6];
	int gamescreen[100][100];
	arry[5]=0;
	printf("\ntol va arz safhe bazi ra vared konid : ");
	scanf("%d %d" , &tol , &arz);
	printf("\ntedad bazikonan ra vared konid : ");
	scanf("%d" , &playersNumber);
	w=1;
	printf("\nsend color of player %d : " , w);
	scanf("%s", &playerOneColor);
	w++;
	printf("\nsend color of player %d : " , w);
	scanf("%s", &playerTwoColor);
	w++;
	if(playersNumber==4){
		printf("\nsend color of player %d : " , w);
		scanf("%s", &playerThreeColor);
		w++;
		printf("\nsend color of player %d : " , w);
		scanf("%s", &playerFourColor);	
	}
	printf("\nsend leave-camp-value : ");
	scanf("%d", &exite);
	printf("\nsend beads-order : ");
	for(j=0 ; j<5 ; j++)
		scanf("%d" , &arry[j]);
	if(arry[4]==5)	
		scanf("%d" , &arry[5]);
	makegamescreen(tol , arz , playersNumber , arry , gamescreen);
	for(i=1; ;i++){
		if(checkNobat(i)==1)
			printf("\nnobat bazikon 1 ast.\n");
			
		else if(checkNobat(i)==2)
			printf("\nnobat bazikon 2 ast.\n");
			
		else if(checkNobat(i)==3)	
			printf("\nnobat bazikon 3 ast.\n");
			
		else
			printf("\nnobat bazikon 4 ast.\n");
			
		printf("\nagar mikhohid az bazi kharej shavid leave-camp-value ra vared konid:");	
		printf("\nshomare satr va soton mohre mored nazar ra vared konid:");
		scanf("%d", &z);
		if(z==exite)
			return 0;
		else{
		scanf("%d", &f);
		printf("\nshomare satr , soton maghsad mord nazar ra vared konid");
		scanf("%d %d", &a ,&b);
		move(z,f,a,b,tol,arz,gamescreen);
		}
	}
}
