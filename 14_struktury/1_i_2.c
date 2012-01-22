/*
Przyjmujemy konwencję, że prostokąt zawiera wszystkie swoje krawędzie

*/

#include <stdio.h>

struct point {
  int x;
  int y;
};

struct rect {
  struct point ll;  /* lower left */
  struct point ur;  /* upper right */
};

int rectinrect(struct rect r1, struct rect r);
struct point makepoint(int x, int y);
int ptinrect(struct point p, struct rect r);
int disjointrect(struct rect r1, struct rect r2);

int main()
{
  struct rect r1[6] = {
  { {1, 1}, {3, 3} },
  { {0, 0}, {3, 3} },
  { {0, 0}, {3, 3} },
  { {0, 0}, {3, 3} },
  { {3, 3}, {6, 6} },
  { {3, 3}, {6, 6} }
  };
  
  
  struct rect r2[6] = {
  { {0, 0}, {6, 6} },
  { {4, 4}, {6, 6} },
  { {3, 3}, {6, 6} },
  { {2, 2}, {6, 6} },
  { {1, 1}, {3, 3} },
  { {1, 1}, {2, 2} }
  };

int a;

for(a = 0; a <6; a++)
printf("%d\n", disjointrect(r1[a],r2[a]));

  return 0;
}

/* disjointrect: zwróć 1 jeśli r1 jest rozłączny z r2,
   0 — w przeciwnym przypadku */
int disjointrect(struct rect r1, struct rect r2){

return !(
((r1.ll.x >= r2.ll.x && r1.ll.y >= r2.ll.y) && (r1.ll.x <= r2.ur.x && r1.ll.y <= r2.ur.y))
||
((r1.ur.x >= r2.ll.x && r1.ur.y >= r2.ll.y) && (r1.ur.x <= r2.ur.x && r1.ur.y <= r2.ur.y))
);
}


/* rectinrect: zwróć 1 jeśli r1 jest zawarty w r2, 0
   — w przeciwnym przypadku */
int rectinrect(struct rect r1, struct rect r2){
  return (r1.ll.x >= r2.ll.x && r1.ll.y >= r2.ll.y && r1.ur.x <= r2.ur.x && r1.ur.y <= r2.ur.y);
}


struct point makepoint(int x, int y) {
  struct point tmp;
  tmp.x = x;
  tmp.y = y;
  return tmp;
}

/* ptinrect: zwróć 1 jeśli p należy do r, 0 jeśli nie należy */
int ptinrect(struct point p, struct rect r) {
  return p.x >= r.ll.x && p.x <= r.ur.x
      && p.y >= r.ll.y && p.y <= r.ur.y;
}
