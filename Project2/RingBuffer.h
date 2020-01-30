#pragma once
#include "BufferNode.h"
#include "Input.h"

struct RingBuffer
{
	BufferNode *IndexIn;
	BufferNode *IndexOut;
	int BufferSize;
	BufferNode *Head;
	int FreeSpace;
	int OccupiedSpace;
	//TODO: RSDN
	bool IsDeleted = true;
};

void RingBufferCreation(RingBuffer *);
void BufferInitialisation(RingBuffer *);
void RingBufferPut(RingBuffer *, int);
int RingBufferGet(RingBuffer *);
void RingBufferDeleting(RingBuffer *);