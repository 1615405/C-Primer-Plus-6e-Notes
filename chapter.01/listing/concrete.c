#include <stdio.h>

int main(void)
{
    printf("Concrete contains gravel and cement.\n");

    return 0;
}

/**************
1. An assembly language is a mnemonic representation of the set of internal instructions used by a particular central processing unit design; 
different CPU families have different assembly languages.

2. The compiler is a program that translates the high-level language program into the detailed set of machine language instructions 
the computer requires.

3. The compiler converts your source code to an intermediate code, and the linker combines this with other code to produce the executable file.

4. The role of the linker is to bring together these three elements--your object code, the standard startup code for your system,
and the library code--and put them together into a single file, the executable file. For library code, the linker extracts only
the code needed for the functions you use from the library.

***************/