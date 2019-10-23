//tic tac toe (multiplayer) without function
#include <stdio.h>
#include <stdlib.h>

#define comp 3
int main () {
char a[3][3] = {32,32,32,32,32,32,32,32,32}, p1move = 'X', p2move = 'O';
char compmove = 'O';
int player, i , j, pchoice;
player = 1;
int block;
printf("Two player Tic Tac Toe\n");
printf(" 1 | 2 | 3\n");
printf("------------\n");
printf(" 4 | 5 | 6\n");
printf("------------\n");
printf(" 7 | 8 | 9\n");
printf("Would you like to play with your friend or the DUMB computer?\n1. Friend\n2. Computer\n");
printf("Enter Here: ");
scanf("%d", &pchoice);
printf("\n");
if (pchoice == 1) {
ln:
//This is for player 1 (HUMAN VS HUMAN)
if (player == 1) {
printf("Player 1, choose the block to put in %c: ", p1move);
scanf("%d", &block);
printf("\n");
switch (block) {
case 1:
if(a[0][0] != ' ') {
    printf("Invalid input, please try again\n");
    goto ln;
}
else {
    a[0][0] = p1move;
}

        break;
case 2:
if(a[0][1] != ' ') {
    printf("Invalid input, please try again\n");
    goto ln;
}
else {
    a[0][1] = p1move;
}

        break;
case 3:
if(a[0][2] != ' ') {
    printf("Invalid input, please try again\n");
    goto ln;
}
else {
    a[0][2] = p1move;
}
        break;
case 4:
if(a[1][0] != ' ') {
    printf("Invalid input, please try again\n");
    goto ln;
}
else {
    a[1][0] = p1move;
}
        break;
case 5:
if(a[1][1] != ' ') {
    printf("Invalid input, please try again\n");
    goto ln;
}
else {
    a[1][1] = p1move;
}
        break;
case 6:
if(a[1][2] != ' ') {
    printf("Invalid input, please try again\n");
    goto ln;
}
else {
    a[1][2] = p1move;
}
        break;
case 7:
if(a[2][0] != ' ') {
    printf("Invalid input, please try again\n");
    goto ln;
}
else {
    a[2][0] = p1move;
}

        break;
case 8:
if(a[2][1] != ' ') {
    printf("Invalid input, please try again\n");
    goto ln;
}
else {
    a[2][1] = p1move;
}
        break;
case 9:
if(a[2][2] != ' ') {
    printf("Invalid input, please try again\n");
    goto ln;
}
else {
    a[2][2] = p1move;
}
        break;
default:
printf("Please enter a valid input\n\n");
goto ln;
        break;
}
//The end of Player 1
}
//This is for player 2
else if(player == 2) {
    printf("Player 2, choose the block to put in %c: ", p2move);
scanf("%d", &block);
printf("\n");
switch (block) {
case 1:
if(a[0][0] != ' ') {
    printf("Invalid input, please try again\n");
    goto ln;
}
else {
    a[0][0] = p2move;
}

        break;
case 2:
if(a[0][1] != ' ') {
    printf("Invalid input, please try again\n");
    goto ln;
}
else {
    a[0][1] = p2move;
}

        break;
case 3:
if(a[0][2] != ' ') {
    printf("Invalid input, please try again\n");
    goto ln;
}
else {
    a[0][2] = p2move;
}
        break;
case 4:
if(a[1][0] != ' ') {
    printf("Invalid input, please try again\n");
    goto ln;
}
else {
    a[1][0] = p2move;
}
        break;
case 5:
if(a[1][1] != ' ') {
    printf("Invalid input, please try again\n");
    goto ln;
}
else {
    a[1][1] = p2move;
}
        break;
case 6:
if(a[1][2] != ' ') {
    printf("Invalid input, please try again\n");
    goto ln;
}
else {
    a[1][2] = p2move;
}
        break;
case 7:
if(a[2][0] != ' ') {
    printf("Invalid input, please try again\n");
    goto ln;
}
else {
    a[2][0] = p2move;
}

        break;
case 8:
if(a[2][1] != ' ') {
    printf("Invalid input, please try again\n");
    goto ln;
}
else {
    a[2][1] = p2move;
}
        break;
case 9:
if(a[2][2] != ' ') {
    printf("Invalid input, please try again\n");
    goto ln;
}
else {
    a[2][2] = p2move;
}
        break;
default:
printf("Please enter a valid input\n\n");
goto ln;
        break;
}
}
//End of Player 2
}
if (pchoice == 2) {
lnc:
//This is for player 1 (with computer!)
if (player == 1) {
    lnc1:
printf("Player 1, choose the block to put in %c: ", p1move);
scanf("%d", &block);
printf("\n");
switch (block) {
case 1:
if(a[0][0] != ' ') {
    printf("Invalid input, please try again\n");
    goto lnc1;
}
else {
    a[0][0] = p1move;
}

        break;
case 2:
if(a[0][1] != ' ') {
    printf("Invalid input, please try again\n");
    goto lnc1;
}
else {
    a[0][1] = p1move;
}

        break;
case 3:
if(a[0][2] != ' ') {
    printf("Invalid input, please try again\n");
    goto lnc1;
}
else {
    a[0][2] = p1move;
}
        break;
case 4:
if(a[1][0] != ' ') {
    printf("Invalid input, please try again\n");
    goto lnc1;
}
else {
    a[1][0] = p1move;
}
        break;
case 5:
if(a[1][1] != ' ') {
    printf("Invalid input, please try again\n");
    goto lnc1;
}
else {
    a[1][1] = p1move;
}
        break;
case 6:
if(a[1][2] != ' ') {
    printf("Invalid input, please try again\n");
    goto lnc1;
}
else {
    a[1][2] = p1move;
}
        break;
case 7:
if(a[2][0] != ' ') {
    printf("Invalid input, please try again\n");
    goto lnc1;
}
else {
    a[2][0] = p1move;
}

        break;
case 8:
if(a[2][1] != ' ') {
    printf("Invalid input, please try again\n");
    goto lnc1;
}
else {
    a[2][1] = p1move;
}
        break;
case 9:
if(a[2][2] != ' ') {
    printf("Invalid input, please try again\n");
    goto lnc1;
}
else {
    a[2][2] = p1move;
}
        break;
default:
printf("Please enter a valid input\n\n");
goto lnc1;
        break;
}
}
//This is for computer
if(player == comp) {

    case9:
    block = rand() %9 + 1;
    printf("Computer is placing %c in block %d: \n", compmove, block);

    cpretry:
    switch(block) {
    case 1:
if(a[0][0] != ' ') {
    block = rand() % 9 + 1;
    goto cpretry;
}
else {
    a[0][0] = compmove;
}

        break;
case 2:
if(a[0][1] != ' ') {
    block = rand() % 9 + 1;
    goto cpretry;
}
else {
    a[0][1] = compmove;
}

        break;
case 3:
if(a[0][2] != ' ') {
    block = rand() % 9 + 1;
    goto cpretry;
}
else {
    a[0][2] = compmove;
}
        break;
case 4:
if(a[1][0] != ' ') {
    block = rand() % 9 + 1;
    goto cpretry;
}
else {
    a[1][0] = compmove;
}

        break;
case 5:
if(a[1][1] != ' ') {
    block = rand() % 9 + 1;
    goto cpretry;
}
else {
    a[1][1] = compmove;
}
        break;
case 6:
if(a[1][2] != ' ') {
    block = rand() % 9 + 1;
    goto cpretry;
}
else {
    a[1][2] = compmove;
}
        break;
case 7:
if(a[2][0] != ' ') {
    block = rand() % 9 + 1;
    goto cpretry;
}
else {
    a[2][0] = compmove;
}

        break;
case 8:
if(a[2][1] != ' ') {
    block = rand() % 9 + 1;
    goto cpretry;
}
else {
    a[2][1] = compmove;
}

        break;
case 9:
if(a[2][2] != ' ') {
    goto case9;
}
else {
    a[2][2] = compmove;
}
break;
default:
    printf("Please enter a valid input!\n");
        break;
}
}
}


printf(" %c | %c | %c\n", a[0][0], a[0][1], a[0][2]);
printf("------------\n");
printf(" %c | %c | %c\n", a[1][0], a[1][1], a[1][2]);
printf("------------\n");
printf(" %c | %c | %c\n", a[2][0], a[2][1], a[2][2]);
printf("\n");

if (a[0][0] == a[0][1] && a[0][0] == a[0][2] && a[0][2]  != ' '
|| a[1][0] == a[1][1] && a[1][0] == a[1][2] && a[1][2] != ' '
|| a[2][0] == a[2][1] && a[2][0] == a[2][2] && a[2][2] != ' '
|| a[0][0] == a[1][0] && a[0][0] == a[2][0] && a[2][0] != ' '
|| a[0][1] == a[1][1] && a[0][1] == a[2][1] && a[2][1] != ' '
|| a[0][2] == a[1][2] && a[0][2] == a[2][2] && a[2][2] != ' '
|| a[0][0] == a[1][1] && a[0][0] == a[2][2] && a[2][2] != ' '
|| a[0][2] == a[1][1] && a[0][2] == a[2][0] && a[2][0] != ' '
)
{
    if(player == comp) {
    printf("Game Over, Computer Wins!\n");
    return 0;
    }
    else if (player == 1 || player == 2){
        printf("Game Over, Player %d wins", player);
        return 0;
    }
}

else if (a[0][0] != ' ' && a[0][1] != ' ' && a[0][2] != ' '
      && a[1][0] != ' ' && a[1][1] != ' ' && a[1][2] != ' '
      && a[2][0] != ' ' && a[2][2] != ' ' && a[2][2] != ' ' ) {

    printf("It's a draw!");
    return 0;
}
if (pchoice == 1) {
if (player == 1) {
   player = 2;
    goto ln; //line 19
}
else {
    player = 1;
    goto ln;
}
}
if (pchoice == 2) {
    if (player == 1) {
   player = comp;
    goto lnc; //line 19
}
else {
    player = 1;
    goto lnc;
}

return 0;
}

}
