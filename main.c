#include <stdio.h>
#define LIM 128

#include <stdio.h>

// ������� "������� ��������� ���������� ������"
// ��������� ���������� ������ �� ������ input
// ���������� EOF, ���� ������� �� �������
// (�������� ����� �����)
// ���������� 1 � ���������� ����� �� ��������� result,
// ���� ������� �������
int read_next(FILE *input, char *result);

int main(void)
{
    char first;
    char second;

    while (1) {
        if (read_next(stdin, &first) == EOF) {
            break;
        }

        if (read_next(stdin, &second) == EOF) {
            fputc(first, stdout);
            break;
        }

        fputc(second, stdout);
        fputc(first, stdout);
    }

    return 0;
}

int read_next(FILE *input, char *result)
{
    while (1) {
        int text = fgetc(input);
        if (text >= LIM) {
            continue;
        } else if (text == EOF) {
            return EOF;
        } else {
            *result = text;
            return 1;
        }
    }
}
