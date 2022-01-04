#include <stdio.h>
#include <stdlib.h>
int main( int argc, char *argv[] )  {
int i;
FILE *file;
file=fopen("numbers2.txt","w");
for(i=0;i<1000;i=i+1){
fprintf(file,"%d\n",(rand()%(1000+1-100))+100);
}
fclose(file);
}
// ./question2
// cat numbers2.txt | grep "^2"
