#include <iostream>
#include <conio.h>      // _getch()
#include <windows.h>    // gotoxy, SetConsoleTextAttribute

using namespace std;

// 콘솔 좌표 이동 함수
void gotoxy(int x, int y) {
    COORD pos = { (SHORT)x, (SHORT)y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

// 팝업 메시지 함수
void showPopup() {
    int x = 30, y = 10;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN); // 파란 배경, 노란 글씨
    gotoxy(x, y);
    cout << "당신 잘하고 있어!";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); // 색상 원래대로
}

// 프로그램 시작
int main() {
    char key;

    // 그림 그리는 부분은 생략 (ASCII 아트로 미리 그려놓기)
    // gotoxy(x, y)로 그림과 위치 맞추기

    gotoxy(0, 22);
    cout << "y: 응원 메시지 / n: 종료 / 그 외: 경고 메시지" << endl;

    key = _getch();  // 키 입력 받기 (Enter 없이 한글자)

    if (key == 'n' || key == 'N') {
        gotoxy(0, 25);
        cout << "프로그램을 종료합니다." << endl;
        return 0;
    }
    else if (key == 'y' || key == 'Y') {
        showPopup();  // 팝업 메시지 출력
    }
    else {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED); // 빨간 글씨
        gotoxy(0, 27);  // 잔디 아래 아무 위치
        cout << "다시 입력해주세요!!!" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); // 색상 원래대로
    }

    return 0;
}
