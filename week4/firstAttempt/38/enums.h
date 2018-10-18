
enum RAM 
{
    SIZE = 20
};

// values in this enum are the int values we get from function
// stoul(string var, 0, 36) when we insert the names of the opcodes
// as strings to stoul.
enum Opcode
{
    ERR = 19143,
    MOV = 29407,
    ADD = 13441,
    SUB = 37379,
    MUL = 29613,
    DIV = 17527,
    NEG = 30328,
    DSP = 17881
};

enum OperandType
{
    SYNTAX,
    VALUE,
    REGISTER,
    MEMORY
};