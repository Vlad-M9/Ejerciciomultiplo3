#include <stdio.h>

int main(){

    FILE *archivo=NULL;
    

    archivo=fopen("vector.txt","z");
    
    if (archivo==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }

    for(int i=0; i<100; i++){
        fprintf(archivo,"%d\n",i);
    }
     fclose(archivo);
     return 0;
}