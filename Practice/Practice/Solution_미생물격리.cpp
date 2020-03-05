//#include <iostream>
#include <cstdio>
//using namespace std;

int T;
int N, M, K;
mic map * = new mic[101][101];//0-> 미생물 수, 1-> 방향, 2->m
int dx[5] = {0,-1,1,0,0};
int dy[5] = {0,0,0,-1,1};

struct mic
{
	int k;
	int d;
	int m;
}

void move(int x,int y, int d, int v,int m){
	int nx = x+dx[d];
	int ny = y+dy[d];
	map[2][nx][ny] = m;
	if (nx==0 || ny==0 || nx==N-1 || ny==N-1){
		map[0][nx][ny] = map[0][x][y]/2;
		map[0][x][y] = 0;
		if (map[0][x][y]==0){
			return;
		}
		
		switch(d){
			case 0:
				map[1][x][y] = 1;
				break;	
			case 1:
				map[1][x][y] = 0;
				break;
			case 2:
				map[1][x][y] = 3;
				break;
			case 3:
				map[1][x][y] = 2;
				break;
		}
		
		
		return;
	}
	
	if (map[0][nx][ny]<v){
		map[1][nx][ny] = d;	
	}
	
	map[0][nx][ny]+=v;
	map[0][x][y] = 0;
		
	

	
	
}


int main(){
	scanf("%d",&T);
	
	for (int t=1; t<=1; t++){
		
		scanf("%d %d %d", &N, &M, &K);
		//printf("%d%d%d",N,M,K);
		int x,y,k,d,m;
		for (int k = 0; k<K; k++){
			scanf("%d %d", &x, &y);
			scanf("%d %d", &k, &d);
			map[x][y] = 
		}	
		
		for (int m = 1;m<=M; m++){
			for(int i = 1;i<N;i++){
				for(int j = 1;j<N; j++){
					if (map[0][i][j]>0){
						move(i,j,map[1][i][j],map[0][i][j],m);
						
						
					}
					
					
				}
				
			}
			
			
			
		}
		
		int sum = 0;
		for(int n = 1; n<N-1;n++){
			for (int m = 1; m<N-1;m++){
				sum += map[0][n][m];
			}
		}
		
		printf("#%d %d",t,sum);
		
		for (int n = 0; n<N; n++){
			for (int m = 0;m<N; m++){
				printf("%d ",map[0][n][m]);
			}
			printf("\n");
		}
		
		
		
	}
	
	

    return 0;
}

