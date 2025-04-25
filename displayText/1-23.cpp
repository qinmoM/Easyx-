#include<stdio.h>
#include<easyx.h>

int main()
{
	initgraph(640, 480, 1);
	setbkmode(TRANSPARENT);//设置背景样式,透明
	settextcolor(BROWN);//设置文字颜色
	settextstyle(48, 0, _TEXT("微软雅黑"));//设置字体样式（高，宽:0为自适应，字体）
	outtextxy(1, 1, L"dfss");//打印字符串（位置，位置，字符串）L在多字节字符集不可用，故而不推荐
	outtextxy(100, 100, _T("d23"));//_TEXT()可以换为_T()
	settextstyle(48, 10, _TEXT("微软雅黑"));
	outtextxy(50, 50, L"dfss");
	int t = textwidth(_T("dfss"));//textwidth()来求宽度,textheight()求高度
	printf("%d", t);
	getchar();
	return 0;
}