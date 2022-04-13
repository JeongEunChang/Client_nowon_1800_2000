#include <stdio.h>
#include <stdlib.h>

typedef struct _Node {
    int id;
    int value;
    struct _Node* next;
}Node;

Node* head, *tail, *tmp, *tmp2;

void Add(int in_id, int in_value) {
    tmp = (Node*)malloc(sizeof(Node));
    if (head == NULL)
        head = tmp;
    else
        tail->next = tmp;

    tmp->id = in_id;
    tmp->value = in_value;
    tmp->next = NULL;
    tail = tmp;
}

void AddLast(int in_id, int in_value) {
    tmp = (Node*)malloc(sizeof(Node));
    if (head == NULL)
        head = tmp;
    else
        tmp->next = head;

    tmp->id = in_id;
    tmp->value = in_value;
    head = tmp;
}

void AddAfter(int target_id, int in_id, int  in_value) {
    tmp = head;
    while (tmp != NULL) {
        if (tmp->id == target_id) {
            tmp2 = (Node*)malloc(sizeof(Node*));
            if (tmp->next != NULL) {
                tmp2->next = tmp->next;
            }
            tmp->next = tmp2;
            tmp2->id = in_id;
            tmp2->value = in_value;
            return;
        }
        tmp = tmp->next;
    }
    return;
}

void ShowAll() {
    tmp = head;
    printf("(id, value) : ");
    
    while (tmp != NULL) {
        printf("(%d %d)", tmp->id, tmp->value);
        tmp = tmp->next;
    }
    printf("\n");
}

int main()
{
    AddLast(1, 3);
    AddLast(3, 25);
    AddLast(6, 35);
    AddLast(21, 4);
    ShowAll();

    return 0;
}




// ㅠㅠ 다시 돌려보면서 해야할 듯