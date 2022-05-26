#include "header.h"



char* kth_word_in_mth_sentence_of_nth_paragraph(char**** document, int k, int m, int n) 
{
    int document_length;
    int vect_length;
    int tab_len;

    document_length = doc_length (document);
    if (document_length >= n)
    {
        vect_length = vector_length (document[n - 1]);
        if (vect_length >= m)
        {
            tab_len = tab_length(document[n - 1][m - 1]);
            if (tab_len >= k)
                return (document[n- 1][m - 1][k - 1]);
        }
    }
    return (NULL);
}

char** kth_sentence_in_mth_paragraph(char**** document, int k, int m) 
{ 
    int document_length;
    int vect_length;

    document_length = doc_length (document);
    if (document_length >= m)
    {
        vect_length = vector_length (document[m - 1]);
        if (vect_length >= k)
            return (document[m - 1][k - 1]);
    }
    return (NULL);
}

char*** kth_paragraph(char**** document, int k)
{
    int document_length;

    document_length = doc_length (document);
    if (document_length >= k)
        return (document[k - 1]);
    return (NULL);
}