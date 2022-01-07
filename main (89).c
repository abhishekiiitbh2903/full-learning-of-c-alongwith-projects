#include <stdio.h>
#include <time.h>
int 
generateRandomNumber (int n) 
{
  
 
 
srand (time (NULL));
  
 
 
return rand () % n;

 
 
}


 
 
 
 
int 
greater (char1, char2) 
{
  
 
if (char1 == char2)
    
    {
      
 
return -1;
    
 
 
}
  
 
 
if ((char1 == 'r') && (char2 == 's'))
    
    {
      
 
return 1;
    
 
 
}
  
 
 
  else if ((char2 == 'r') && (char1 == 's'))
    
    {
      
 
return 0;
    
 
}
  
 
 
 
 
  else if ((char1 == 'p') && (char2 == 'r'))
    
    {
      
 
return 1;
    
 
 
}
  
 
 
  else if ((char2 == 'p') && (char1 == 'r'))
    
    {
      
 
return 0;
    
 
 
 
 
}
  
 
  else if ((char1 == 's') && (char2 == 'p'))
    
    {
      
 
return 1;
    
 
 
}
  
 
 
  else
    ((char1 == 's') && (char2 == 'p'));
  
  {
    
 
return 0;
  
 
 
 
 
}

 
}


 
int 

main () 
{
  
 
 
int playerscore = 0, compscore = 0, temp;
  
 
 
char playerchar, compchar;
  
 
 
char dict[] = { 'r', 'p', 's' };
  
 
 
printf ("WELCOME TO ROCK , PAPER , SCISSORS .\n");
  
 
 
for (int i = 0; i < 3; i++)
    
 
 
    {
      
 
 
printf ("player 1's turn :\n");
      
 
 
printf ("Choose 1 for rock , 2 for paper and 3 for scissors \n");
      
 
 
scanf ("%d", &temp);
      
 
 
playerchar = dict[temp - 1];
      
printf ("you chose %c\n\n", playerchar);
      
 
 
printf ("computer's turn :\n");
      
 
 
printf ("Choose 1 for rock , 2 for paper and 3 for scissors \n");
      
 
 
temp = generateRandomNumber (3) + 1;
      
 
 
compchar = dict[temp - 1];
      
printf ("CPU chose %c\n\n", compchar);
      
 
 
 
if (greater (compchar, playerchar) == 1)
	
 
	{
	  
 
 
compscore += 1;
	  
printf ("CPU got it !!");
	  
 
printf ("you: %d\n, CPU: %d", playerscore, compscore);
	
 
}
      
 
 
      else if (greater (compchar, playerchar) == -1)
	
 
	{
	  
 
 
compscore += 1;
	  
 
 
playerscore += 1;
	  
 
printf ("it's a draw !!");
	  
printf ("you: %d\n, CPU: %d", playerscore, compscore);
	
}
      
 
 
      else
	
 
	{
	  
 
 
playerscore += 1;
	  
 
printf ("you got it !!");
	  
printf ("you: %d\n, CPU: %d", playerscore, compscore);
	
}
    
 
 
}
  
if (playerscore > compscore)
    {
      
printf ("you won , wohooo !!!!");
    
}
  
  else if (playerscore < compscore)
    {
      
printf ("CPU won , wohooo !!!!");
    
}
  
  else
    {
      
printf ("the game is drawn ");
    
}
  
 
 
return 0;

 
 
}


 
 
