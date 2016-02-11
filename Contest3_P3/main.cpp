#include<cstdio>

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		int matriz[4][4];
		bool up=false,left=false,down=false,right=false;
		bool sentinel = false;
		for(int j = 0; j < 4; j++){
			for(int k = 0; k < 4; k++){
				scanf("%d",&matriz[j][k]);
				if (matriz[j][k] == 2048)
					sentinel = true;
			}
		}
		if (sentinel){
			printf("NONE\n");
			continue;
		}
		for(int j = 0; j < 4; j++){
			if(up && left && right && down){
				break;
			}
			for(int k = 0; k < 4; k++){
				if (k == 0){
					if(j > 0)
						if (matriz[j][k] != 0 && (matriz[j-1][k] == 0 || matriz[j-1][k] == matriz[j][k]))
							up=true;
					if (matriz[j][k] != 0 && (matriz[j][k+1] == 0 || matriz[j][k+1] == matriz[j][k]))
						right=true;
					if(j < 3)
						if (matriz[j][k] != 0 && (matriz[j+1][k] == 0 || matriz[j+1][k] == matriz[j][k]))
							down=true;
				}else if(k == 3){
					if (matriz[j][k] != 0 && (matriz[j][k-1] == 0 || matriz[j][k-1] == matriz[j][k]))
						left=true;
					if (j < 3)
						if (matriz[j][k] != 0 && (matriz[j+1][k] == 0 || matriz[j+1][k] == matriz[j][k]))
							down=true;
					if(j > 0)
						if (matriz[j][k] != 0 && (matriz[j-1][k] == 0 || matriz[j-1][k] == matriz[j][k]))
							up=true;
				}else{
					if (j > 0)
						if (matriz[j][k] != 0 && (matriz[j-1][k] == 0 || matriz[j-1][k] == matriz[j][k]))
							up=true;
					if (matriz[j][k] != 0 && (matriz[j][k+1] == 0 || matriz[j][k+1] == matriz[j][k]))
						right=true;
					if (matriz[j][k] != 0 && (matriz[j][k-1] == 0 || matriz[j][k-1] == matriz[j][k]))
						left=true;
					if (j < 3)
						if (matriz[j][k] != 0 && (matriz[j+1][k] == 0 || matriz[j+1][k] == matriz[j][k]))
							down=true;
				}
			}
		}
		int p = 0;
		if(down){
			printf("DOWN");
			p++;
		}
		if(left){
			if(p > 0)
				printf(" LEFT");
			else
				printf("LEFT");
			p++;
		}
		if (right){
			if(p > 0)
				printf(" RIGHT");
			else
				printf("RIGHT");
			p++;
		}
		if (up){
			if(p > 0)
				printf(" UP");
			else
				printf("UP");
			p++;
		}
		if (!down && !up && !left && !right){
			printf("NONE");
		}
		printf("\n");
	}

	return 0;
}
