#include <stdio.h>

int main(void)
{
    int totalSeconds;  // 입력받을 전체 초
    int hour;          // 계산된 시간
    int minute;        // 계산된 분
    int second;        // 계산된 초

    printf("총 시간을 초 단위로 입력하세요: ");  // 입력 안내 문구를 출력
    scanf_s("%d", &totalSeconds);                // 정수를 입력받아 totalSeconds에 저장

    hour = totalSeconds / 3600;           // 전체 초를 3600으로 나누어 시간을 계산한다.
    minute = (totalSeconds % 3600) / 60;  // 시간을 제외한 나머지 초를 60으로 나누어 분을 계산
    second = totalSeconds % 60;          // 분까지 제외하고 남은 초를 계산

    printf("%d초는 %d시간 %d분 %d초입니다.\n", totalSeconds, hour, minute, second);  // 변환 결과를 문장 형태로 출력한다.

    printf("디지털 표기: %02d:%02d:%02d\n", hour, minute, second);  // 각 숫자를 최소 두 자리로 출력하고 빈자리는 0으로 채운다.

    return 0;


#include <stdio.h>

int main(void)
{
    int nTotalSeconds; // 총 초
    int nHour;         // 시간
    int nMinute;       // 분
    int nSecond;       // 초

    printf("Enter the total time in seconds: "); // 사용자에게 전체 시간을 초 단위로 입력받음
    scanf_s("%d", &nTotalSeconds); // 입력한 초 값을 nTotalSeconds에 저장

    nHour = nTotalSeconds / 3600; // 전체 초를 3600으로 나누어 시간 계산
    nMinute = (nTotalSeconds % 3600) / 60; // 시간을 제외한 나머지 초로 분 계산
    nSecond = nTotalSeconds % 60; // 분까지 제외하고 남은 초 계산

    printf("%d seconds is %d hours %d minutes %d seconds.\n", nTotalSeconds, nHour, nMinute, nSecond); // 계산한 시간, 분, 초를 문장 형태로 출력

    printf("Digital format: %02d:%02d:%02d\n", nHour, nMinute, nSecond); // 시간을 시:분:초 형식의 디지털 표기로 출력

    return 0;
