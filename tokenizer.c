/*
 * tokenizer.c
 */
#include <stdio.h>
#include <string.h> /* is needed for strlen() */
#include <stdlib.h> /* is needed for malloc() */
#include <ctype.h> /* is needed for isdigit, isupper, islower */

/*
 * Tokenizer type.  You need to fill in the type as part of your implementation.
 */

struct TokenizerT_ {
    
    long stringLength;
    char *string;
    int numTokens; /* represents number of tokens in string */
    
};

typedef struct TokenizerT_ TokenizerT;

/*
 * TKCreate creates a new TokenizerT object for a given token stream
 * (given as a string).
 *
 * TKCreate should copy the arguments so that it is not dependent on
 * them staying immutable after returning.  (In the future, this may change
 * to increase efficiency.)
 *
 * If the function succeeds, it returns a non-NULL TokenizerT.
 * Else it returns NULL.
 *
 * You need to fill in this function as part of your implementation.
 */

TokenizerT *TKCreate( char * ts ) {
    
    TokenizerT *token = malloc(sizeof(TokenizerT));
    
    token->string = ts;
    //token->stringLength = strlen(ts); //made it a comment to run the code
    
    if (token != NULL) {  /* UNSURE of use of null */ //you need this so program knows when to stop
        printf("1\n");
        return token;
    }else{
        printf("2");
        return NULL;
    }
}

/*
 * TKDestroy destroys a TokenizerT object.  It should free all dynamically
 * allocated memory that is part of the object being destroyed.
 *
 * You need to fill in this function as part of your implementation.
 */

void TKDestroy( TokenizerT * tk ) {
    
    free(tk);
    
}

/*
 * TKGetNextToken returns the next token from the token stream as a
 * character string.  Space for the returned token should be dynamically
 * allocated.  The caller is responsible for freeing the space once it is
 * no longer needed.
 *
 * If the function succeeds, it returns a C string (delimited by '\0')
 * containing the token.  Else it returns 0.
 *
 * You need to fill in this function as part of your implementation.
 */

char *TKGetNextToken( TokenizerT * tk ) {
    
    
    
    return NULL;
}

/*
 * main will have a string argument (in argv[1]).
 * The string argument contains the tokens.
 * Print out the tokens in the second string in left-to-right order.
 * Each token should be printed on a separate line.
 */

int main(int argc, char **argv) {
    
    char string[100];       //will remove this and 6 lines below once code is up and good
    printf("Enter string: (hit enter twice after done entering)\n");
    fgets(string, 100, stdin);
    scanf("%[^\n]%*c", &string);
    printf("\n");
    argv[1] = string;
    //printf("%s\n", argv[1]);
    
    
    if(argc == 2){ //****************** (argc != 2) *********** BEFORE SUBMITTING
        printf("\nERROR: INVALID NUMBER OF ARGUMENTS\n");
        printf("\nNEED: ./tokenizer \"today is a beautiful day\"\n");
        return 0;
    }
    
    TokenizerT* tokenizer = TKCreate(argv[1]);
    
    if(tokenizer == NULL) {
        printf("\nERROR: UNABLE TO CREATE TOKENIZER\n");
    }
    
    char* token = NULL;
    
    //Print tokens
    while((token = TKGetNextToken(tokenizer)) != NULL) {
        printf("%s\n", token);
        free(token);
    }
    
    TKDestroy(tokenizer);
    
    
    return 0;
}