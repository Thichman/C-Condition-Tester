#include <stdio.h>
#include "initialCondition.c"
#include <string.h>
#include <stdlib.h>




int main()
{
  struct *matrix c = newMatrix(
  double initial = initialCondition(0,1);
  














}




void write_pgm(struct matrix *c, char* filename)
{


FILE *file = fopen(filename, "w+");
char s1[20];
char s2[20];
fputs("P2\n", file);
sprintf(s1, "%d", c -> rows);
sprintf(s2, "%d", c -> columns);

fputs(strcat(strcat(s1, " "), strcat(s2, "\n")), file);
fputs("255\n", file);
  for(int i = 0; i < c -> rows; i++){
   for(int j = 0; j < c -> columns; j++){
     if (j < (c -> columns - 1)){
      sprintf(s1, "%f", c ->data[i][j]);
      fputs(strcat(s1, " "), file);
     } else{
       sprintf(s1, "%f", c ->data[i][j]);
      fputs(strcat(s1, "\n"), file);

      }


    }


  }

  fclose(file);





}

