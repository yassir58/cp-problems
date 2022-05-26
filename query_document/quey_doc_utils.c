#include "header.h"


void free_tab (char **tab)
{
    int i;

    i = 0;
    while (tab[i])
    {
        free (tab[i]);
        i++;
    }
    free (tab);
}


void free_vector (char ***vector)
{
    int i;

    i = 0;
    while (vector[i])
    {
        free_tab(vector[i]);
        i++;
    }
    free (vector);
}

void free_document (char ****document)
{
    int i;

    i = 0;
    while (document[i])
    {
        free_vector (document[i]);
        i++;
    }
    free (document);
}

void print_tab (char **tab)
{
    int i;

    i = 0;
    printf ("sentence  \n");
    while (tab[i])
    {
        printf ("|%s| ", tab[i]);
        i++;
    }
    printf ("\n");
}

int tab_length (char **tab)
{
    int i;

    i = 0;
    while (tab[i])
        i++;
    return (i); 
}

int vector_length (char ***vector)
{
    int i;

    i = 0;
    while (vector[i])
        i++;
    return (i); 
}
int doc_length (char ****doc)
{
    int i;

    i = 0;
    while (doc[i])
        i++;
    return (i); 
}