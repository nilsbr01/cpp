#include <fstream>
#include <thread>
#include "handler/handler.h"

using namespace std;

int main(int argc, char *argv[])
{
    string filename(argv[1]);
    string text(argv[2]);
    ofstream file(filename);

    Handler handler;

    thread shift1(&Handler::shift, &handler, ref(file), text);
    shift1.join();

    thread shift2([&] {
        Handler handler2;
        handler2.shift(file, text);
    });
    shift2.join();
}