#include "tokenizer.ih"

void Tokenizer::reset()
{
    string line;

    //get line, so remove from cin. If not possible, clear cin
    if(!getline(cin, line))
        cin.clear();
}