#ifndef MACROS_H
#define MACROS_H 

#define USING_NS_JALB    using namespace jalb
#define NS_JALB_BEGIN    namespace jalb {
#define NS_JALB_END      }

#define TICKRATE        int((1.0f / 60.0f) * 1000.0f)

#define COL_SIZE 2
#define ROW_SIZE 1

#define visibleSize Size(COLS - 1, LINES - 1)
#define visibleCenter Pos(visibleSize * 0.5)

#endif /* JALB_H */
