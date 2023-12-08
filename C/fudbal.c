#include<stdio.h>
int main (){
    int m,n,x_igrac,y_igrac,x_topka,y_topka,x1_gol,y1_gol,x2_gol,y2_gol;
    char matrix[100][100];
    scanf("%d%d",&m,&n);
    scanf("%d%d",&x_igrac,&y_igrac);
    scanf("%d%d",&x_topka,&y_topka);
    scanf("%d%d%d%d",&x1_gol,&y1_gol,&x2_gol,&y2_gol);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            matrix[i][j]=i==x_igrac&&j==y_igrac ? 'i' : i==x_topka&&j==y_topka ? 'o' : i==x1_gol&&j==y1_gol ? ']' : i==x2_gol&&j==y2_gol ? ']' : '-';
        }
    }
    
    int x_pomestuvanje,y_pomestuvanje,novo_x,novo_y;
    char tmp[100][100];
    scanf("%d%d",&x_pomestuvanje,&y_pomestuvanje);
    int flagGoal=0,flagOut=0,flagNoGoal=0;
    if(x_pomestuvanje<0 || y_pomestuvanje <0){
        flagOut=1;
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            tmp[i][j]=matrix[i][j];
        }
    }
    for (int i = x_topka; i < m; ++i) {
        for (int j = y_topka; j < n; ++j) {
            if(matrix[i+x_pomestuvanje][j+y_pomestuvanje]==']'){
                flagGoal=1;
                break;
            }
            else if(matrix[i+x_pomestuvanje][j+y_pomestuvanje]=='-'){
                flagNoGoal= 1;
                tmp[x_topka][y_topka]='-';
                tmp[i+x_pomestuvanje][j+y_pomestuvanje]='o';
                novo_x=i+x_pomestuvanje;
                novo_y=j+y_pomestuvanje;
            }
        }

    }
    if(flagGoal){
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                printf("%c ",matrix[i][j]);
            }
            printf("\n");
        }
        printf("GOAL!");
        return 0;
    }
    if(flagOut){
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                printf("%c ",matrix[i][j]);
            }
            printf("\n");
        }
        printf("OUT!");
        return 0;
    }
    if(flagNoGoal){
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                printf("%c ",matrix[i][j]);
            }
            printf("\n");
        }
        printf("Novata pozicija na topkata e (%d, %d)\n",novo_x,novo_y);
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                printf("%c ",tmp[i][j]);
            }
            printf("\n");
        }
        }
    return 0;
}