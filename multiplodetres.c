#include <stdio.h>

int main(){

    FILE *cc1File, *cc2File;
    int numero;
    char an;
    cc1File = fopen("vector.txt", "r");
    cc2File = fopen ("cc2File.txt", "r");

    if (cc2File != NULL){
        printf("Ya existe el archivo cc2.txt ¿Desea reemplazarlo? (y/n)");
        scanf( "%c", &an);
        if(an == 'y'){
            cc2File = fopen("cc2file.txt", "w");
            if(cc1File = NULL || cc2File == NULL){
                printf("Error al abrir el archivo \n");
                return -1;
            }

            while (fscanf(cc1File, "%d", &numero) == 1){
                if (numero % 3 == 0){

                }
            }

            fclose(cc1File);
            fclose (cc2File);
            printf(" Se ha modificado el archivo cc2File.txt");
            return 0;
        }
        else{
            printf("No se abrirá y reemplazará el archivo cc2File.txt");
            return -1;
         }
    }
    else{
        cc2File = fopen("cc2.txt", "w");
        if(cc1File == NULL || cc2File == NULL){
            printf ("Error al abrir el achivo \n");
            return -1;
        }

        while (fcanf(cc1File, "%d", &numero)  == 1){
            if(numero % 3  == 0){
                fprintf(cc2File, "%d multiplo de 3 \n", numero);
            }
            else{
                fprintf(cc2File,"%d\n", numero);
            }
        }


        fclose(cc1File);
        fclose(cc2File);

        printf("Se ha modificado el archivo cc2File.txt");
        return 0;    
    }

}