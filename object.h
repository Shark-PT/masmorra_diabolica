<<<<<<< HEAD
typedef struct object {
   const char    *description;
   const char    *tag;
   struct object *location;
} OBJECT;
extern OBJECT objs[];
#define field      (objs + 0)
#define cave       (objs + 1)
#define silver     (objs + 2)
#define gold       (objs + 3)
#define guard      (objs + 4)
#define player     (objs + 5)
=======
typedef struct object {
   const char    *description;
   const char    *tag;
   struct object *location;
} OBJECT;
extern OBJECT objs[];
#define field      (objs + 0)
#define cave       (objs + 1)
#define silver     (objs + 2)
#define gold       (objs + 3)
#define guard      (objs + 4)
#define player     (objs + 5)
>>>>>>> d16e66c38d40e8df9d565c27dbe6f7aab6793c80
#define endOfObjs  (objs + 6)