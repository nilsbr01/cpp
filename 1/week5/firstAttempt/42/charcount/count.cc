size_t count(std::istream &inStream)
{
    struct Char{
        char ch;
        size_t count;
    };

    // struct Charinfo{
    //     Char *ptr;
    //     size_t nChar = 0;
    // };

    char ch;                    // read char (not otherwise used)
    while (instream.get(ch))
    {
        locate(ch);
        ++Charinfo.nChar;
    }    
}