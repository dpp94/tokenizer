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
    token->stringLength = strlen(ts);
    
    if (token != NULL) {  /* UNSURE of use of null */
        return token;
    }else{
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
    
    TokenizerT *token = TKCreate(argv[1]);
    
    while (token->numTokens > 0) {
        
    char *tk = TKGetNextToken(token);
    /* label and print next token */
        
    }
    
    
    return 0;
}