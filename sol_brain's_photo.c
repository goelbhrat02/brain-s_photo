#include <stdio.h>

int main()
{
    int n,m;
    char inp[100][200];
    int i,j;
    int color=0,fade=0;
    
    // INPUT OF NUMBER OF ROW AND COLUMN:
    scanf("%d %d", &n,&m);              
    if((n>=1) && (n<=100) && (m>=1) && (m<=100))        //BOUNDING N & M IN LIMITS:
    {
        scanf("\n");
        for(i=0; i<n; i++)
        {
            for(j=0; j<=(m+(m-1)); j++)
            {
                scanf("%c", &inp[i][j]);                //INPUT OF MATRIX:
            }
            if(inp[i][j] == '\n')
            {
                inp[i][j] = '\0';
            }
        }
        
        
        for(i=0; i<n; i++)
        {
            j=0;
            while(inp[i][j] != '\0')
            {
                if((inp[i][j] == 'C') || (inp[i][j] == 'M') || (inp[i][j] == 'Y'))
                {
                    // COUNTING THE NUMBERS OF COLOR IMAGE.
                    color++;                
                }
                if((inp[i][j] == 'B') || (inp[i][j] == 'G') || (inp[i][j] == 'W'))
                {
                    // COUNTING THE NUMBER OF FADE IMAGES:
                    fade++;
                }
                j++;
            }
        }
        
        if((fade != 0) && (color == 0))             // FINAL ANSWER ACCORDING TO NUMBER OF FADE,COLOR IMAGES AND QUE. CONDITION.
        {
            printf("#Black&White");
        }
        if(color>0)
        {
            printf("#Color");
        }
    }
}
