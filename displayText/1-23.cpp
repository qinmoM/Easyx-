#include<stdio.h>
#include<easyx.h>

int main()
{
	initgraph(640, 480, 1);
	setbkmode(TRANSPARENT);//���ñ�����ʽ,͸��
	settextcolor(BROWN);//����������ɫ
	settextstyle(48, 0, _TEXT("΢���ź�"));//����������ʽ���ߣ���:0Ϊ����Ӧ�����壩
	outtextxy(1, 1, L"dfss");//��ӡ�ַ�����λ�ã�λ�ã��ַ�����L�ڶ��ֽ��ַ��������ã��ʶ����Ƽ�
	outtextxy(100, 100, _T("d23"));//_TEXT()���Ի�Ϊ_T()
	settextstyle(48, 10, _TEXT("΢���ź�"));
	outtextxy(50, 50, L"dfss");
	int t = textwidth(_T("dfss"));//textwidth()������,textheight()��߶�
	printf("%d", t);
	getchar();
	return 0;
}