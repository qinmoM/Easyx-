#include<stdio.h>
#include<easyx.h>

int main()
{
	initgraph(750, 537);
	IMAGE i;
	loadimage(&i, L"image\\haha.png", 750, 537);
	putimage(0, 0, &i);
	//initgraph(750, 537);
	//IMAGE img;
	//loadimage(&img, L"haha.png", 750, 537);
	//putimage(0, 0, &img);
	getchar();
	return 0;
}