#include <stdio.h>
#include <stdlib.h>
int main( int argc, char *argv[] )  {
if(argc==3){
int a=atoi(argv[1]);
int b=atoi(argv[2]);
int i;
int j;
FILE *file;
file=fopen("numbers.txt","w");
for(i=0;i<a;i=i+1){
for(j=0;j<b;j=j+1){
fprintf(file,"%d ",rand()%(100+1));
}
fprintf(file,"\n");
}
fclose(file);
}
}
// ./question1 15 4
// cat numbers.txt
