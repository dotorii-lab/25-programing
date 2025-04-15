#include <stdio.h>

// ANSI 색상 코드 정의
#define RESET       "\x1b[0m"
#define RED         "\x1b[41m"
#define YELLOW      "\x1b[43m"
#define BLUE        "\x1b[44m"
#define GREEN_TEXT  "\x1b[32m"
#define MAGENTA_BG  "\x1b[45m"

int main() {
    // 텍스트 출력 (지붕 위 2칸 위)
    printf("\n\n     " MAGENTA_BG GREEN_TEXT "나는 잘 시험을 보고있나?" RESET "\n");

    // 본체 출력
    printf(YELLOW "       _________        \n");
    printf("      /         \\       \n");
    printf("     /           \\      \n");
    printf(RED "    /             \\     \n");
    printf("   /               \\    \n");
    printf("  /       " YELLOW "[■]" RED "       \\   \n");
    printf(" /_________________\\  \n");
    printf(YELLOW "|   [■]     [■]    | \n");
    printf("|        ___        | \n");
    printf("|_______|___|_______| \n" RESET);

    // 배경 산과 별은 제외
    return 0;
}
