#ifndef __SIMPLE_HEAP_H_
#define __SIMPLE_HEAP_H_

#define HEAP_LEN 100

typedef char HData;
typedef int PriorityComp(HData d1, HData d2);

typedef struct _heap {
	int (PriorityComp *) comp;
	int numOfData;
	HeapElem heapArr[HEAP_LEN];
}Heap;

void HeapInit(Heap * ph, PriorityComp pc);
int HIsEmpty(Heap * ph);

void HInsert(Heap * ph, HData data);
HData HDelete(Heap * ph);

#endif