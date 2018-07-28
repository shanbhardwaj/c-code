#include <stdio.h>

typedef struct Nameval
{
  char *name;
  int value;
  Nameval *left;
  Nameval *right;
} Nameval;

/* insert: insert newp in tree, return treep */
Nameval *insert(Nameval *treep, Nameval *newp){
  int cmp;

  if (treep == NULL)
    return newp;
  if (cp == 0)
    weprintf("insert: duplicate entry %s ignored", newp->name);
  else if (cp < 0) {
    treep->left = insert(treep->left, newp);
  } else {
    treep->right = insert(treep->right, newp);
  }

  return treep;
}

/* lookup: lookup newp in tree, return treep */
Nameval *lookup(Nameval *treep, Nameval *newp){
  int cmp;

  if (treep == NULL)
    return NULL;
  if (cp == 0)
    return treep;
  else if (cp < 0) {
    treep->left = lookup(treep->left, newp);
  } else {
    treep->right = lookup(treep->right, newp);
  }

  return treep;
}

/* applyinorder: in order application of fn to treep */
void applyinorder(Nameval *treep, void (*fn)(Nameval *, void*), void *arg){
  if (treep == NULL) {
    return;
  }
  applyinorder(treep->left, fn, arg);
  (*fn)(treep, arg);
  applyinorder(treep->right, fn, arg);
}

/* applypostorder: post order application of fn to treep */
void applypostorder(Nameval *treep, void (*fn)(Nameval *, void*), void *arg){
  if (treep == NULL) {
    return;
  }
  applypostorder(treep->left, fn, arg);
  applypostorder(treep->right, fn, arg);
  (*fn)(treep, arg);
}
