#include<easyx.h>
#include<stdio.h>

int main()
{
	initgraph(640, 480, EX_SHOWCONSOLE | EX_DBLCLKS | EX_NOMINIMIZE);
	ExMessage msg = { 0 };
	while (true)
	{
		if (peekmessage(&msg, EX_MOUSE))
		{
			switch (msg.message)
			{
			case WM_LBUTTONDOWN:
				printf("左键按下");
				break;
			case WM_RBUTTONDOWN:
				printf("右键按下");
				break;
			case WM_MBUTTONDOWN:
				printf("中键按下");
				break;
			case WM_LBUTTONDBLCLK:
				printf("左键双击");
				break;
			case WM_MOUSEWHEEL:
				printf("中键滚动");
				break;
			}
		}
	}
	return 0;
}