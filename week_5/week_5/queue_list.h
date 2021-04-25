typedef struct node
{
    char data;
    struct node* next;
} nodeType;     // 노드타입 정의
          
//Front, Rear을 가리키는 포인터 선언
nodeType* Front;
nodeType* Rear; 

void init() { 
	Front = NULL;
	Rear = NULL; 
}

int isEmpty() { 
	return (Front == NULL);
}

int getSize() {
	nodeType *p;
	int count = 0;
	
	for(p=Front; p != NULL; p=p->next)
		count = count + 1;
	
	return count;   
}


void insert(char item)
{    
	// 삽입할 노드의 생성
    nodeType* p = (nodeType*)malloc(sizeof(nodeType));
    p->data = item;
	p->next = NULL;
     
	// 빈큐이면 Front,Rear 모두 생성된 노드를 가리킴
	// 두번째 노드부터는 Rear 뒤에 삽입
    if (isEmpty()){
		Front = p;
		Rear = p;
	} else {
		Rear->next = p;
		Rear = p;
	}
}

char delete()
{    
	nodeType* p;
	char item;
	
	if(isEmpty()){
		printf("스택이 비어있습니다.\n");
		exit(1);
	} else {
		p = Front;
		Front = Front->next;
		item = p->data;
		free(p);
		return(item);
	}
}

void printQueue()
{
	nodeType* p;
	printf("Queue의 크기는 %d입니다.\n",getSize());
	for(p=Front; p!=NULL; p=p->next)
		printf("%c\n", p->data);
}




