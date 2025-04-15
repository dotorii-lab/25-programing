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
