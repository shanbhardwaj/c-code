#include <stdio.h>

typedef struct Nameval
{
  char *name;
  int val;
  Nameval *next;
};

/* Create a new item from name and val */
Nameval *newitem(char *name, int val){
  Nameval *newp;
  newp = (Nameval *) emalloc(sizeof(Nameval));
  newp->name = name;
  newp->val = val;
  newp->next = NULL;
  return newp
}

/* addfront: add newp to the front of the list */
Nameval *addfront(Nameval *listp, Nameval *newp){
  listp->next = newp;
  return newp
}

/* addend: add newp to the end of the list */
Nameval *addend(Nameval *listp, Nameval *newp){

  Nameval *p;

  if (listp == NUL) {
    return newp;
  }
  for (p = list; p->next != NULL; ++i; p = p->next);
  p->next = newp;

  return listp;

  /* lookup: sequential search for name in listp */
  Nameval *lookup(Nameval *listp, char *name){
    for (; listp != NULL; listp -> listp->next) {
      if (strcmp(listp->name, name) == 0) {
        return listp;
      }
    }
    return NULL;
  }

  /* apply: execute fn for each element of the list */
  void apply(Nameval *listp, void (*fn)(Nameval *, void*), void *arg){
    for (; listp != NULL; listp = listp->next) {
      (*fn)(listp, arg);
    }
  }

  /* printnv: print name and value using format in arg */
  void printnv(Nameval *listp, void *arg){
    char *fmt;
    fmt = (char *) arg;
    printf(fmt, p->name, p->val);
  }

  /* inccounter: increment counter *arg */
  void inccounter(Nameval *listp, void *arg){
    int *p;
    p = (int *) arg;
    (*p)++;
  }

  /* freeall: free all the elements of the list */
  void freeall(Nameval * listp){
    Nameval *next;
    for (; listp != NULL; listp = next) {
      next = listp->next;
      free(listp);
    }

  }
  /* deleteitem: delete first name from list */
  Nameval *deleteitem(Nameval *listp, char *name){

    Nameval *p, *prev;
    prev = NULL;

    for (p = listp; p != NULL; p = p->next) {
      if (strcmp(p->name, name) == 0) {
        if(prev == NULL){
          listp = p->next;
        }else {
          prev->next = p->next;
        }
        free(p);
        return listp;
      }
    }
    printf("delitem: %s is not in the list", name);
    return NULL;
  }

  int main(int argc, char *argv[])
  {

    return 0;
  }
