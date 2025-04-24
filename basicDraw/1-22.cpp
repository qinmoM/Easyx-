#include<stdio.h>
#include<easyx.h>

int main()
{
	initgraph(640, 480, EX_SHOWCONSOLE | EX_NOMINIMIZE | EX_NOCLOSE);//创建界面
	setbkcolor(RGB(23, 123, 123));//设置背景颜色  //RGB:三原色调色
	cleardevice();//清除界面,也可以刷新背景

	putpixel(50, 50, RGB(123, 123, 123));//绘制一个点（坐标，坐标，颜色）

	setlinecolor(RGB(200, 23, 200));//设置线条颜色
	setfillcolor(CYAN);//设置填充颜色

	setlinestyle(PS_SOLID, 4);//设置线条样式（样式，宽度）
	line(0, 0, getwidth(), getheight());//绘制线条（起始坐标，起始坐标，终止坐标，终止坐标）

	rectangle(0, 0, 50, 50);//绘制直角无填充矩形（起始坐标，起始坐标，终止坐标，终止坐标）
	fillrectangle(0, 50, 50, 100);//绘制直角填充内部的矩形（起始坐标，起始坐标，终止坐标，终止坐标）
	solidrectangle(0, 100, 50, 150);//绘制无边框填充矩形（起始坐标，起始坐标，终止坐标，终止坐标）

	roundrect(60, 0, 110, 50, 20, 10);//绘制圆角矩形（起始坐标，起始坐标，终止坐标，终止坐标，圆角宽，圆角高）
	fillroundrect(60, 50, 110, 100, 10, 20);//绘制圆角填充矩形（起始坐标，起始坐标，终止坐标，终止坐标，圆角宽，圆角高）
	solidroundrect(60, 100, 110, 150, 30, 40);//绘制圆角填充无边框矩形（起始坐标，起始坐标，终止坐标，终止坐标，圆角宽，圆角高）

	circle(200, 100, 50);//绘制圆形（坐标，坐标，半径）
	fillcircle(300, 200, 50);//绘制填充圆形（坐标，坐标，半径）
	solidcircle(400, 300, 50);//绘制无边框填充圆形（坐标，坐标，半径）
	outtextxy(10, 10, 'h');
	getchar();//卡屏
	return 0;
}