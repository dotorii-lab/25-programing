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

#include <iostream>
#include <conio.h>      // _getch()
#include <windows.h>    // gotoxy, SetConsoleTextAttribute

using namespace std;

// �ܼ� ��ǥ �̵� �Լ�
void gotoxy(int x, int y) {
    COORD pos = { (SHORT)x, (SHORT)y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

// �˾� �޽��� �Լ�
void showPopup() {
    int x = 30, y = 10;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN); // �Ķ� ���, ��� �۾�
    gotoxy(x, y);
    cout << "��� ���ϰ� �־�!";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); // ���� �������
}

// ���α׷� ����
int main() {
    char key;

    // �׸� �׸��� �κ��� ���� (ASCII ��Ʈ�� �̸� �׷�����)
    // gotoxy(x, y)�� �׸��� ��ġ ���߱�

    gotoxy(0, 22);
    cout << "y: ���� �޽��� / n: ���� / �� ��: ��� �޽���" << endl;

    key = _getch();  // Ű �Է� �ޱ� (Enter ���� �ѱ���)

    if (key == 'n' || key == 'N') {
        gotoxy(0, 25);
        cout << "���α׷��� �����մϴ�." << endl;
        return 0;
    }
    else if (key == 'y' || key == 'Y') {
        showPopup();  // �˾� �޽��� ���
    }
    else {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED); // ���� �۾�
        gotoxy(0, 27);  // �ܵ� �Ʒ� �ƹ� ��ġ
        cout << "�ٽ� �Է����ּ���!!!" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); // ���� �������
    }

    return 0;
}