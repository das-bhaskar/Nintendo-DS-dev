#include <stdio.h>
#include <nds.h>
#include </opt/devkitpro/nflib/template/nflib/include/nf_lib.h>

#include "keyinput.h"

int main(int argc, char **argv)
{

    Keyboard *keyboardDemoInit();
    consoleDemoInit();
    consoleClear();
    setBrightness(3, 0);

    iprintf("\n hello world");
    int key;
    char inputig[30];

    while (1)
    {

        consoleClear();
        key = getKey(KA, KB);
        if (key == KA)
        {
            iprintf("button A is pressed");
        }
        if (key == KB)
            iprintf("button B was pressed");

        scanf("%s", inputig);

        swiWaitForVBlank();
    }
    return 0;
}