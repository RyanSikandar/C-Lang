#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int rand_direction;
int row1, col1;
int ROW = 20;
int COL = 20;
char grid[20][20]; // max grid of 20-by-20;
char words_array [255][255];
char constant_words[255][255];
int no_of_words;

void return_constant_words() {


    constant_words[0][strlen("happy")] = "happy";
    constant_words[1][strlen("cheerful")] = "cheerful";
    constant_words[2][strlen("chipper")] = "chipper";
    constant_words[3][strlen("effervescent")] = "effervescent";
    constant_words[4][strlen("jaunty")] = "jaunty";
    constant_words[5][strlen("jolly")] = "jolly";

}



void input_words(){

    int i = 0;

    printf("Enter the number of words: ");
    scanf("%d", &no_of_words);

    printf("\nEnter the words:\n");


    for (i=0; i<no_of_words; i++){
        scanf("%s", &words_array[i]);

    }


}


void display_words(){

    int i;
    for (i=0;i<no_of_words;i++){

        printf("%s\n", words_array[i]);
    }
    printf("\n");

}



void generateGrid(int row, int col)
{

    int i, j;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            grid[i][j] = '-';
        }
    }
}



void display_grid(int row, int col)
{
    int i, j;
    for (int i=0; i<row;i++){
        for (int j=0; j<col; j++){
            printf("%c ", grid[i][j]);
        }
        printf("\n");
    }
}



void PlaceWords (){

    rand_direction = rand() % 4; // 0: Top-to-bottom 1: bottom-to-top 2: left-to-right 3: right-to-left
    row1 = rand() % ROW;
    col1 = rand() % COL;


}


void PlaceWord(char word[], int row, int col, int direction){


    int length = strlen(word);
    int i;

    int col_perm = col;
    int row_perm = row;

    // Testing/Debugging
    /*printf("\ndirection: %d", direction);
    printf("\nrow: %d", row);
    printf("\ncol: %d", col);
    printf("\nwordwillfit?%d\n\n", CheckWordWillFit(word, row_perm, col_perm, direction)); */

    int flag = 1;

    do {

    if (direction == 0){ // Top-to-bottom


        int space_left = (ROW-1) - row_perm; // ROW-1 as indexing starts with 0
        if ((length <= space_left+1) && (CheckWordWillFit(word, row_perm, col_perm, direction) == 1)){
            for (i=0; i<length; i++){
                grid[row][col] = word[i];
                row++;
            }

            flag = 0;
        }


        }

    if (direction == 1){  // bottom-to-top


        int space_left  = (ROW-1) - ((ROW-1)-row_perm); // ROW-1 as indexing starts with 0
        if (length <= space_left+1 && (CheckWordWillFit(word, row_perm, col_perm, direction) == 1)){
            for (i=0; i< length; i++){
                grid[row][col] = word[i];
                row--;
            }
            flag = 0;
        }


    }

    if (direction == 2){ //left-to-right

        int space_left = (COL -1) - col_perm;
        if ((length <= space_left+1) && (CheckWordWillFit(word, row_perm, col_perm, direction) == 1)){
            for (i=0; i< length;i++){
                grid[row][col] = word[i];
                col++;
            }
        }
        flag = 0;
    }

    if (direction == 3){ //right-to-right

        int space_left = (COL -1) - ((COL-1)-col_perm);
        if ((length <= space_left+1) && (CheckWordWillFit(word, row_perm, col_perm, direction) == 1)){
            for (i=0; i< length;i++){
                grid[row][col] = word[i];
                col--;
            }
        }
        flag = 0;
    }

    if (flag == 1){
        PlaceWords();
    }

    } while(flag != 0);

}


int CheckWordWillFit(char word[], int row, int col, int direction){

    int flag = 1; // 1 means the word will fit and there is no other word
                // 0 means the word will not fit as there is a word already present along that direction
    int i;

    int length = strlen(word);

    if (direction == 0){
            for (i=0;i<length;i++){
                if (grid[row][col] != '-'){
                    flag = 0;
                    return flag;
                }
                row++;
            }
    }

    if (direction == 1){
            for (i=0;i<length;i++){
                if (grid[row][col] != '-'){
                    flag = 0;
                    return flag;
                }
                row--;
            }
    }

    if (direction == 2){
            for (i=0;i<length;i++){
                if (grid[row][col] != '-'){
                    flag = 0;
                    return flag;
                }
                col++;
            }
    }

    if (direction == 3){
            for (i=0;i<length;i++){
                if (grid[row][col] != '-'){
                    flag = 0;
                    return flag;
                }
                col--;
            }
    }

    return flag;


}

void GridRandomFill(){

    int i, j;

    char vowels[] = "aeiou";
    int no_of_vowels = 5;

    char consonants[] = "bcdfghjklmnpqrstvwxyz";
    int no_of_consonants = 21;

    int probability[] = {1, 1, 0}; // 66% chance of random letter being vowel and 33% change of random letter being consonant


    for (i=0;i<ROW;i++){
        for(j=0;j<COL;j++) {

            if (grid[i][j] == '-'){

    int rand_num = rand() % 3;
    int rand_vowel = rand() % no_of_vowels;
    int rand_consonant = rand() % no_of_consonants;

    if (probability[rand_num] == 1){
            grid[i][j] = vowels[rand_vowel];

    }
    else {

        grid[i][j] = consonants[rand_consonant];

    }

            }

        }
    }


}


int main()
{

    srand(time(NULL));

    int i;

    input_words();
    display_words();

    printf("\nEnter the no. of rows: ");
    scanf("%d", &ROW);

    printf("\nEnter the no. of columns: ");
    scanf("%d", &COL);

    printf("\n-----------------------------------------\n");

    generateGrid(ROW, COL);
    display_grid(ROW, COL);
    printf("\n-----------------------------------------\n");

    for (i=0;i<no_of_words;i++){
        PlaceWords();
        PlaceWord(words_array[i], row1, col1 ,rand_direction);
    }

    GridRandomFill();

    display_grid(ROW, COL);

return 0;
}