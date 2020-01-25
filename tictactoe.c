/* Explanations *************************************************************************************************************************************
|
| The Tic-Tac-Toe board has 9 cells. We will assume that the cell numbering is as follows:
|
|   c0 | c1 | c2
|   ------------
|   c3 | c4 | c5   
|   ------------
|   c6 | c7 | c8
|
****************************************************************************************************************************************************/


/*=================================================================================================================================================*/


/* Includes ****************************************************************************************************************************************/

#include "Utilities.c"
/*-------------------------------------------------------------------------------------------------------------------------------------------------*/


/*=================================================================================================================================================*/

#include <stdio.h>   /* For standard input/output functions */

/***************************************************************************************************************************************************/




/* Definitions *************************************************************************************************************************************/

#define AUTHOR  ( "Onur Simsek" )  /* Author's name                                   */

#define EMPTY   ( ' '             )  /* Label for empty cells                           */
#define PLAYER1 ( 'X'             )  /* Label for player 1 and cells marked by player 1 */
#define PLAYER2 ( 'O'             )  /* Label for player 2 and cells marked by player 2 */

/***************************************************************************************************************************************************/




/* Type Definitions ********************************************************************************************************************************/

typedef unsigned char boolean ;

/***************************************************************************************************************************************************/




/* Global Variables ********************************************************************************************************************************/

char c0 , c1 , c2 , c3 , c4 , c5 , c6 , c7 , c8 ;  /* Cells of the Tic-Tac-Toe board */

/***************************************************************************************************************************************************/




/* Functions ***************************************************************************************************************************************/

/* Initializes the global variables. */

void initializeGlobalVariables ( void )
{
  /* TODO */
  /* ...  */
  c0=c1=c2=c3=c4=c5=c6=c7=c8=EMPTY ;
}

/*=================================================================================================================================================*/

/* Prints a banner including the author name. */

void printBanner ( void )
{
  printf(                                                                                   "\n"          ) ;
  printf( "*******************************************************************************" "\n"          ) ;
  printf( "* Tic-Tac-Toe                                                                 *" "\n"          ) ;
  printf( "* by %-72s *"                                                                    "\n" , AUTHOR ) ;
  printf( "*******************************************************************************" "\n"          ) ;
}

/*=================================================================================================================================================*/

/* Prints the current board configuration. */

void printBoard ( void )
{
  /* TODO */
  /* ...  */
  printf ("Cells\t\t\t");
  printf ("Board");
  printf ("\n.-----------.\t\t");
  printf (".-----------.\n");
  printf ("| 0 | 1 | 2 |\t\t");
  printf ("| %c | %c | %c |\n",c0,c1,c2);
  printf ("|-----------|\t\t");
  printf ("|-----------|\n");
  printf ("| 3 | 4 | 5 |\t\t");
  printf ("| %c | %c | %c |\n",c3,c4,c5);
  printf ("|-----------|\t\t");
  printf ("|-----------|\n");
  printf ("| 6 | 7 | 8 |\t\t");
  printf ("| %c | %c | %c |\n",c6,c7,c8);
  printf ("'-----------'\t\t");
  printf ("'-----------'\n");
  
 


}

/*=================================================================================================================================================*/

/* Gets the next move of "player", and marks it on the board.                     */
/* Loops (and asks again) if the input is not valid, or if the cell is not empty. */

void getNextMove ( char player )
{
  /* TODO */
  /* ...  */
  int i ;
  while (1) 
  {

  printf ("Player %c, enter your next move (0-8) : ",player);
  scanf ("%d",&i) ;
  if ((i< 0) || (i>8) )
  {
    printf ("Incorrect input! Please try again.\n");
    break ;
  }
  else if (sizeof(i)!= sizeof(int))
  {
    printf("Incorrect input! Please try again.\n");
    break ;
  }
  else if (i == 0 || i ==1 || i==2 || i==3 || i==4 || i==5 || i== 6 ||i==7 || i==8)
  {
    
    
    if (i == 0)
    {
      if (c0 == EMPTY)
      {
        c0 = player ;
      }
      else 
      {
        printf ("Cell is not empty! Please try again.\n");
        
      }
    }
    else if (i == 1)
    {
      if (c1 == EMPTY)
      {
        c1 = player;
      }
      else 
      {
        printf("Cell is not empty! Please try again.\n");
      
      }
    }
    else if (i == 2)
    {
      if (c2 == EMPTY)
      {
        c2 = player;
      }
      else 
      {
        printf("Cell is not empty! Please try again.\n");
        
      }
    }
    else if (i == 3)
    {
      if (c3 == EMPTY)
      {
        c3 = player;
      }
      else 
      {
        printf("Cell is not empty! Please try again.\n");
        
      }
    }
    else if (i == 4)
    {
      if (c4 == EMPTY)
      {
        c4 = player;
      }
      else 
      {
        printf("Cell is not empty! Please try again.\n");
        
      }
    }
    else if (i == 5)
    {
      if (c5 == EMPTY)
      {
        c5 = player;
      }
      else 
      {
        printf("Cell is not empty! Please try again.\n");
        
      }
    }
    else if (i == 6)
    {
      if (c6 == EMPTY)
      {
        c6 = player;
      }
      else 
      {
        printf("Cell is not empty! Please try again.\n");
        
      }
    }
    else if (i == 7)
    {
      if (c7 == EMPTY)
      {
        c7 = player;
      }
      else 
      {
        printf("Cell is not empty! Please try again.\n");
        
      }
    }
    else if (i == 8)
    {
      if (c8 == EMPTY)
      {
        c8 = player;
      }
      else 
      {
        printf("Cell is not empty! Please try again.\n");
        
      }
    }
    break ;
  }
  
 
    
  }
}
  



/*=================================================================================================================================================*/

/* Checks if one of the players wins the game, or if the board is full and the game ended with a draw. Prints how the game ended. */
/* Returns TRUE if the game ended, otherwise, does not print anything and just returns FALSE.                                     */

boolean checkAndPrintGameResult ( void )
{
  /* TODO */
  /* ...  */
  
    if (c0 == c4 && c4 == c8 && c0 == 'O' )
    {
      printf ("Player %c WINS (primary diagonal)!\n",'O');
      return TRUE ;
    }
    else if (c0 == c4 && c4 == c8 && c0 == 'X')
    { 
      printf ("Player %c WINS (primary diagonal)!\n",'X');
      return TRUE ;
    }
    else if (c2 == c4 && c4 == c6 && c2 == 'O')
    {
      printf ("Player %c WINS (secondary diagonal)!\n",'O');
      return TRUE ;
    }
    else if (c2 == c4 && c4 == c6 && c2 == 'X')
    {
      printf ("Player %c WINS (secondary diagonal)!\n",'X');
      return TRUE ;
    }
    else if (c0 == c3 && c3 == c6 && c0 == 'O')
    {
      printf ("Player %c WINS (left column)!\n",'O');
      return TRUE ;
    }
    else if (c0 == c3 && c3 == c6 && c0 == 'X')
    {
      printf ("Player %c WINS (left column)!\n",'X');
      return TRUE ;
    }
    else if (c1 == c4 && c4 == c7 && c1 == 'O')
    {
      printf ("Player %c WINS (middle column)!\n",'O');
      return TRUE;
    } 
    else if (c1 == c4 && c4 == c7 && c1 == 'X')
    {
      printf ("Player %c WINS (middle column)!\n",'X');
      return TRUE;
    }
    else if (c2 == c5 && c5 == c8 && c2 == 'O')
    {
      printf ("Player %c WINS (right column)!\n",'O');
      return TRUE;
    }
    else if (c2 == c5 && c5 == c8 && c2 == 'X')
    {
      printf ("Player %c WINS (right column)!\n",'X');
      return TRUE;
    }
    else if (c0 == c1 && c1 == c2 && c0 == 'O')
    {
      printf ("Player %c WINS (top row)!\n",'O');
      return TRUE;
    }
    else if (c0 == c1 && c1 == c2 && c0 == 'X')
    {
      printf ("Player %c WINS (top row)!\n",'X');
      return TRUE;
    }
    else if (c3 == c4 && c4 == c5 && c3 == 'O')
    {
      printf ("Player %c WINS (middle row)!\n",'O');
      return TRUE;
    }
    else if (c3 == c4 && c4 == c5 && c3 == 'X')
    {
      printf ("Player %c WINS (middle row)!\n",'X');
      return TRUE;
    }
    else if (c6 == c7 && c7 == c8 && c6 == 'O')
    {
      printf ("Player %c WINS (bottom row)!\n",'O');
      return TRUE;
    }
    else if (c6 == c7 && c7 == c8 && c6 == 'X')
    {
      printf ("Player %c WINS (bottom row)!\n",'X');
      return TRUE;
    }
  
    else if(c0 != EMPTY && c1 != EMPTY && c2 != EMPTY && c3 != EMPTY && c4 != EMPTY && c5 != EMPTY && c6 != EMPTY && c7 != EMPTY && c8 != EMPTY)
    {
      printf ("DRAW!\n");
      return TRUE ;
    }
  
    else 
    {
      return FALSE ;
    }
}

/***************************************************************************************************************************************************/




/* Main Function ***********************************************************************************************************************************/

/* Initializes the global variables.                                                                                                          */
/* Prints banner.                                                                                                                             */
/* Randomly chooses one of the players to start first.                                                                                        */
/* Asks each player to make a move in turn until the game finishes (prints the board configuration each time before a player makes her move). */
/* Prints the game result.                                                                                                                    */
/* Prints a goodbye message.                                                                                                                  */
/* Prints the number of random numbers that were generated during the game play.                                                              */

int main ( void )
{
  char currentPlayer = ( ( randomIntegerMinMaxUnBiased( 0 , 1 ) == 0 ) ? PLAYER1 : PLAYER2 ) ;

  initializeGlobalVariables() ;
  printBanner              () ;
  printBoard               () ;

  do
  {
    getNextMove( currentPlayer ) ;
    printBoard (               ) ;

    if   ( currentPlayer == PLAYER1 )  { currentPlayer = PLAYER2 ; }
    else                               { currentPlayer = PLAYER1 ; }
  }
  while ( checkAndPrintGameResult() == FALSE ) ;

  printf( "\nGood game. Have a nice day!\n" ) ;

  printf( "\n%d random numbers were generated during the game play.\n\n" , numberOfRandomNumbersGenerated ) ;

  return 0 ;
}

/***************************************************************************************************************************************************/
