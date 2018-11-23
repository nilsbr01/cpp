#include "tokenizer.ih"

OperandType Tokenizer::token()
{
    string word;
    cin >> word;

    char first = word[0];

    if (first == '@')
        return MEMORY;
    else if (first >= '0' && first <= '9')
        return VALUE;
    else if (first >= 'a' && first <= 'z')
        return REGISTER;
    else
        return SYNTAX;
}