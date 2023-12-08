#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include <math.h>
void printFile() {
    FILE *f=fopen("shema.txt","r");
    char line[1000];
    while(!feof(f)){
        fgets(line,1000,f);
        if (feof(f))
            break;
        printf("%s",line);
    }
    fclose(f);
}
int main (){
    int n;
    scanf("%d",&n);
    int N = (int)ceil(sqrt(n));
//    printf("%d",N);
    int matrix[100][100];
int curr=1;
    for (int j = 0; j < N; ++j) {
        if(j%2==0){
            for (int i = 0; i < N; ++i) {
                if(curr>n){
                    matrix[i][j]=0;
                    continue;
                }
                matrix[i][j]=curr++;
            }
        }
        else{
            for (int i = N-1; i >=0; --i) {
                if(curr>n){
                    matrix[i][j]=0;
                    continue;
                }
                matrix[i][j]=curr++;
            }
        }
    }

    FILE * f= fopen("shema.txt","w");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            fprintf(f,"%d ",matrix[i][j]);
        }
        fprintf(f,"\n");
    }
    fclose(f);
    printFile();
    return 0;
}