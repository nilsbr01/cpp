#include <iostream>

char const snippet[]=                   // define snippet as raw string variable
R"R(^\s+Encryption key:(\w+)
^\s+Quality=(\d+)
^\s+E?SSID:"([[:print:]]+)"
^\s+ssid="([[:print:]]+)"
)R";

int main(int argc, char *argv[])
{
    std::cout << snippet;               // print snippet 
}