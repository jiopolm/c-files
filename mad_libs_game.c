#include <stdio.h>


//demo mad libs game,can be expanded
int mad_libs_game()
{
       char color[20];
       char pnoun[20]; //pnoun= plural noun
       char Favfood[20];
       
       printf("Enter a color lol: ");
       scanf("%s", color);
       printf("Enter a plural: ");
       scanf("%s", pnoun);
       printf("Enter a favorite food: ");
       scanf("%s",Favfood);
       
       
       
       
       printf("Roses are %s\n", color);
       printf("%s are blue\n", pnoun);
       printf("my favorite food is %s\n", Favfood);
      
  
  return 0;
  
}
