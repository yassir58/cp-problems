#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include<assert.h>
#define MAX_CHARACTERS 1005
#define MAX_PARAGRAPHS 5


void free_tab (char **tab);
void free_vector (char ***vector);
void free_document (char ****document);
void print_tab (char **tab);
int tab_length (char **tab);
int vector_length (char ***vector);
int doc_length (char ****doc);
char* kth_word_in_mth_sentence_of_nth_paragraph(char**** document, int k, int m, int n);
char** kth_sentence_in_mth_paragraph(char**** document, int k, int m);
char*** kth_paragraph(char**** document, int k);
int	count_words(char *str, char c);
char	*fill_tab(char  *s, int *start, int finish, char **tab);
char	**ft_split(char  *s, char c);
char ****get_document (char *str);


#endif