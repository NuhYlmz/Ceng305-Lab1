#include <stdio.h>
#include <stdlib.h>
int main( int argc, char *argv[] )  {
int i;
int j;
for(i=0;i<10;i=i+1){
for(j=0;j<10;j=j+1){
printf("%d ",rand()%(10000+1));
}
printf("\n");
}
}
// ./question3
// ./question3 | sort -n -k3 >sorted.txt
