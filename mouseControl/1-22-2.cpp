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
				printf("�������");
				break;
			case WM_RBUTTONDOWN:
				printf("�Ҽ�����");
				break;
			case WM_MBUTTONDOWN:
				printf("�м�����");
				break;
			case WM_LBUTTONDBLCLK:
				printf("���˫��");
				break;
			case WM_MOUSEWHEEL:
				printf("�м�����");
				break;
			}
		}
	}
	return 0;
}