#include "sort.ih"

int Sort::compareWrapper(void const *s1, void const *s2)
{
    return
        (*d_function)
        (
            static_cast<std::string const *const *>(s1),
            static_cast<std::string const *const *>(s2)
        );
}
    