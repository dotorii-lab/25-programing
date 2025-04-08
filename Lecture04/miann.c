int main()
{
    puts("hahaha");
        return 0;
}

#include <stdio.h>
#include <windows>

int main() {
    //빨간색텍스트

    puts("w033[31m이 텍스트는 빨간색 입니다.w033[0mWn"):

        //초록색 텍스트와 노란색 배경
        printt("w033[31m이 텍스트는 초록색이고 배경은 노란색입니다.w033[0mWn") :
       
        //빨간색텍스트
        printt("w033[31m이 텍스트는 빨간색 입니다.w033[0mWn") :

 }


#include <stdio.h>
#include <windows>

void gotoxy(int x, int y)
{
    COORD pos = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos)
}
int main() {

    // 빨간색 텍스트

    puts("\033[31m이 텍스트는 빨간색입니다.\033[0m\n");



    // 초록색 텍스트와 노란색 배경

    puts("\033[32m\033[43m이 텍스트는 초록색이고 배경은 노란색입니다.\033[0m\n");



    // 굵은 텍스트와 파란색 텍스트

    puts("\033[1m\033[34m이 텍스트는 굵고 파란색입니다.\033[0m\n");



    return 0;

}