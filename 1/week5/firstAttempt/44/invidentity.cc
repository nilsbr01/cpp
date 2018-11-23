void invIdentity(int (*rows)[10])
{
    for (int (*row)[10] = rows; row != rows + 10; ++row)
        for (int *col = *row; col != *row + 10; ++col)
            *col = (col - *row == row - rows ? 0 : 1);
}