#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int *arr;
    int size;
} List;

List create_list() {
    List l;
    l.arr = NULL;
    l.size = 0;
    return l;
}

void push(List* l, int val) {
    int *temp = realloc(l->arr, (l->size + 1)*sizeof(int));
    if(temp == NULL) return;
    l->arr = temp;
    l->arr[l->size] = val;
    l->size++;
}

void delete(List* l, int val) {
     
    int found = -1;
    for(int i = 0; i < l->size; i++) {
        if(l->arr[i] == val) {
            found = i;
            break;
        }
    }
    
    if(found==-1) return;
    
    for(int i = found; i < l->size-1; i++)
        l->arr[i] = l->arr[i+1];
        
    l->size--;
    if(l->size == 0) {
        free(l->arr);
        l->size = 0;
        l->arr = NULL;
        return;
    }   
    int *temp = realloc(l->arr, l->size*sizeof(int));
    if(temp!=NULL)
        l->arr = temp;
}

void insert(List* l, int index, int val) {
    if(index < 0|| index > l->size) return;
    int *temp = realloc(l->arr,(l->size+1)*sizeof(int));
    if(temp == NULL) return;
    l->arr = temp;
    l->size++;
    for(int i = l->size -1; i > index; i--) 
        l->arr[i] = l->arr[i-1];
   l->arr[index] = val;
}
 
void pop(List* l) {
    if(l->size == 0) return;
    if(l->size == 1) {
        free(l->arr);
        l->size = 0;
        l->arr = NULL;
        return;
    }    
    int *temp = realloc(l->arr, (l->size-1)*sizeof(int));
    if(temp == NULL) return;
    l->arr = temp;
    l->size--;
}                

int* get(List* l, int index) {
    if(index < 0 || index >= l->size)
        return NULL;
    return &l->arr[index];
}
        
int main()
{
    List l = create_list();
    push(&l,10);
    push(&l,20);
    push(&l,30);
    insert(&l,1,15);
    insert(&l,3,13);
    delete(&l,3);
    pop(&l);
    for(int i = 0; i < l.size; i++)
        printf("%d ", l.arr[i]);
    printf("\n%d",*get(&l,3));
    free(l.arr);
    
    return 0;
}