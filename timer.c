#include <stdio.h>
#include <time.h>
#include <string.h>

int main(int argc, char* argv[])
{
    /// app name + arg
    if(argc == 2){
        const char *fileName = "timer.txt";
        if(strcmp(argv[1], "begin") == 0)
        {
            time_t currentT = time(0);
            char buf[128];
            sprintf(buf, "%ld", currentT);
            printf("time %s\r\n", buf);
            {
                FILE * pFile;
                pFile = fopen (fileName,"w");
                if (pFile!=NULL)
                {
                    fputs (buf,pFile);
                    fclose (pFile);
                }else
                {
                    printf("Can't open file %s\r\n", fileName);
                }
            }
        }else if(strcmp(argv[1], "end") == 0)
        {
            time_t currentT = time(0);
            time_t beginT = 0;
            printf("time %ld\r\n", currentT);
            {
                FILE * pFile;
                pFile = fopen (fileName , "r");
                if (pFile == NULL){
                    perror ("Error opening file");
                }else {
                    char buf[128];
                    if ( fgets (buf , sizeof(buf) , pFile) != NULL ){
                        printf("begin time raw %s\r\n", buf);
                        sscanf (buf,"%ld", &beginT);
                        {
                            printf("begin time %ld\r\n", beginT);
                        }
                    }
                    fclose (pFile);
                }
            }
            {
                double seconds = difftime(currentT, beginT);
                {
                    int ss = (int) seconds;
                    int ssMod = ss % 60;
                    int mm = seconds / 60;
                    int mmMod = mm % 60;
                    int hh = mm / 60;

                    printf("diff %dh %dm %ds (or %lf s)\r\n", hh, mmMod, ssMod, seconds);
                }
            }
        }else{
            printf("Wrong argument! Time will not be measured\r\n");
        }
    }else{
        printf("There should be only one arg, but there are %d\r\n", argc - 1);
    }

    return 0;
}
