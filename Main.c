//Main for Final Project Ese 124 Robert Bacigalupo,Melvin Mathew,Adam Zeng
#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"functions.h"
#include"stack.h"
#define MAX_SIZE 100


/*old states
#define idle 0 //state to say action not carried out
#define itchL 1//cwl executed and itch present
#define itchF 2//cwF executed and itch present
#define itchR 3//cwr executed and itch present
#define itchB 4//cwB executed and itch present
#define Moved 5//Move action executed suscessfully
*/
//states
#define idle 0
#define cwL 1
#define cwF 2
#define cwR 3
#define cwB 4
#define Move_F 5
#define Move_B 6
#define Move_L 7
#define Move_R 8
#define Push 9
#define Pop 10
#define Peek 11
#define Clear 12
#define BJPI 13
#define CJPI 14
#define Back 15
#define Rp 16
#define END 17
//inputs
#define Mark 0
#define cwL 1
#define cwF 2
#define cwR 3
#define cwB 4
#define Move_F 5
#define Move_B 6
#define Move_L 7
#define Move_R 8
#define Push 9
#define Pop 10
#define Peek 11
#define Clear 12
#define BJPI 13
#define CJPI 14
#define Back 15
#define Rp 16
#define EOS 17

char act[MAX_SIZE][10];//To store List of actions from Intelligence file
int max_energy=100;//Max energy of Michael

int transition[5][18]= {
	//Mark cwL cwF cwR cwB Move_F Move_B Move_L Move_R Push Pop Peek Clear BJPI CJPI Back Rp EOS
	idle, cwL, cwF, cwR, cwB, Move_F, Move_B, Move_L, Move_R, Push, Pop, Peek, Clear, BJPI, CJPI, Back, Rp, End,    //idle
	idle, cwL, cwF, cwR, cwB, Move_F, Move_B, Move_L, Move_R, Push, Pop, Peek, Clear, BJPI, CJPI, Back, Rp, End,    //cwL
	idle, cwL, cwF, cwR, cwB, Move_F, Move_B, Move_L, Move_R, Push, Pop, Peek, Clear, BJPI, CJPI, Back, Rp, End,    //cwR
	idle, cwL, cwF, cwR, cwB, Move_F, Move_B, Move_L, Move_R, Push, Pop, Peek, Clear, BJPI, CJPI, Back, Rp, End,    //cwB
	idle, cwL, cwF, cwR, cwB, Move_F, Move_B, Move_L, Move_R, Push, Pop, Peek, Clear, BJPI, CJPI, Back, Rp, End,    //Move_F
	idle, cwL, cwF, cwR, cwB, Move_F, Move_B, Move_L, Move_R, Push, Pop, Peek, Clear, BJPI, CJPI, Back, Rp, End,    //Move_B
	idle, cwL, cwF, cwR, cwB, Move_F, Move_B, Move_L, Move_R, Push, Pop, Peek, Clear, BJPI, CJPI, Back, Rp, End,    //Move_L
	idle, cwL, cwF, cwR, cwB, Move_F, Move_B, Move_L, Move_R, Push, Pop, Peek, Clear, BJPI, CJPI, Back, Rp, End,    //Move_R
	idle, cwL, cwF, cwR, cwB, Move_F, Move_B, Move_L, Move_R, Push, Pop, Peek, Clear, BJPI, CJPI, Back, Rp, End,    //Push
	idle, cwL, cwF, cwR, cwB, Move_F, Move_B, Move_L, Move_R, Push, Pop, Peek, Clear, BJPI, CJPI, Back, Rp, End,    //Pop
	idle, cwL, cwF, cwR, cwB, Move_F, Move_B, Move_L, Move_R, Push, Pop, Peek, Clear, BJPI, CJPI, Back, Rp, End,    //Peek
	idle, cwL, cwF, cwR, cwB, Move_F, Move_B, Move_L, Move_R, Push, Pop, Peek, Clear, BJPI, CJPI, Back, Rp, End,    //Clear
	idle, cwL, cwF, cwR, cwB, Move_F, Move_B, Move_L, Move_R, Push, Pop, Peek, Clear, BJPI, CJPI, Back, Rp, End,    //BJPI
	idle, cwL, cwF, cwR, cwB, Move_F, Move_B, Move_L, Move_R, Push, Pop, Peek, Clear, BJPI, CJPI, Back, Rp, End,    //CJPI
	idle, cwL, cwF, cwR, cwB, Move_F, Move_B, Move_L, Move_R, Push, Pop, Peek, Clear, BJPI, CJPI, Back, Rp, End,    //Back
	idle, cwL, cwF, cwR, cwB, Move_F, Move_B, Move_L, Move_R, Push, Pop, Peek, Clear, BJPI, CJPI, Back, Rp, End    //Rp
	

}
//needs to find entry
int main() {
	
	return 0;
}
