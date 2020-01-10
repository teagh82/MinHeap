#include "MinHeap.h"
#include "math.h"
#include <stdlib.h>

void main()
{
  MinHeap heap;

  int n;
  int cnt;
  double p = pow(2.0, 31.0);

  printf("개수 입력(1≤개수≤100,000): ");
  scanf("%d",&cnt);

  if(cnt >= 1 && cnt <= 100000)
	  printf("입력 완료!\n\n");
  else {
	  while(true) {
		printf("다시 입력해주세요!\n\n");
		printf("개수 입력(1≤개수≤100,000): ");
		scanf("%d",&cnt);
		if(cnt >= 1 && cnt <= 100000) {
			printf("입력 완료!\n\n");
			break;
		}			
	  }	  
  }

  for(int i = 0; i < cnt; i++){
	printf("자연수 입력(자연수≤2^31): ");
	scanf("%d",&n);
	if((n > 0) && ((double)n <= p)) {
		heap.insert( n );
		//heap.display();
	}		
	else if( n == 0) {
		printf("\n가장 작은 값은? ");
		HeapNode root = heap.node[1];
		root.display();
		printf("\n\n");
	}
	else {
		printf("자연수를 입력하세요!\n\n");
		--i;
	}		
  }

  printf("\n-----------------------------------------------\n");
  printf("최종 최소힙은?\n");
  heap.display();

  system("pause");
}
