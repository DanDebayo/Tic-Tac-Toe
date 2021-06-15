//// PROGRAM BEGINS HERE

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
void inputcopy();
void printboard();
int symbol();
int checkwin();
char board[3][3] = {' ',' ',' ',
                    ' ',' ',' ',
                    ' ',' ',' ' };
int player;
int computerMoves();
char mark;
int randX;
int randY;
void Game();
int i;
char retry;
string Space;
int valid;

int main() {


/*
  GAME
 */
    Game();
/*
 * THIS IS TO ASK TO PLAY AGAIN
 */
    cout << "Would you like to play again ? (Y/N)" << endl;

    cin >> retry;

    while (retry > 0) {  // while retry is bigger than 0

        if (retry == 'Y') {
            board[0][0]= ' ';
            board[0][1]= ' ';
            board[0][2]= ' ';
            board[1][0]= ' ';
            board[1][1]= ' ';
            board[1][2]= ' ';
            board[2][0]= ' ';
            board[2][1]= ' ';
            board[2][2]= ' ';

            Game();
            cout << "Would you like to play again ? (Y/N)" << endl;

            cin >> retry;

        } else if (retry == 'N') {
            cout << "Thank you for playing" << endl;
            break;
        } else {
            cout << "Invalid answer. Please try again" << endl;
            cout << "(Y/N)" << endl;

            cin >> retry;
        }
    }
    return 0;
}

/*
 * INPUTCOPY TO SEE YOUR LOCATION
*/
void inputcopy() {
    cout << "input copy" << endl;
    cout << "     A     B     C   " << endl;
    cout << "        |     |     " << endl;
    cout << "1    A1 |  B1 |  C1 " << endl;
    cout << "   _____|_____|_____" << endl;
    cout << "        |     |     " << endl;
    cout << "2    A2 |  B2 |  C2 " << endl;
    cout << "   _____|_____|_____" << endl;
    cout << "        |     |     " << endl;
    cout << "3    A3 |  B3 |  C3 " << endl;
    cout << "        |     |     " << endl;

}
/*
 * THE BOARD TO HAVE YOUR X AND O
 */
void printboard() {
    cout << "     |     |     " << endl;
    cout << "  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << endl;
    cout << "     |     |     " << endl << endl;
}

/*
 * THIS IS TO CHECK FOR WIN
 */
int checkwin() {
    if (board[0][0] == mark && board[0][1] == mark && board[0][2] == mark)
        return 1;
    if (board[1][0] == mark && board[1][1] == mark && board[1][2] == mark)
        return 1;
    if (board[2][0] == mark && board[2][1] == mark && board[2][2] == mark)
        return 1;

    if (board[0][0] == mark && board[1][0] == mark && board[2][0] == mark)
        return 1;
    if (board[0][1] == mark && board[1][1] == mark && board[2][1] == mark)
        return 1;
    if (board[0][2] == mark && board[1][2] == mark && board[2][2] == mark)
        return 1;

    if (board[0][0] == mark && board[1][1] == mark && board[2][2] == mark)
        return 1;
    if (board[0][2] == mark && board[1][1] == mark && board[2][0] == mark)
        return 1;
    if(board[0][0] != ' ' && board[0][1] != ' ' && board[0][2] != ' ' && board[1][0] != ' ' && board[1][1] != ' ' && board[1][2] != ' ' && board[2][0] != ' ' && board[2][1] != ' ' && board[2][2] != ' ')
        return 0;
    else{
        return -1;
    }
}
/*
 * THIS ASSIGN THE COLUMN AND ROW TO THE MARK OF A PERSON
 */
int symbol(){
    if (Space == "A1"){
        if (board[0][0] == ' '){
            board[0][0] = mark;
            return 0;}
        else{
            cout << "Moves already taken" << endl;
            return -1;
        }
    }
    if (Space == "A2"){
        if (board[1][0] == ' '){
            board[1][0] = mark;
            return 0;}
        else{
            cout << "Moves already taken" << endl;
            return -1;
        }
    }
    if (Space == "A3"){
        if (board[2][0] == ' '){
            board[2][0] = mark;
            return 0;}
        else{
            cout << "Moves already taken" << endl;
            return -1;
        }
    }
    if (Space == "B1"){
        if (board[0][1] == ' '){
            board[0][1] = mark;
            return 0;}
        else{
            cout << "Moves already taken" << endl;
            return -1;
        }
    }
    if (Space == "B2"){
        if (board[1][1] == ' '){
            board[1][1] = mark;
            return 0;}
        else{
            cout << "Moves already taken" << endl;
            return -1;
        }
    }
    if (Space == "B3"){
        if (board[2][1] == ' '){
            board[2][1] = mark;
            return 0;}
        else{
            cout << "Moves already taken" << endl;
            return -1;
        }
    }
    if (Space == "C1"){
        if (board[0][2] == ' '){
            board[0][2] = mark;
            return 0;}
        else{
            cout << "Moves already taken" << endl;
            return -1;
        }
    }
    if (Space == "C2") {
        if (board[1][2] == ' '){
            board[1][2] = mark;
            return 0;}
        else{
            cout << "Moves already taken" << endl;
            return -1;
        }
    }
    if (Space == "C3" ){
        if (board[2][2] == ' '){
            board[2][2] = mark;
            return 0;}
        else{
            cout << "Moves already taken" << endl;
            return -1;
        }
    }
    else if(Space != "A1" || Space != "A2" || Space != "A3" || Space != "B1" || Space != "B2" || Space != "B3" || Space != "C1" || Space != "C2" || Space != "C3"){
        cout << "Invalid move" << endl;
        cout << "Please Try Again" << endl;

        return -1;
    }

}
/*
 * THIS IS TO BLOCK HUMAN MOVES BY THE COMPUTER
 */
int computerMoves(){
    if (board[0][0] == board[0][1]){
        if (board[0][0] == 'X' && board[0][1] == 'X'){
            if(board [0][2] == ' ') {
                board[0][2] = 'O';
            }else if ((board [0][2] == 'X') || (board [0][2] == 'O')){
                for (int i = 0; i <= 1000; i++) {
                    srand(i);
                    randX = rand() % 3;
                    randY = rand() % 3;
                    if (board[randY][randX] == ' ') {
                        board[randY][randX] = 'O';
                        return 0;
                    }
                }
            }
            return 0;
        }
    }
    if (board[0][0] == board[0][2]) {
        if (board[0][0] == 'X' && board[0][2] == 'X') {
            if (board [0][1] == ' ') {
                board[0][1] = 'O';
            }else if ((board [0][2] == 'X') || (board [0][2] == 'O')){
                for (int i = 0; i <= 1000; i++) {
                    srand(i);
                    randX = rand() % 3;
                    randY = rand() % 3;
                    if (board[randY][randX] == ' ') {
                        board[randY][randX] = 'O';
                        return 0;
                    }
                }
            }
            return 0;
        }
    }
    if (board[0][1] == board[0][2]) {
        if (board[0][1] == 'X' && board[0][2] == 'X') {
            if (board [0][0] == ' ') {
                board[0][0] = 'O';
            }else if ((board [0][0] == 'X') || (board [0][0] == 'O')){
                for (int i = 0; i <= 1000; i++) {
                    srand(i);
                    randX = rand() % 3;
                    randY = rand() % 3;
                    if (board[randY][randX] == ' ') {
                        board[randY][randX] = 'O';
                        return 0;
                    }
                }
            }
            return 0;
        }
    }
    if (board[0][0] == board[1][0]) {
        if (board[0][0] == 'X' && board[1][0] == 'X') {
            if (board [2][0] == ' ') {
                board[2][0] = 'O';
            }else if ((board [2][0] == 'X') || (board [2][0] == 'O')){
                for (int i = 0; i <= 1000; i++) {
                    srand(i);
                    randX = rand() % 3;
                    randY = rand() % 3;
                    if (board[randY][randX] == ' ') {
                        board[randY][randX] = 'O';
                        return 0;
                    }
                }
            }
            return 0;
        }
    }
    if (board[0][0] == board[2][0]) {
        if (board[0][0] == 'X' && board[2][0] == 'X') {
            if(board [1][0] == ' ') {
                board[1][0] = 'O';
            }else if ((board [1][0] == 'X') || (board [1][0] == 'O')){
                for (int i = 0; i <= 1000; i++) {
                    srand(i);
                    randX = rand() % 3;
                    randY = rand() % 3;
                    if (board[randY][randX] == ' ') {
                        board[randY][randX] = 'O';
                        return 0;
                    }
                }
            }
            return 0;
        }
    }
    if (board[1][0] == board[2][0]) {
        if (board[1][0] == 'X' && board[2][0] == 'X') {
            if (board [0][0] == ' ') {
                board[0][0] = 'O';
            }else if ((board [0][0] == 'X') || (board [0][0] == 'O')){
                for (int i = 0; i <= 1000; i++) {
                    srand(i);
                    randX = rand() % 3;
                    randY = rand() % 3;
                    if (board[randY][randX] == ' ') {
                        board[randY][randX] = 'O';
                        return 0;
                    }
                }
            }
            return 0;
        }
    }
    if (board[2][0] == board[2][2]) {
        if (board[2][0] == 'X' && board[2][2] == 'X') {
            if(board [2][1] == ' ') {
                board[2][1] = 'O';
            }else if ((board [2][1] == 'X') || (board [2][1] == 'O')){
                for (int i = 0; i <= 1000; i++) {
                    srand(i);
                    randX = rand() % 3;
                    randY = rand() % 3;
                    if (board[randY][randX] == ' ') {
                        board[randY][randX] = 'O';
                        return 0;
                    }
                }
            }
            return 0;
        }
    }
    if (board[2][0] == board[2][1]) {
        if (board[2][0] == 'X' && board[2][1] == 'X') {
            if(board [2][2] == ' ') {
                board[2][2] = 'O';
            }else if ((board [2][2] == 'X') || (board [2][2] == 'O')){
                for (int i = 0; i <= 1000; i++) {
                    srand(i);
                    randX = rand() % 3;
                    randY = rand() % 3;
                    if (board[randY][randX] == ' ') {
                        board[randY][randX] = 'O';
                        return 0;
                    }
                }
            }
            return 0;
        }
    }
    if (board[2][1] == board[2][2]) {
        if (board[2][1] == 'X' && board[2][2] == 'X') {
            if(board [2][0] == ' ') {
                board[2][0] = 'O';
            }else if ((board [2][0] == 'X') || (board [2][0] == 'O')){
                for (int i = 0; i <= 1000; i++) {
                    srand(i);
                    randX = rand() % 3;
                    randY = rand() % 3;
                    if (board[randY][randX] == ' ') {
                        board[randY][randX] = 'O';
                        return 0;
                    }
                }
            }
            return 0;
        }
    }
    if (board[2][2] == board[1][2]) {
        if (board[2][2] == 'X' && board[1][2] == 'X') {
            if (board [0][2] == ' ') {
                board[0][2] = 'O';
            }else if ((board [0][2] == 'X') || (board [0][2] == 'O')){
                for (int i = 0; i <= 1000; i++) {
                    srand(i);
                    randX = rand() % 3;
                    randY = rand() % 3;
                    if (board[randY][randX] == ' ') {
                        board[randY][randX] = 'O';
                        return 0;
                    }
                }
            }
            return 0;
        }
    }
    if (board[2][2] == board[0][2]) {
        if (board[2][2] == 'X' && board[0][2] == 'X') {
            if (board [1][2] == ' ') {
                board[1][2] = 'O';
            }else if ((board [1][2] == 'X') || (board [1][2] == 'O')){
                for (int i = 0; i <= 1000; i++) {
                    srand(i);
                    randX = rand() % 3;
                    randY = rand() % 3;
                    if (board[randY][randX] == ' ') {
                        board[randY][randX] = 'O';
                        return 0;
                    }
                }
            }
            return 0;
        }
    }
    if (board[0][2] == board[1][2]) {
        if (board[0][2] == 'X' && board[1][2] == 'X') {
            if(board [2][2] == ' ') {
                board[2][2] = 'O';
            }else if ((board [2][2] == 'X') || (board [2][2] == 'O')){
                for (int i = 0; i <= 1000; i++) {
                    srand(i);
                    randX = rand() % 3;
                    randY = rand() % 3;
                    if (board[randY][randX] == ' ') {
                        board[randY][randX] = 'O';
                        return 0;
                    }
                }
            }
            return 0;
        }
    }
    if (board[1][1] == board[0][2]) {
        if (board[1][1] == 'X' && board[0][2] == 'X') {
            if (board [2][0] == ' ') {
                board[2][0] = 'O';
            }else if ((board [2][0] == 'X') || (board [2][0] == 'O')){
                for (int i = 0; i <= 1000; i++) {
                    srand(i);
                    randX = rand() % 3;
                    randY = rand() % 3;
                    if (board[randY][randX] == ' ') {
                        board[randY][randX] = 'O';
                        return 0;
                    }
                }
            }
            return 0;
        }
    }
    if (board[1][1] == board[2][0]) {
        if (board[1][1] == 'X' && board[2][0] == 'X') {
            if (board [0][2] == ' ') {
                board[0][2] = 'O';
            }else if ((board [0][2] == 'X') || (board [0][2] == 'O')){
                for (int i = 0; i <= 1000; i++) {
                    srand(i);
                    randX = rand() % 3;
                    randY = rand() % 3;
                    if (board[randY][randX] == ' ') {
                        board[randY][randX] = 'O';
                        return 0;
                    }
                }
            }
            return 0;
        }
    }
    if (board[0][2] == board[2][0]) {
        if (board[0][2] == 'X' && board[2][0] == 'X') {
            if(board [1][1] == ' ') {
                board[1][1] = 'O';
            }else if ((board [1][1] == 'X') || (board [1][1] == 'O')){
                for (int i = 0; i <= 1000; i++) {
                    srand(i);
                    randX = rand() % 3;
                    randY = rand() % 3;
                    if (board[randY][randX] == ' ') {
                        board[randY][randX] = 'O';
                        return 0;
                    }
                }
            }
            return 0;
        }
    }
    if (board[0][0] == board[1][1]) {
        if (board[0][0] == 'X' && board[1][1] == 'X') {
            if(board [2][2] == ' ') {
                board[2][2] = 'O';
            }else if ((board [2][2] == 'X') || (board [2][2] == 'O')){
                for (int i = 0; i <= 1000; i++) {
                    srand(i);
                    randX = rand() % 3;
                    randY = rand() % 3;
                    if (board[randY][randX] == ' ') {
                        board[randY][randX] = 'O';
                        return 0;
                    }
                }
            }
            return 0;
        }
    }
    if (board[1][1] == board[2][2]) {
        if (board[1][1] == 'X' && board[2][2] == 'X') {
            if (board [0][0] == ' ') {
                board[0][0] = 'O';
            }else if ((board [0][0] == 'X') || (board [0][0] == 'O')){
                for (int i = 0; i <= 1000; i++) {
                    srand(i);
                    randX = rand() % 3;
                    randY = rand() % 3;
                    if (board[randY][randX] == ' ') {
                        board[randY][randX] = 'O';
                        return 0;
                    }
                }
            }
            return 0;
        }
    }
    if (board[0][0] == board[2][2]) {
        if (board[0][0] == 'X' && board[2][2] == 'X') {
            if(board [1][1] == ' ') {
                board[1][1] = 'O';
            }else if ((board [1][1] == 'X') || (board [1][1] == 'O')){
                for (int i = 0; i <= 1000; i++) {
                    srand(i);
                    randX = rand() % 3;
                    randY = rand() % 3;
                    if (board[randY][randX] == ' ') {
                        board[randY][randX] = 'O';
                        return 0;
                    }
                }
            }
            return 0;
        }
    }
    if (board[1][0] == board[1][1]) {
        if (board[1][0] == 'X' && board[1][1] == 'X') {
            if(board [1][2] == ' ') {
                board[1][2] = 'O';
            }else if ((board [1][2] == 'X') || (board [1][2] == 'O')){
                for (int i = 0; i <= 1000; i++) {
                    srand(i);
                    randX = rand() % 3;
                    randY = rand() % 3;
                    if (board[randY][randX] == ' ') {
                        board[randY][randX] = 'O';
                        return 0;
                    }
                }
            }
            return 0;
        }
    }
    if (board[1][0] == board[1][2]) {
        if (board[1][0] == 'X' && board[1][2] == 'X') {
            if(board [1][1] == ' ') {
                board[1][1] = 'O';
            }else if ((board [1][1] == 'X') || (board [1][1] == 'O')){
                for (int i = 0; i <= 1000; i++) {
                    srand(i);
                    randX = rand() % 3;
                    randY = rand() % 3;
                    if (board[randY][randX] == ' ') {
                        board[randY][randX] = 'O';
                        return 0;
                    }
                }
            }
            return 0;
        }
    }
    if (board[1][2] == board[1][1]) {
        if (board[1][2] == 'X' && board[1][1] == 'X') {
            if(board [1][0] == ' ') {
                board[1][0] = 'O';
            }else if ((board [1][0] == 'X') || (board [1][0] == 'O')){
                for (int i = 0; i <= 1000; i++) {
                    srand(i);
                    randX = rand() % 3;
                    randY = rand() % 3;
                    if (board[randY][randX] == ' ') {
                        board[randY][randX] = 'O';
                        return 0;
                    }
                }
            }
            return 0;
        }
    }
    if (board[0][1] == board[2][1]) {
        if (board[0][1] == 'X' && board[2][1] == 'X') {
            if(board [1][1] == ' ') {
                board[1][1] = 'O';
            }else if ((board [1][1] == 'X') || (board [1][1] == 'O')){
                for (int i = 0; i <= 1000; i++) {
                    srand(i);
                    randX = rand() % 3;
                    randY = rand() % 3;
                    if (board[randY][randX] == ' ') {
                        board[randY][randX] = 'O';
                        return 0;
                    }
                }
            }
            return 0;
        }
    }
    if (board[0][1] == board[1][1]) {
        if (board[0][1] == 'X' && board[1][1] == 'X') {
            if(board [2][1] == ' ') {
                board[2][1] = 'O';
            }else if ((board [2][1] == 'X') || (board [2][1] == 'O')){
                for (int i = 0; i <= 1000; i++) {
                    srand(i);
                    randX = rand() % 3;
                    randY = rand() % 3;
                    if (board[randY][randX] == ' ') {
                        board[randY][randX] = 'O';
                        return 0;
                    }
                }
            }
            return 0;
        }
    }
    if (board[1][1] == board[2][1]) {
        if (board[1][1] == 'X' && board[2][1] == 'X') {
            if(board [0][1] == ' ') {
                board[0][1] = 'O';
            }else if ((board [0][1] == 'X') || (board [0][1] == 'O')){
                for (int i = 0; i <= 1000; i++) {
                    srand(i);
                    randX = rand() % 3;
                    randY = rand() % 3;
                    if (board[randY][randX] == ' ') {
                        board[randY][randX] = 'O';
                        return 0;
                    }
                }
            }
            return 0;
        }
    }

    for (int i = 0; i <= 1000; i++) {
        srand(i);
        randX = rand() % 3;
        randY = rand() % 3;
        if (board[randY][randX] == ' ') {
            board[randY][randX] = 'O';
            return 0;
        }
    }
}
void Game(){
    cout << "Welcome to Tic Tac Toe!!" << endl;

    cout << "This is the Input board to know where your mark is going." << endl;

    inputcopy();

    srand((unsigned)time(0));

    player = 1 + (rand() % 2);

    do {


/*
 * THIS IS TO ASK FOR MOVES
 */

        if(player == 1) {
            printboard();
            cout << "Human please input your Space: ";
            cin >> Space;
            cout << endl;

        }
        else if(player == 2){
            computerMoves();
        }
/*
 * ASSIGNS A MARK TO HUMAN AND COMPUTER
 */
        if (player == 1){
            mark = 'X';
        }
        else if (player == 2){
            mark = 'O';
        }

        if (player == 1){
            valid = symbol();
        }
/*
******While symbol returns -1 the input is been asked from the user again
******The loop will ask for another input from the player
*/
        while(valid == -1 ){
            if (player == 1){
                cout << "Human please input Space";
                cin >> Space;
                cout << endl;
                valid = symbol();
            }

        }

/*
 * THIS IS TO TELL WHO WINS OR DRAWS
 */
        i = checkwin();
        if (player == 2){
            player --;
        }else{
            player ++;
        }
    } while (i == -1);

    printboard();
    if (i == 1) {
        if (player == 2){
            cout << "HUMAN WINS " << endl;
        }else{
            cout << "COMPUTER WINS" << endl;
        }
    }
    else {

        cout << "GAME DRAW" << endl;

    }
/*
 * THIS IS TO ASK TO PLAY AGAIN
 */

}
////    PROGRAM ENDS HERE