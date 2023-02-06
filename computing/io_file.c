#include <stdio.h>

void file_copy(void);
void count_file(void);
void count_file_ans(void);



int main(void){
    // file_copy();
    // count_file();
    count_file_ans();
}

void count_file_ans(void){
    FILE *infile = fopen("input.txt", "r");

    int chars = 0, words = 0;
    char ch;

    while ((ch = fgetc(infile)) != EOF)
    {
        chars++;

        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
        {
            words++;
        }
    }

    if (chars > 0)
    {
        words++;
    }

    printf("Total characters = %d\n", chars);
    printf("Total words = %d\n", words);
    fclose(infile);
}

void count_file(void){
    FILE *infile;
    char c;
    char str[50];

    infile = fopen("input.txt", "r");

    int char_num = 0;
    int words_num = 0;

    while (fscanf(infile, "%c", &c) != EOF)
    {
        char_num++;
    }

    fclose(infile);

    infile = fopen("input.txt", "r");

    while (fscanf(infile, "%s", str) != EOF)
    {
        words_num++;
    }


    printf("Total characters : %d\n", char_num);
    printf("Total words : %d\n", words_num);
    
    fclose(infile);
}

void file_copy(void){
    FILE *infile;
    FILE *outfile;
    char str[50];

    infile = fopen("input.txt", "r");
    outfile = fopen("output.txt", "w");
    while (fscanf(infile, "%s", str) != EOF)
    {
        fprintf(outfile, "%s ", str);

    }
    
    fclose(infile);
    fclose(outfile);
}