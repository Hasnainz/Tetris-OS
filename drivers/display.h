#ifndef DISPLAY
#define DISPLAY

#define WIDTH 320
#define HEIGHT 200

//0 = wall
//1 = been before
//2 = passage
//3 = robot
//4 = exit
#define WALL_COLOUR 0x09
#define BEEN_BEFORE_COLOUR 0x0b
#define PASSAGE_COLOUR 0x03
#define ROBOT_COLOUR 0x4c
#define EXIT_COLOUR 0x41

void clear_screen(unsigned char colour);
void pixel(int pos_x, int pos_y, unsigned char VGA_Colour);
void line(int x1, int y1, int x2, int y2, unsigned char colour);
void polygon(int vertices,int* vert_coords, unsigned char colour);

#endif
