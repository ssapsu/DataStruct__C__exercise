#include <stdio.h>

int main() {
    int arr[100] = { 0 }, arr_len, num, num_arr[30], n = 0, temp;

    //�迭 �Է¹ޱ�
    scanf("%d", &arr_len);
    for (int i = 0; i < arr_len; i++)
    {
        scanf("%d", &arr[i]);
    }

    //���� �Է¹ޱ� �� ���� �迭�� �ֱ�
    scanf("%d", &num);
    for (int i = 0; i < num * 2; i++)
        scanf("%d", (num_arr + i));

    for (int i = 0; i < num * 2; i += 2)
    {
        int a = num_arr[i], b = num_arr[i + 1];
        n = 0;
        if ((b - a) % 2 != 0)  //¦���� ����̹Ƿ� ����� ó�� ���ص� ��
            while ((a + n + 1 <= b - n))
            {
                temp = arr[a+n];
                arr[a+n] = arr[b-n];
                arr[b-n] = temp;
                n++;
            }
        else                     //Ȧ���̹Ƿ� ��� ���� ���θ�
            while(a+n!=b-n)
            {
                temp = arr[a + n];
                arr[a + n] = arr[b - n];
                arr[b - n] = temp;
            n++;
            }   
    }
    for (int i = 0; i < arr_len; i++)
        printf("%d ", *(arr + i));
}