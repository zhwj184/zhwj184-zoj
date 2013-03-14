#include <stdio.h>

int i,j,k,m,n,done,board[5][5];

main(){
  scanf("%d",&n);
  while (n--) {
     done = 0;
     for (i=0;i<5;i++) for (j=0;j<5;j++)
        if (i != 2 || j != 2) scanf("%d",&board[i][j]);
     for (k=0;k<75;k++) {
        scanf("%d",&m);
        for (i=0;i<5;i++) for (j=0;j<5;j++)
           if (board[i][j] == m) board[i][j] = 0;
        if (!done) {
           for (i=0;i<5;i++) {
              for (j=0;j<5 && !board[i][j];j++);
              if (j == 5) break;
              for (j=0;j<5 && !board[j][i];j++);
              if (j == 5) break;
              for (j=0;j<5 && !board[j][j];j++);
              if (j == 5) break;
              for (j=0;j<5 && !board[j][4-j];j++);
              if (j == 5) break;
           }
           if (i < 5) {
              printf("BINGO after %d numbers announced\n",k+1);
              done = 1;
           }
         }
      }
   }
   if (1 == scanf(" %c",&n)) printf("Extra input!\n");
}

