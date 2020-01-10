#include "MinHeap.h"
#include "math.h"
#include <stdlib.h>

void main()
{
  MinHeap heap;

  int n;
  int cnt;
  double p = pow(2.0, 31.0);

  printf("���� �Է�(1�°�����100,000): ");
  scanf("%d",&cnt);

  if(cnt >= 1 && cnt <= 100000)
	  printf("�Է� �Ϸ�!\n\n");
  else {
	  while(true) {
		printf("�ٽ� �Է����ּ���!\n\n");
		printf("���� �Է�(1�°�����100,000): ");
		scanf("%d",&cnt);
		if(cnt >= 1 && cnt <= 100000) {
			printf("�Է� �Ϸ�!\n\n");
			break;
		}			
	  }	  
  }

  for(int i = 0; i < cnt; i++){
	printf("�ڿ��� �Է�(�ڿ�����2^31): ");
	scanf("%d",&n);
	if((n > 0) && ((double)n <= p)) {
		heap.insert( n );
		//heap.display();
	}		
	else if( n == 0) {
		printf("\n���� ���� ����? ");
		HeapNode root = heap.node[1];
		root.display();
		printf("\n\n");
	}
	else {
		printf("�ڿ����� �Է��ϼ���!\n\n");
		--i;
	}		
  }

  printf("\n-----------------------------------------------\n");
  printf("���� �ּ�����?\n");
  heap.display();

  system("pause");
}
